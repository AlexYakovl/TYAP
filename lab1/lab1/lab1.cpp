#include <stdio.h>; 
#include <stdlib.h>; 
#include <iostream>; 
#include <fstream>; 
#include <ostream>; 
#include <string>; 
using namespace std;


typedef enum states { Normal, Slash, Comment, Done, Slashslash, Odin, Dvoin, SlashOdin, SlashDvoin } states;

int main(int agrc, char** argv) {

    ifstream in("test.c");
    ofstream out("done.c");
    states state = Normal;
    char sym;

    if (in.is_open() && out.is_open()) {
        while ((sym = in.get()) != EOF) {
            switch (state)
            {
            case Normal:
                if (sym == '/') {
                    state = Slash;
                }
                else if (sym == '\'') {
                    state = Odin;
                    out.put('\'');
                }
                else if (sym == '\"') {
                    state = Dvoin;
                    out.put('\"');
                }
                else {
                    out.put(sym);
                }

                break;
            case Slash:
                if (sym == '/') {
                    state = Slashslash;

                }
                else if (sym == '*') {
                    state = Comment;

                }
                else {
                    state = Normal;
                    out.put('/');
                    out.put(sym);
                }
                break;
            case Slashslash:
                if (sym == '\n') {
                    out.put('\n');
                    state = Normal;
                }
                else if (sym == '\r') {
                    out.put('\r');
                    state = Normal;
                }
                break;
            case Comment:
                if (sym == '*') {
                    state = Done;
                }
                break;
            case Done:
                if (sym == '/') {
                    state = Normal;
                }
                else if (sym == '*') {
                    state = Done;
                }
                else {
                    state = Comment;
                }
                break;

            case Odin:
                if (sym == '\'') {
                    state = Normal;
                    out.put('\'');
                }
                else if (sym == '\\') {
                    state = SlashOdin;
                    out.put('\\');
                }
                else {
                    out.put(sym);
                }
                break;
            case Dvoin:
                if (sym == '\"') {
                    state = Normal;
                    out.put('\"');
                }
                else if (sym == '\\') {
                    state = SlashDvoin;
                    out.put('\\');
                }
                else {
                    out.put(sym);
                }
                break;
            case SlashOdin:
                out.put(sym);
                state = Odin;
                break;
            case SlashDvoin:
                out.put(sym);
                state = Dvoin;
                break;
            }
        }

    }
    in.close();
    out.close();
    return 0;
};