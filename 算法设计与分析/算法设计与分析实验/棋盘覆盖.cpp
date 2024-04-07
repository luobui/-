//#include<iostream>
//#include<iomanip>
//int tile = 0;
//int Board[3][3];
//void ChessBoard(int tr, int tc, int dr, int dc, int size)
//{
//	if (size == 1)
//		return;
//	int t = 0;
//	t += tile++;
//	int s = size / 2;
//	if (dr < tr + s && dc < tc + s)
//		ChessBoard(tr, tc, dr, dc, s);
//	else
//	{
//		Board[tr + s - 1][tc + s - 1] = t;
//		ChessBoard(tr, tc, tr + s - 1, tc + s - 1, s);
//	}
//	if (dr < tr + s && dc >= tc + s)
//		ChessBoard(tr, tc + s, dr, dc, s);
//	else
//	{
//		Board[tr + s - 1][tc + s] = t;
//		ChessBoard(tr, tc + s, tr + s - 1, tc + s, s);
//	}
//	if (dr >= tr + s && dc < tc + s)
//		ChessBoard(tr + s, tc, dr, dc, s);
//	else
//	{
//		Board[tr + s][tc + s - 1] = t;
//		ChessBoard(tr + s, tc, tr + s, tc + s - 1, s);
//	}
//	if (dr >= tr + s && dc >= tc + s)
//		ChessBoard(tr + s, tc + s, dr, dc, s);
//	else
//	{
//		Board[tr + s][tc + s] = t;
//		ChessBoard(tr + s, tc + s, tr + s, tc + s, s);
//	}
//}
//int main()
//{
//	ChessBoard(0, 0, 2, 2, 4);
//	for (int i = 0; i < 4; ++i)
//	{
//		for (int j = 0; j < 4; ++j)
//		{
//			std::cout << std::setw(3) << Board[i][j] << " ";
//		}
//		std::cout << std::endl;
//	}
//	return 0;
//}


//#include <iostream>
//#include <iomanip>
//
//int tile = 0;
//int Board[4][4]; // 改成4x4的二维数组
//
//void ChessBoard(int tr, int tc, int dr, int dc, int size) {
//    if (size == 1)
//        return;
//    int t = tile++;
//    int s = size / 2;
//    if (dr < tr + s && dc < tc + s)
//        ChessBoard(tr, tc, dr, dc, s);
//    else {
//        Board[tr + s - 1][tc + s - 1] = t;
//        ChessBoard(tr, tc, tr + s - 1, tc + s - 1, s);
//    }
//    if (dr < tr + s && dc >= tc + s)
//        ChessBoard(tr, tc + s, dr, dc, s);
//    else {
//        Board[tr + s - 1][tc + s] = t;
//        ChessBoard(tr, tc + s, tr + s - 1, tc + s, s);
//    }
//    if (dr >= tr + s && dc < tc + s)
//        ChessBoard(tr + s, tc, dr, dc, s);
//    else {
//        Board[tr + s][tc + s - 1] = t;
//        ChessBoard(tr + s, tc, tr + s, tc + s - 1, s);
//    }
//    if (dr >= tr + s && dc >= tc + s)
//        ChessBoard(tr + s, tc + s, dr, dc, s);
//    else {
//        Board[tr + s][tc + s] = t;
//        ChessBoard(tr + s, tc + s, tr + s, tc + s, s);
//    }
//}
//
//int main() {
//    ChessBoard(0, 0, 2, 2, 4);
//    for (int i = 0; i < 4; ++i) {
//        for (int j = 0; j < 4; ++j) {
//            std::cout << std::setw(3) << Board[i][j] << " ";
//        }
//        std::cout << std::endl;
//    }
//    return 0;
//}
