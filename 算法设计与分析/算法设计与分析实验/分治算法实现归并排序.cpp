//#include<iostream>
//#include<algorithm>
//int quicksort(int array[],int length)
//{
//	std::cout << array[0];
//	if (length == 1)
//		return 0;
//	int lowflg,highflg,low[100],high[100],r;
//	lowflg = highflg = r = 0;
//	for (int i = 1; i < length; i++)
//	{
//		if (array[0] > array[i])
//		{
//			low[lowflg] = array[i];
//			++lowflg;
//		}
//		else if (array[0] < array[highflg])
//		{
//			high[highflg] = array[i];
//			++highflg;
//		}
//		else
//		{
//			low[lowflg] = array[i];
//			++lowflg;
//		}
//	}
//	low[lowflg] = array[0];
//	lowflg++;
//	quicksort(low,lowflg+1);
//	quicksort(high,highflg+1);
//	for (int i = 0; i < lowflg + highflg + 1; ++i)
//	{
//		low[i + lowflg + 1] = high[i];
//	}
//	return 0;
//}
//int main()
//{
//	int array[10] = { 2,1,5,2,6,10,8,234,23,46 };
//	quicksort(array,10);
//	for (int i = 0; i < 10; ++i)
//	{
//		std::cout << array[i];
//	}
//	return 0;
//}







//#include <iostream>
//#include <vector>
//
//void merge(int arr[], int l, int m, int r) {
//    int n1 = m - l + 1;
//    int n2 = r - m;
//
//    int L[20], R[20];
//    for (int i = 0; i < n1; i++)
//        L[i] = arr[l + i];
//    for (int j = 0; j < n2; j++)
//        R[j] = arr[m + 1 + j];
//
//    int i = 0;
//    int j = 0;
//    int k = l;
//
//    while (i < n1 && j < n2) {
//        if (L[i] <= R[j]) {
//            arr[k] = L[i];
//            i++;
//        }
//        else {
//            arr[k] = R[j];
//            j++;
//        }
//        k++;
//    }
//
//    while (i < n1) {
//        arr[k] = L[i];
//        i++;
//        k++;
//    }
//
//    while (j < n2) {
//        arr[k] = R[j];
//        j++;
//        k++;
//    }
//}
//
//void mergeSort(int arr[], int l, int r) {
//    if (l >= r) {
//        return;
//    }
//    int m = l + (r - l) / 2;
//    mergeSort(arr, l, m);
//    mergeSort(arr, m + 1, r);
//    merge(arr, l, m, r);
//}
//
//int main() {
//    int array[10] = {2, 1, 5, 2, 6, 10, 8, 234, 23, 46};
//    mergeSort(array, 0,9);
//
//    for (int i = 0; i < 10; ++i) {
//        std::cout << array[i] << " ";
//    }
//
//    return 0;
//}

