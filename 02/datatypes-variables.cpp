#include <iostream>
using std::cout;

int main()
{
	int x; /* variable declaration */
	x = 77; /* assignment */
	cout << x << "\n";
	/* what other datatypes are there? */
	/* for single characters, there is char: */
	char c = 'h'; /* distinct from c = x; !!! */
	/* for fractional ("real") numbers we have float and double: */
	double y = 9.99;

	/* let's see the size of these boxes... */
	cout << "size of an int: " << sizeof(int) << "\n";
	cout << "size of an char: " << sizeof(char) << "\n";
	cout << "size of an double: " << sizeof(double) << "\n";
	/* NOTE: the sizeof operator prints the number of bytes
	 * required to store something of that type. */

	/* a few maybe intersting things: */
	/* the character 'h' is also just a number.  Compare the
	 * next two lines: */
	cout <<      c << "\n";
	cout << (int)c << "\n";
	/* NOTE: we used a *typecast* to see what value c has
	 * as an integer.  The syntax is pretty straightforward: just
	 * place the desired type in parens before the variable.
	 * NOTE: there are a few other ways to do typecasts that will
	 * not try to do any conversions.  */

	/* One more maybe interesting thing: we can also see where our
	 * variables live in main memory (the big list of numbers I keep
	 * talking about) */
	cout << &x << "\n"; /* note the "&" in front of x.  This
						   will give the address where the variable
						   is being stored. */

	/* MIXING TYPES IN ARITHMETIC EXPRESSIONS */
	int a = 5;
	int b = 3;
	cout << "a/b = " << a/b << "\n";
	/* prints out 1!  What's going on?  Well, most of the arithmetic
	 * operators *preserve* the type of the operands.  That is, when
	 * we combine two integers via arithmetic, we get back an integer. */
	/* Let's try again with doubles: */
	cout << "a/b = " << (double)a/(double)b << "\n";
	/* what about arithmetic with two different types of numbers? */
	double z = 5;
	cout << "z/b = " << z/b << "\n";
	/* the takeaway: when you mix types in arithmetic, the compiler will
	 * try to "promote" the result to the most expressive type.  */
	/* NOTE: look at the "precedence" of the typecast operator: */
	cout << "-------- testing precedence of typecast -----------\n";
	cout << "a/b = " << (double)(a/b) << "\n";
	cout << "a/b = " << (double)a/b << "\n";
	/* looks like typecast has higher precedence than division! */
	/* This one is probably more obvious, but note that assignment (the "="
	 * operator) has very low precedence.  Below, the a/b is done first (as
	 * integers), and then the type conversion happens upon assignment. */
	double xx = a/b;
	cout << "xx = " << xx << "\n";

	/* One more note: the double datatype does NOT really work like
	 * real numbers.  TODO: try to find an example where the cancellation
	 * law is violated for doubles.  (Recall that the cancellation law says
	 * that a+c = b+c ==> a equals b.) */

	return 0;
}

/* TODO:
 * 1. again, make sure you can compile this on the command line.
 * 2. play with it.  make a change that doesn't compile and try to
 *    make sense out of the resulting error messages.
 * 3  make sure you have streamlined the process of editing,
 *    compiling, and testing your program.
 * 4. play with git.  see the tutorial.  be sure to get
 *    familiar with 'git diff' and 'git log -p'. */

/* TODO: if you're feeling ambitious, try to write a program that reads 5
 * integers and prints out (a) the maximal value, and (b) the average. */
