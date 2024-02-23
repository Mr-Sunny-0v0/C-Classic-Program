#define _CRT_SECURE_NO_WARNINGS





//1.加法器与累乘器
//介绍：加法器实现累加操作；累乘器实现累乘操作

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
//	printf("请输入5个整数（用空格隔开）：");
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





//2.求最大数与最小数
//介绍：求出一组数据中的最大值和最小值

//#include <stdio.h>
//
//int main(){
//	int i,min,max,num[5];
//	printf("请输入5个数（用空格隔开）：");
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





//3.排序（选择排序）
//介绍：共有n个数据，循环n-1轮，首先在未排序序列中找到最小（或最大）元素，存放到排序序列的起始位置，然后再从剩余未排序元素中继续寻找最小（或最大）元素，然后放到已排序序列的末尾。以此类推，直到第n-1个元素均排序完毕，第n个元素已经在正确位置
//特点：每次循环只交换一次数据
//缺点：选择排序是不稳定的排序方法，因为每次交换都可能改变相同元素的相对位置；比如说：5，8，5，2，9 这样一组数据，使用选择排序算法来排序的话，第一次找到最小元素 2 ，与第一个 5 交换位置，那第一个 5 和中间的 5 顺序就变了，所以就不稳定了
//时间复杂度：O(n^2)

//#include <stdio.h>
//
//int main(){
//	int num[5];
//	int i,j,k,temp;
//	printf("请输入5个整数(用空格隔开)：");
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
//	printf("从小到大排序后：");
//	for(i=0;i<5;i++){
//		printf("%d ",num[i]);
//	}
//	printf("\n");
//	return 0;
//}





//3.排序（冒泡排序）
//介绍：
//介绍：
//特点：每次循环只交换一次数据
//缺点：
//时间复杂度：O(n^2)











































































