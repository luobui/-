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
//	int pivot = array[low]; // ѡ���һ��Ԫ����Ϊ��׼ֵ
//	int i = low, j = high;
//	while (i < j) {
//		while (i < j && array[j] >= pivot) j--; // ���������ҵ���һ��С�ڻ�׼ֵ��Ԫ��
//		if (i < j) array[i++] = array[j];
//		while (i < j && array[i] <= pivot) i++; // ���������ҵ���һ�����ڻ�׼ֵ��Ԫ��
//		if (i < j) array[j--] = array[i];
//	}
//	array[i] = pivot; // ����׼ֵ�ŵ���ȷ��λ��
//	quicksort(array, low, i - 1); // �Ի�׼ֵ��ߵ���������п�������
//	quicksort(array, i + 1, high); // �Ի�׼ֵ�ұߵ���������п�������
//}
//int main() {
//	int array[10] = { 2,1,5,2,6,10,8,234,23,46 };
//	quicksort(array, 0, 9);
//	for (int i = 0; i < 10; ++i) {
//		std::cout << array[i] << " ";
//	}
//	return 0;
//}	