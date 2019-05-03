#include<stdio.h>
//输入正整数N，输出1-N的正整数 
//通过递归和非递归的方法 
void PrintN1(int n);
void PrintN2(int n);
int main(){
	int number;
	scanf("%d",&number);
	PrintN1(number);
	PrintN2(number);
	return 0;
} 
//非递归的方法 
void PrintN1(int n){
	int i;
	for(i = 1;i<=n;i++){
		printf("%d\n",i);
	}
}
//递归的方法 
void PrintN2(int n){
	if(n){
		PrintN2(n-1);
		printf("%d ",n);
	}
	return;
}
