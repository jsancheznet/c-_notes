// Write the following code & do as instructed in the comments. Build and observe.

//void main()
//{
//	//Try to modify x1 & x2 and see the compilation output
//	const int MAX = 12;
//	int x = 5;
//	int& ref_x1 = x;
//	const int& ref_x2 = x;
//
//	//Try to modify the pointer (e.g. ptr1) and the pointee value (e.g. *ptr1)
//	const int* ptr1 = &x;
//	int* const ptr2 = &x;
//	const int* const ptr3 = &x;
//
//	//Find which declarations are valid. If invalid, correct the declaration
//	const int* ptr3 = &MAX;
//	int* ptr4 = &MAX;
//
//	const int& r1 = ref_x1;
//	int& r2 = ref_x2;
//
//	int*& p_ref1 = ptr1;
//	const int*& p_ref2 = ptr2;
//}

int main()
{
	int* Ptr = new int(10);

	int *Array = new int[5];
	
	size_t T = sizeof(Array);

	for (int i = 0; i < 5; i++)
	{
		Array[i] = 0;
	}

	for (int i = 0; i < 1024; i++)
	{
		Array[i] = 0;
	}
}