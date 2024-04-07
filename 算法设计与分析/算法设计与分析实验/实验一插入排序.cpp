//#include<iostream>
//using namespace std;
//void insertsort(int array[],int length)
//{
//	for (int i = 1; i < length ; ++i)
//	{
//		int r = array[i];
//		int j=i-1;
//		while (j>0&&array[j]>r)
//		{
//			array[j + 1] = array[j];
//			j = j - 1;
//			array[j+1] = r;
//		}
//	}
//	
//}
//void main()
//{
//	int array[10] = { 1,3,5,8,2,21,12,46,23,13 };
//	insertsort(array,10);
//	for (int i = 0; i < 10; ++i)
//	{
//		cout << array[i] << endl;
//	}
//}