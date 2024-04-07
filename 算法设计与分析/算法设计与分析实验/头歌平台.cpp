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
//    printf("���η��������Ԫ�صĺ�Ϊ:%d", sum);
//    return 0;
//}
///**********  End  **********/






#include <stdio.h>

/**********  Begin  **********/
void quicksort(int array[], int low, int high) {
	if (low >= high) return;
	int pivot = array[low]; // ѡ���һ��Ԫ����Ϊ��׼ֵ
	int i = low, j = high;
	while (i < j) {
		while (i < j && array[j] >= pivot) j--; // ���������ҵ���һ��С�ڻ�׼ֵ��Ԫ��
		if (i < j) array[i++] = array[j];
		while (i < j && array[i] <= pivot) i++; // ���������ҵ���һ�����ڻ�׼ֵ��Ԫ��
		if (i < j) array[j--] = array[i];
	}
	array[i] = pivot; // ����׼ֵ�ŵ���ȷ��λ��
	quicksort(array, low, i - 1); // �Ի�׼ֵ��ߵ���������п�������
	quicksort(array, i + 1, high); // �Ի�׼ֵ�ұߵ���������п�������
}void find(int array[], int N, int number)
{
	quicksort(array, 0, N - 1);
	printf("��%dС��Ԫ����%d", number, array[number - 1]);
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