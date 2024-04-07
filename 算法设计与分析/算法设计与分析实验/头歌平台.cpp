//#include "stdio.h"
//
///**********  Begin  **********/
//int add(int array[], int N,int low)
//{
//    int r=low+N/2;
//    if (N == 1)
//        return array[low];
//    else
//    {
//        return add(array, N / 2, low) + add(array, N-N / 2, r);
//    }
//}
//
//int main()
//{
//    int array[100];
//    int N,sum;
//    sum = 0;
//    scanf_s("%d",&N);
//    for (int i = 0; i < N; ++i)
//    {
//        scanf_s("%d", &array[i]);
//    }
//    sum=add(array, N,0);
//    printf("分治法求出数组元素的和为:%d", sum);
//    return 0;
//}
///**********  End  **********/






#include <stdio.h>

/**********  Begin  **********/
void quicksort(int array[], int low, int high) {
	if (low >= high) return;
	int pivot = array[low]; // 选择第一个元素作为基准值
	int i = low, j = high;
	while (i < j) {
		while (i < j && array[j] >= pivot) j--; // 从右向左找到第一个小于基准值的元素
		if (i < j) array[i++] = array[j];
		while (i < j && array[i] <= pivot) i++; // 从左向右找到第一个大于基准值的元素
		if (i < j) array[j--] = array[i];
	}
	array[i] = pivot; // 将基准值放到正确的位置
	quicksort(array, low, i - 1); // 对基准值左边的子数组进行快速排序
	quicksort(array, i + 1, high); // 对基准值右边的子数组进行快速排序
}void find(int array[], int N, int number)
{
	quicksort(array, 0, N - 1);
	printf("第%d小的元素是%d", number, array[number - 1]);
}
int main()
{
    int array[1000], N,number;
    scanf_s("%d%d", &N, &number);
    for (int i = 0; i < N; ++i)
    {
        scanf_s("%d", &array[i]);
    }
	find(array, N, number);
    return 0;
}
/**********  End  **********/