#include<stdio.h>
//����������N�����1-N�������� 
//ͨ���ݹ�ͷǵݹ�ķ��� 
void PrintN1(int n);
void PrintN2(int n);
int main(){
	int number;
	scanf("%d",&number);
	PrintN1(number);
	PrintN2(number);
	return 0;
} 
//�ǵݹ�ķ��� 
void PrintN1(int n){
	int i;
	for(i = 1;i<=n;i++){
		printf("%d\n",i);
	}
}
//�ݹ�ķ��� 
void PrintN2(int n){
	if(n){
		PrintN2(n-1);
		printf("%d ",n);
	}
	return;
}
