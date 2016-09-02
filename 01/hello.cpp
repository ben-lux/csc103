#include <iostream>
/* what the above really does: iostream is a file on your
 * computer containing other C++ code.  The "#include" essentially
 * copies and pastes all of that in place of the above line.
 * Why do we need it?  Well, it is too much of a pain to write
 * EVERYTHING from scratch.  We are going to use some tools for
 * basic input and output provided by the iostream code.  */
/* NOTE: all this stuff between the slash-* and *-slash is
 * ignored by the compiler. */
// you can also write comments like this (// until end of line)
using std::cout; /* think of "std" as the last name of everything
defined in iostream.  The using statement lets you refer to it
on a first name basis. */

/* This is the "main function".  This is where your program starts.
 * We'll come back to the "int" and the empty parens soon... */
int main() {
	cout << "Hello class!\n"; cout << ":D :D :D\n";
	/* tell the shell that this program "worked": */
	return 1;
}
