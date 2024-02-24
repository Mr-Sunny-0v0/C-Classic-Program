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
//优点：每次循环只交换一次数据
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
//
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
//
//	printf("从小到大排序后：");
//	for(i=0;i<5;i++){
//		printf("%d ",num[i]);
//	}
//	printf("\n");
//	return 0;
//}





//3.排序（冒泡排序）
//介绍：共有n个数据，循环n-1轮，每次循环相邻元素两两比较，不符合顺序就交换，每轮循环结束后，最大值或最小值就会出现在数据末尾,以此类推，直到第n-1个元素均排序完毕，第n个元素已经在正确位置
//优点：稳定，不会改变相同元素的相对位置
//缺点：每次循环交换多次数据
//时间复杂度：O(n^2)

//#include <stdio.h>
//
//int main(){
//	int num[5];
//	int i,j,temp;
//	printf("请输入5个整数（用空格隔开）：");
//	for(i=0;i<5;i++){
//		scanf("%d",&num[i]);
//	}
//
//	for(i=0;i<4;i++){
//		for(j=0;j<5-1-i;j++){
//			if(num[j] > num[j+1]){
//				temp = num[j];
//				num[j] = num[j+1];
//				num[j+1] = temp;
//			}
//		}
//	}
//
//	printf("从小到大排序后：");
//	for(i=0;i<5;i++){
//		printf("%d ",num[i]);
//	}
//	printf("\n");
//	return 0;
//}





//3.排序（插入排序）
//介绍：对于未排序数据，从第一个元素开始，该元素可以认为已经被排序,取出下一个元素，在已经排序的元素序列中从后向前扫描,如果该元素（已排序）大于新元素，将该元素移到下一位置,直到找到已排序的元素小于或者等于新元素的位置,将新元素插入到该位置后,重复步骤
//优点：稳定
//时间复杂度：O(n^2)

//#include <stdio.h>
//
//int main(){
//	int num[5];
//	int i,j,temp;
//	printf("请输入5个整数（用空格隔开）：");
//	for(i=0;i<5;i++){
//		scanf("%d",&num[i]);
//	}
//
//	for(i=1;i<5;i++){
//        temp = num[i];
//        for(j=i-1;j>=0;j--){
//            //如果比temp大把值往后移动一位
//            if(num[j] >= temp){
//               num[j+1] = num[j];
//            }
//            else{
//               break;
//            }
//        }
//        num[j+1] = temp;
//    }
//
//	printf("从小到大排序后：");
//	for(i=0;i<5;i++){
//		printf("%d ",num[i]);
//	}
//	printf("\n");
//	return 0;
//}





//3.排序（快速排序）
//介绍：先从数列中取出一个数作为基准数;将比这个数大的数全放到它的右边，小于或等于它的数全放到它的左边;再对左右区间重复，直到各区间只有一个数。  
//优点：不需要额外存储空间
//缺点：不稳定，对于数据中大小相同的元素，他们在快排之后的相对位置可能会发生改变
//时间复杂度：O(nlogn)

//#include <stdio.h>
//
//void quick_sort(int s[], int l, int r)
//{
//    if (l < r)
//    {
//        int i = l, j = r, x = s[l];
//        while (i < j)
//        {
//            while(i < j && s[j] >= x) // 从右向左找第一个小于x的数
//                j--;  
//            if(i < j) 
//                s[i++] = s[j];
//            
//            while(i < j && s[i] < x) // 从左向右找第一个大于等于x的数
//                i++;  
//            if(i < j) 
//                s[j--] = s[i];
//        }
//        s[i] = x;
//        quick_sort(s, l, i - 1); // 递归调用 
//        quick_sort(s, i + 1, r);
//    }
//}
//
//int main(){
//	int num[5];
//	int i;
//	printf("请输入5个整数（用空格隔开）：");
//	for(i=0;i<5;i++){
//		scanf("%d",&num[i]);
//	}
//
//	quick_sort(num,0,4);
//
//	printf("从小到大排序后：");
//	for(i=0;i<5;i++){
//		printf("%d ",num[i]);
//	}
//	printf("\n");
//	return 0;
//}





//3.排序（希尔排序，改进版插入排序）
//介绍：希尔排序首先将待排序的数组元素按某个增量分组，对每组使用直接插入排序算法排序；然后，逐渐减少增量，重复上述分组排序操作，直至增量为1，此时所有元素在一个组内，再对其进行直接插入排序。由于直接插入排序在元素基本有序的情况下，效率是很高的，因此希尔排序在大多数情况下的效率比直接插入排序要高。
//优点：适合大规模数据
//缺点：不稳定，对于数据中大小相同的元素，他们在快排之后的相对位置可能会发生改变

//#include <stdio.h>
//
//void shell_sort(int arr[], int n) {
//	int i,j,temp,gap;
//    for (gap = n/2; gap > 0; gap /= 2) {
//        for (i = gap; i < n; i += 1) {
//            temp = arr[i];
//            j;
//            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
//                arr[j] = arr[j - gap];
//            arr[j] = temp;
//        }
//    }
//}
//
//int main(){
//	int num[5];
//	int i;
//	printf("请输入5个整数（用空格隔开）：");
//	for(i=0;i<5;i++){
//		scanf("%d",&num[i]);
//	}
//
//	shell_sort(num,5);
//
//	printf("从小到大排序后：");
//	for(i=0;i<5;i++){
//		printf("%d ",num[i]);
//	}
//	printf("\n");
//	return 0;
//}





//4.大小写字母转换
//介绍：大小写字母的ASCII差值为32，大写的ASCII值更小

//#include <stdio.h>
//
//int main(){
//	char str[100];
//	int i;
//	printf("请输入字符串：");
//	gets(str);
//	for(i=0;str[i] != '\0';i++){		//小写变大写
//		if(str[i] >= 'a' && str[i] <= 'z'){
//			str[i] = str[i] - 32;	
//		}
//	}
//	printf("小写变大写后：");
//	puts(str);
//	return 0;
//}





//5.判别键盘输入字符的类别

//#include <stdio.h>
//
//int main(){
//	char str[100];
//	int i,dw=0,xw=0,s=0,k=0,q=0;
//	printf("请输入字符串：");
//	gets(str);
//	for(i=0;str[i]!='\0';i++){
//		if(str[i]>='A' && str[i]<='Z'){
//			dw++;
//		}
//		else if(str[i]>='a' && str[i]<='z'){
//			xw++;
//		}
//		else if(str[i]>='0' && str[i]<='9'){
//			s++;
//		}
//		else if(str[i] == ' '){
//			k++;
//		}
//		else{
//			q++;
//		}
//	}
//	printf("大写英文：%d个\n小写英文：%d个\n数字：%d个\n空格：%d个\n其他：%d个\n",dw,xw,s,k,q);
//	return 0;
//}





//6.判别闰年
//能被4整除但不能被100整除；能被400整除；是闰年
//闰年多一天：2月有29天
//取余运算：%

//#include <stdio.h>
//
//int main(){
//	int year;
//	printf("请输入年份：");
//	scanf("%d",&year);
//	if((year%4==0 && year%100 !=0) || year%400==0){
//		printf("%d年是闰年\n",year);
//	}
//	else{
//		printf("%d年不是闰年\n",year);
//	}
//	return 0;
//}





//7.百分制成绩与等级制成绩互相转换
//用switch简便；
//90-100:A/80-89:B/70-79:C/60-69:D/60以下:E

#include <stdio.h>

int mian(){
	int score;
	printf("请输入分数：");
	scanf("%d",&score);
	return 0;
}














