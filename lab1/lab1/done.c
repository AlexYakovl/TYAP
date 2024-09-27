#include <stdio.h>;
#include <stdlib.h>;
#
#include <fstream>;
#include <o*
using namespace std;


typedef enum states { Normal, Slash, Comment, Done } states;

int main(int agrc, char** argv) {

	ifstream in("test.txt");
	ofstream out("done.txt");
	states state = Normal;
	char sym;

	
			{
			case Normal:
				 == '/') {
					state = Slash;
				}
				else {
					out.put(sym);
				}
				break;
			case Slash:
				if (sym == '*') {
					state = Comment;

				}
				else if (sym == '/') {
					out.put(sym);
					state = Slash;
				}
				else {
					out.put('/');
					out << sym; a
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

xcvmsd       "sfjhsdfs
sdfkjsdfjsdfkj"

asfjaksdahas " \" \\/*\' "
jasdlkf 
fjzflkg;fgz;gzfh;k
sdasdasdj ' \n \\ \" '