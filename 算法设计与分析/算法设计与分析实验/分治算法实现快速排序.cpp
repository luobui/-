//#include<iostream>
//
//void move(int array[], int i; int N)
//{
//	for (int j = N; j > i; --j)
//	{
//		array[j] = array[j - 1];
//	}
//}
//int quicksort(int array[],int N)
//{
//	int low, high,e;
//	low = 0;
//	for (high += low; high < N; ++high)
//	{
//		if (array[low] > array[high])
//		{
//			e = array[low];
//			array[low] = array[high];
//			array[high] = e;
//			low = high;
//		}
//	}
//}
//int main()
//{
//
//}


//#include<iostream>
//#include<algorithm>
//void quicksort(int array[], int low, int high) {
//	if (low >= high) return;
//	int pivot = array[low]; // 选择第一个元素作为基准值
//	int i = low, j = high;
//	while (i < j) {
//		while (i < j && array[j] >= pivot) j--; // 从右向左找到第一个小于基准值的元素
//		if (i < j) array[i++] = array[j];
//		while (i < j && array[i] <= pivot) i++; // 从左向右找到第一个大于基准值的元素
//		if (i < j) array[j--] = array[i];
//	}
//	array[i] = pivot; // 将基准值放到正确的位置
//	quicksort(array, low, i - 1); // 对基准值左边的子数组进行快速排序
//	quicksort(array, i + 1, high); // 对基准值右边的子数组进行快速排序
//}
//int main() {
//	int array[10] = { 2,1,5,2,6,10,8,234,23,46 };
//	quicksort(array, 0, 9);
//	for (int i = 0; i < 10; ++i) {
//		std::cout << array[i] << " ";
//	}
//	return 0;
//}	