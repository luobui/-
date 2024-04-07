////ƒÈÂİĞı·½ÕóÊµÑé
//#include<iostream>
//#include<math.h>
//#include<iomanip>
//using namespace std;
//void spin(int n)
//{
//	int r = n;
//	int line = sqrt(n);
//	int iup, idown, jup, jdown;
//	int array[9][9];
//	iup = 0, idown = line - 1, jup = 0, jdown = line - 1; 
//	while (iup <= idown && jup <= jdown)
//	{
//		for (int k = jup; k <= jdown; ++k)
//		{
//			array[iup][k] = n--;
//		}
//		for (int k = iup + 1; k <= idown; ++k)
//		{
//			array[k][jdown] = n--;
//		}
//		for (int k = jdown - 1; k >= jup; --k)
//		{
//			array[idown][k] = n--;
//		}
//		for (int k = idown - 1; k > iup; --k)
//		{
//			array[k][jup] = n--;
//		}
//		++iup, --idown, ++jup, --jdown;
//	}
//	for (int i = 0; i < line; ++i) {
//        for (int j = 0; j < line; ++j) {
//            cout << setw(3)<<array[i][j]<< " ";
//        }
//        cout << endl;
//    }
//}
//void main()
//{
//	int n;
//	cin >> n;
//	spin(n*n);
//}
//





//#include<iostream>
//#include<cmath>
//using namespace std;
//
//void spin(int n)
//{
//    int array[9][9];
//    int num = n * n;
//    int iup = 0, idown = n - 1, jup = 0, jdown = n - 1;
//
//    while (iup <= idown && jup <= jdown)
//    {
//        for (int k = jup; k <= jdown; ++k)
//        {
//            array[iup][k] = num--;
//        }
//        for (int k = iup + 1; k <= idown; ++k)
//        {
//            array[k][jdown] = num--;
//        }
//        for (int k = jdown - 1; k >= jup; --k)
//        {
//            array[idown][k] = num--;
//        }
//        for (int k = idown - 1; k > iup; --k)
//        {
//            array[k][jup] = num--;
//        }
//        iup++, idown--, jup++, jdown--;
//    }
//
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < n; ++j) {
//            cout << array[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//int main()
//{
//    int n = 4;
//    spin(n);
//    return 0;
//}
