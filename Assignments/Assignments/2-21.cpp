/*
  Implement the following functions using pointer arguments only

  int Add(int *a, int *b) ;    //Add two numbers and return the sum
  void AddVal(int *a, int *b, int *result); //Add two numbers and return the sum through the third pointer argument
  void Swap(int *a, int *b) ;  //Swap the value of two integers
  void Factorial(int *a, int *result);       //Generate the factorial of a number and return that through the second pointer argument

 */

int Add(int* a, int* b);                 //Add two numbers and return the sum
void AddVal(int* a, int* b, int* result); //Add two numbers and return the sum through the third pointer argument
void Swap(int* a, int* b);               //Swap the value of two integers
void Factorial(int* a, int* result);      //Generate the factorial of a number and return that through the second pointer argument

int Add(int* a, int* b)
{
    return *a + *b;
}

void AddVal(int* a, int* b, int* result)
{
    *result = *a + *b;
}

void Swap(int* a, int* b)
{
    int Temp = *a;
    *a = *b;
    *b = Temp;
}

void Factorial(int* a, int* result)
{
    *result = 1;

    for (int i = 1; i <= *a; i++)
    {
        *result *= i;
    }
}

//#include <iostream>
//int main()
//{
//    int Result;
//    int n{ 6 };
//    Factorial(&n, &Result);
//
//    std::cout << Result << std::endl;
//
//    return 0;
//}
