//// SearchDemo01.cpp : �������̨Ӧ�ó������ڵ㡣
////DFS �����������  ��N������ѡ��K����ʹ�ú�Ϊx����ƽ�������
//
//#include "stdafx.h"
//#include<cstdio>
//#include<vector>
//using namespace std;
//
//const int maxn=30;
//
//int n, k, x, maxSumSqu = -1, A[maxn] = { 1,2,2,3,3,4,4,5,6,7 };
//vector<int> temp, ans;
//
//void DFS(int index,int nowK,int sum,int sumSqu) {
//	if (nowK == k&&sum == x) {
//		if (sumSqu > maxSumSqu) {
//			maxSumSqu = sumSqu;
//			ans = temp;
//		}
//		return;
//	}
//	if (index == n || nowK > k || sum > x) return;
//	temp.push_back(A[index]);
//	DFS(index + 1, nowK + 1, sum + A[index], sumSqu + A[index] * A[index]);
//	temp.pop_back();
//	DFS(index + 1, nowK, sum, sumSqu);
//}
//
////int main()
////{
////	n = 10; 
////	k = 4;
////	x = 12;
////	DFS(0,0,0,0);
////	printf("%d \n", maxSumSqu);
////	for (vector<int>::iterator it = ans.begin(); it != ans.end(); it++) {
////		printf("%d ", *it);
////	}
////    return 0;
////}
//
