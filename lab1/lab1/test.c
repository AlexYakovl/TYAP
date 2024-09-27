#include <stdio.h>;
#include <stdlib.h>;
#//include <iostream>;
#include <fstream>;
#include <o/** */*//**/stream>;
using namespace std;


typedef enum states { Normal, Slash, Comment, Done } states;

int main(int agrc, char** argv) {

	ifstream in("test.txt");
	ofstream out("done.txt");
	states state = Normal;
	char sym;

	/*if (in.is_open() && out.is_open()) {
		while (!in.eof()) {
			switch (state)**/
			{
			case Normal:
				/*if (sym*/ == '/') {
					state = Slash;
				}
				else {
					out.put(sym);
				}
				break;
			case Slash:
				/***//****/if (sym == '*') {
					state = Comment;

				}
				else if (sym == '/') {
					out.put(sym);
					state = Slash;
				}
				else {
					out.put('/');
					out << sym; a//*asdhasdhasd*/ b
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
			default:
				break;
			}
		
		}

	}

	in.close();
	out.close();

	return 0;
};

aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa


asdjk"asdasfxc// asda sd /* */ asdjxzck"

ajhznva'aksd // adasd /* */ zclvafa'

xcvmsd   /**/    "sfjhsdfs
sdfkjsdfjsdfkj"

asfjaksdahas " \" \\/*\' "
jasdlkf // asdasd"
fjzflkg;fgz;gzfh;k
sdasdasdj ' \n \\ \" '