#define _CRT_SECURE_NO_WARNINGS





//1.�ӷ������۳���
//���ܣ��ӷ���ʵ���ۼӲ������۳���ʵ���۳˲���

//#include <stdio.h>
//
//int main(){
//	int i,sum;
//	sum = 0;
//	for(i=1;i<=10;i++){
//		sum = sum + i;
//	}
//	printf("%d\n",sum);
//	return 0;
//}

//#include <stdio.h>
//
//int main(){
//	int i,multi;
//	multi = 1;
//	for(i=1;i<=10;i++){
//		multi = multi * i;
//	}
//	printf("%d\n",multi);
//	return 0;
//}

//#include <stdio.h>
//
//int main(){
//	int i,sum,multi,num[5];
//	sum = 0;
//	multi = 1;
//	printf("������5���������ÿո��������");
//	for(i=0;i<5;i++){
//		scanf("%d",&num[i]);
//	}
//	for(i=0;i<5;i++){
//		sum = sum + num[i];
//	}
//	for(i=0;i<5;i++){
//		multi = multi * num[i];
//	}
//	printf("sum = %d\nmulti = %d\n",sum,multi);
//	return 0;
//}





//2.�����������С��
//���ܣ����һ�������е����ֵ����Сֵ

//#include <stdio.h>
//
//int main(){
//	int i,min,max,num[5];
//	printf("������5�������ÿո��������");
//	for(i=0;i<5;i++){
//		scanf("%d",&num[i]);
//	}
//	min = num[0];
//	max = num[0];
//	for(i=1;i<5;i++){
//		if(min > num[i]){
//			min = num[i];
//		}
//		if(max < num[i]){
//			max = num[i];
//		}
//	}
//	printf("min = %d\nmax = %d\n",min,max);
//	return 0;
//}





//3.����ѡ������
//���ܣ�����n�����ݣ�ѭ��n-1�֣�������δ�����������ҵ���С�������Ԫ�أ���ŵ��������е���ʼλ�ã�Ȼ���ٴ�ʣ��δ����Ԫ���м���Ѱ����С�������Ԫ�أ�Ȼ��ŵ����������е�ĩβ���Դ����ƣ�ֱ����n-1��Ԫ�ؾ�������ϣ���n��Ԫ���Ѿ�����ȷλ��
//�ص㣺ÿ��ѭ��ֻ����һ������
//ȱ�㣺ѡ�������ǲ��ȶ������򷽷�����Ϊÿ�ν��������ܸı���ͬԪ�ص����λ�ã�����˵��5��8��5��2��9 ����һ�����ݣ�ʹ��ѡ�������㷨������Ļ�����һ���ҵ���СԪ�� 2 �����һ�� 5 ����λ�ã��ǵ�һ�� 5 ���м�� 5 ˳��ͱ��ˣ����ԾͲ��ȶ���
//ʱ�临�Ӷȣ�O(n^2)

//#include <stdio.h>
//
//int main(){
//	int num[5];
//	int i,j,k,temp;
//	printf("������5������(�ÿո����)��");
//	for(i=0;i<5;i++){
//		scanf("%d",&num[i]);
//	}
//	for(i=0;i<4;i++){
//		k=i;
//		for(j=i+1;j<5;j++){
//			if(num[k] > num[j]){
//				k = j;
//			}
//		}
//		if(k != i){
//			temp = num[k];
//			num[k] = num[i];
//			num[i] = temp;
//		}
//	}
//	printf("��С���������");
//	for(i=0;i<5;i++){
//		printf("%d ",num[i]);
//	}
//	printf("\n");
//	return 0;
//}





//3.����ð������
//���ܣ�
//���ܣ�
//�ص㣺ÿ��ѭ��ֻ����һ������
//ȱ�㣺
//ʱ�临�Ӷȣ�O(n^2)











































































