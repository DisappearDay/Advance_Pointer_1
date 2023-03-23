#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main() {
//	char arr[] = "abcdef";
//	char* cp = arr;
//	printf("%s\n", arr);
//	printf("%s\n", cp);
//	return 0;
//}


//int main() {
//	char* p = "abcdef";//"abcdef"是一个常量字符串，存的是首字母
//	printf("%s\n",p);
//	return 0;
//}


//int main() {
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	if (arr1 == arr2) {
//		printf("hehe\n");
//	}
//	else {
//		printf("haha\n");
//
//	}
//	if (p1 == p2) {
//		printf("hehe\n");
//	}
//	else {
//		printf("haha\n");
//
//	}
//	return 0;
//}


//指针数组 是数组

//int main() {
//	int arr[10] = {0};//整型数组
//	char arr1[] = { 5 };//字符数组
//	int* pch[5];  //整形指针数组
//	char* pch1[5]; //字符指针数组
//	return 0;
//}


//int main() {
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int arr4[] = { 4,5,7,8,9 };
//	int* parr[] = { arr1,arr2,arr3,arr4 };
//	int sz = sizeof(parr) / sizeof(parr[0]);
//	printf("%d\n", sz);
//	int i = 0;
//	for (i = 0; i < 4;i++) {
//		int j = 0;
//		for (j = 0; j < 5;j++) {
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}


//数组指针--指针
//int main() {
//	int* p = NULL;//整形指针--指向整形的指针--存放整形的地址
//	char* pc = NULL;//字符指针--指向字符的指针--存放字符的地址
//	//数组指针--指向数组的指针--存放数组的地址
//	
//	//&arr[0]---首元素地址
//	//arr---首元素地址
//	//&arr---数组地址
//
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9, };
//	int(*p)[10] = &arr;  //数组指针
//
//
//
//	return 0;
//}


//int main() {
//
//	char* arr[5];
//	char* (*pc)[5] = &arr;
//
//
//	return 0;
//}


//int main() {
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	/*int* p = &arr;
//
//	for (i = 0; i < 10; i++) {
//		printf("%d ", *(p + i));
//	}*/
//
//	int (* pc)[10] = &arr;
//	/*for (i = 0; i < 10;i++) {
//		printf("%d ", *((*pc) + i));   *pc==arr
//	}*/
//
//	for (i = 0; i < 10;i++) {
//		printf("%d ",(*pc)[i]);
//	}
//
//	return 0;
//}


//
//参数是指针的形式
void print(int(*pc)[5], int x,int y) {
	int i = 0;
	for (i = 0; i < x;i++) {
		int j = 0;
		for (j = 0; j < y;j++) {
			printf("%d ", pc[i][j]);
			printf("%d ", *(pc[i]+j));
			printf("%d ", ( * (pc + i))[j]);
			printf("%d ", *(*(pc + i) + j));//这四个等价
		}
		printf("\n");
	}
}

int main() {
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	//print(arr,3,5);//数组名就是首元素地址，也就是第一个元素是{1，2，3，4，5}
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int* p = arr1;
	int i = 0;
	for (i = 0; i < 10;i++) {
		printf("%d ", *(p + i));
		printf("%d ", *(arr1+i));
		printf("%d ", arr1[i]);
		printf("%d ", p[i]);
	}

	return 0;
}
