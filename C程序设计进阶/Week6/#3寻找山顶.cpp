/**********************************************
描述
在一个m×n的山地上，已知每个地块的平均高程，请求出所有山顶所在的地块（所谓山顶，就是其地块平均高程不比其上下左右相邻的四个地块每个地块的平均高程小的地方)。

输入
第一行是两个整数，表示山地的长m（5≤m≤20）和宽n（5≤n≤20）。
其后m行为一个m×n的整数矩阵，表示每个地块的平均高程。每行的整数间用一个空格分隔。
输出
输出所有上顶所在地块的位置。每行一个。按先m值从小到大，再n值从小到大的顺序输出。
样例输入
10 5
0 76 81 34 66
1 13 58 4 40
5 24 17 6 65
13 13 76 3 20
8 36 12 60 37
42 53 87 10 65
42 25 47 41 33
71 69 94 24 12
92 11 71 3 82
91 90 20 95 44
样例输出
0 2
0 4
2 1
2 4
3 0
3 2
4 3
5 2
5 4
7 2
8 0
8 4
9 3
**************************************************/
#include <iostream>
using namespace std;
int main(){
	int row, col;
	cin >> row >>col;
	int datas[row][col];
	for (int i = 0 ; i < row; i ++) {
		for (int j = 0; j < col; j++) {
			cin >> datas[i][j];
		}
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (i > 0 && datas[i - 1][j] > datas[i][j]) {
				continue;
			}
			if (j > 0 && datas[i][j - 1] > datas[i][j]) {
				continue;
			}
			if (i < row - 1 && datas[i + 1][j] > datas[i][j]) {
				continue;
			} 
			if (j < col - 1 && datas[i][j + 1] > datas[i][j]) {
				continue;
			} 
				cout << i << " " << j << endl;
		}
	}
	return 0;
}