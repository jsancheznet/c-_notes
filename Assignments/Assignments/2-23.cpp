// Implement the following functions
// void Add(int a, int b, int& result);    //Add two numbers and return the result through a reference parameter
// void Factorial(int a, int& result);    //Find factorial of a number and return that through a reference parameter
// void Swap(int& a, int& b);            //Swap two numbers through reference arguments

void Add(int a, int b, int& result)
{
	result = a + b;
}

void Factorial(int a, int& result)
{
	result = 1;

	for (int i = 1; i <= a; i++)
	{
		result *= i;
	}
}

void Swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}	

////
////int main()
////{
////	// Factorial
////	int X;
////	Factorial(6, X);
////
////	// Add
////	int a = 10;
////	int b{ 11 };
////	int t;
////	Add(a, b, t);
////
////	// Swap
////	Swap(a, b);
////
////	return 0;
////}