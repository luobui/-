//#include<stdio.h>
//void swap(int arr[], int p, int q) {
//	int temp = arr[q];
//	for (int i = q; i >= p + 1; i--) {
//		arr[i] = arr[i - 1];
//	}
//	arr[p] = temp;
//}
//void swapback(int arr[], int p, int q) {
//	int temp = arr[p];
//	for (int i = p; i <= q - 1; i++) {
//		arr[i] = arr[i + 1];
//	}
//	arr[q] = temp;
//}
//void printArray(int arr[], int n) {
//	for (int i = 0; i < n; i++) {
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//void perm(int arr[], int p, int q) {
//	if (p == q) {  
//		printArray(arr, q + 1);
//	}
//
//	else {
//		for (int i = p; i <= q; i++) {
//			swap(arr, p, i);
//			perm(arr, p + 1, q);
//			swapback(arr, p, i); 
//		}
//	}
//}
//int main() {
//	int arr[] = { 1,2,3,4 };
//	perm(arr, 0, 3);
//}



//#include<stdio.h>
//void swap(int arr[], int p, int q) {
//	int temp = arr[q];
//	arr[q] = arr[p];
//	arr[p] = temp;
//}
//void printArray(int arr[], int n) {
//	for (int i = 0; i < n; i++) {
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//void perm(int arr[], int fixed[], int p, int q, int n) {
//	if (p == q) {
//		printArray(arr, n);
//	}
//	else {
//		for (int i = p; i <= q; i++) {
//			if (!fixed[i]) {
//				swap(arr, p, i);
//				perm(arr, fixed, p + 1, q, n);
//				swap(arr, p, i); 
//			}
//		}
//	}
//}
//int main() {
//	int arr[] = { 1, 2, 3, 4 };
//	int fixed[] = { 0, 0, 1, 0 }; 
//	int n = sizeof(arr) / sizeof(arr[0]);
//	perm(arr, fixed, 0, n - 1, n);
//	return 0;
//}
