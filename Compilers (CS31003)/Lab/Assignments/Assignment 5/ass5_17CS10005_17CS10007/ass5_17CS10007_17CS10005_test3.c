/*
Name:- Anshul Choudhary - Ayush Kumar
Roll No:- 17CS10005 - 17CS10007
Compilers Assignment 5
*/

// Factorial sample code
//this tests the function and declaration functionality


int testInt = 8;
void main () {
	int n = 6;
	int fn;
	fn = factorial(n);
	return;
}
int factorial (int n) {
	int m = n-1;
	int r = 1;
	if (m) {
		int fn = factorial(m-1);
		r = n*fn;
	}
	return r;
}