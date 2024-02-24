#define _CRT_SECURE_NO_WARNINGS





//1.加法器与累乘器
//介绍：加法器实现累加操作；累乘器实现累乘操作

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
//介绍：能被4整除但不能被100整除；能被400整除；是闰年。闰年多一天：2月有29天。取余运算：%

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
//介绍：用switch简便；90-100:A/80-89:B/70-79:C/60-69:D/60以下:E

//#include <stdio.h>
//
//int main(){
//	int score,count;
//	char ch;
//	printf("请输入分数(0-100)：");
//	scanf("%d",&score);
//	count = score/10;
//	switch(count){
//		case 10:
//		case 9:ch = 'A';break;
//		case 8:ch = 'B';break;
//		case 7:ch = 'C';break;
//		case 6:ch = 'D';break;
//		case 5:
//		case 4:
//		case 3:
//		case 2:
//		case 1:
//		case 0:ch = 'E';break;
//		default:break;
//	}
//	printf("成绩%d分的对应等级 = %c\n",score,ch);
//	return 0;
//}





//8.求两个数的最大公因数和最小公倍数
//介绍：用辗转相除法，拿着除数和余数当成新的被除数和除数，直到余数为0，此时的除数为最大公因数，最小公倍数为原来的两个数相乘除以最大公因数

//#include <stdio.h>
//
//int main(){
//	int m,n,r,p;
//	printf("请输入两个整数（用空格隔开）：");
//	scanf("%d%d",&m,&n);
//	p = m*n;
//	if(m < n){
//		r = m;
//		m = n;
//		n = r;
//	}
//	r = m % n;
//	while(r != 0){
//		m = n;
//		n = r;
//		r = m % n;
//	}
//	printf("最大公约数=%d\t最小公倍数=%d\n",n,p/n);
//	return 0;
//}





//9.求菲比拉契数列有限项
//介绍：从第三个数起，每个数等于前面的两个数之和

//#include <stdio.h>
//
//int main(){
//	int i=3,f1=1,f2=1,f3;
//	printf("%d\n%d\n",f1,f2);
//	while(i<=40){
//		f3 = f1 + f2;
//		printf("%d\n",f3);
//		f1 = f2;
//		f2 = f3;
//		i++;
//	}
//	return 0;
//}





//10.统计学生成绩（总成绩、平均成绩、各分段人数）
//介绍：用结构体数组实现（或者用链表）

//#include <stdio.h>
//
//struct Student{
//	int num;	//学号
//	char name[20];		//姓名
//	float score[3];		//三门课成绩
//	float average;	//平均成绩
//	float sum;
//};
//
//int main(){
//	struct Student stu[5];
//	int i;
//	printf("\n********输入5名学生的信息（学号、姓名、三门成绩）********\n");
//	for(i=0;i<5;i++){
//		printf("请输入第%d个学生的信息：",i+1);
//		scanf("%d%s%f%f%f",&stu[i].num,stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
//		stu[i].average = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2])/3;
//		stu[i].sum = stu[i].score[0] + stu[i].score[1] + stu[i].score[2];
//	}
//	printf("\n********输出学生数据********\n");
//	printf("学号\t姓名\t成绩1\t成绩2\t成绩3\t平均成绩\t总成绩\n");
//	for(i=0;i<5;i++){
//		printf("%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",stu[i].num,stu[i].name,stu[i].score[0],stu[i].score[1],stu[i].score[2],stu[i].average,stu[i].sum);
//	}
//	return 0;
//}





//11.验证哥德巴赫猜想
//介绍：任何一个大于2的偶数都可以表示为两个质数之和

//#include <stdio.h>
//
//// 判断是否为质数
//int isPrime(int n){
//	int i;
//    if(n<=1) 
//		return 0;
//    for(i=2;i*i<=n;i++){
//        if(n%i==0) 
//			return 0;
//    }
//    return 1;
//}
//
//// 验证哥德巴赫猜想
//void verifyGoldbach(int limit) {
//    int n,i,found;
//	for (n=4;n<=limit;n+=2){
//        found = 0;
//        for(i=2;i<=n/2;i++){
//            if(isPrime(i) && isPrime(n - i)){
//                found = 1;
//                break;
//            }
//        }
//        if(!found){
//            printf("哥德巴赫猜想在%d处失败。\n", n);
//            return;
//        }
//    }
//    printf("在给定的范围内，哥德巴赫猜想成立。\n");
//}
//
//int main() {
//    int limit;
//    printf("请输入验证范围的上界：");
//    scanf("%d", &limit);
//    verifyGoldbach(limit);
//    return 0;
//}





//12.穷举法求某数段素数
//介绍：素数是大于1的自然数中，除了1和它本身以外，无法被其他自然数整除的数；

//#include <stdio.h>
//
//int main() {
//    int start,end,i,j;
//    printf("请输入一个数段的起始和结束（用空格隔开）：");
//    scanf("%d %d", &start, &end);
//	  for(i=start;i<=end;i++){
//		for(j=2;j*j<=i;j++){		//i*i<=n即为验证边界，因为一个数若等于两个因数相乘，那么其中一个因数一定小于等于此数的平方根
//			if(i%j==0)
//				break;
//		}
//		if(j*j>i){
//			printf("%d\n",i);
//		}
//    }
//    return 0;
//}





//12.穷举法求某数段水仙花数
//介绍：水仙花数是一个n位数，各位数字的立方和等于该数本身；如153 = 1^3 + 5^3 + 3^3；

//#include <stdio.h>
//#include <math.h>
//
//int main() {
//    int low, high, i, temp1, temp2, remainder, n = 0, result = 0;
//
//    printf("输入两个数字(间隔为空格): ");
//    scanf("%d %d", &low, &high);
//    printf("%d 和 %d 之间的水仙花数为: ", low, high);
//
//    for(i = low + 1; i < high; i++) {
//        temp2 = i;
//        temp1 = i;
//
//        // 计算数字位数
//        while (temp1 != 0) {
//            temp1 /= 10;
//            n++;
//        }
//
//        // 计算每位数字的幂之和
//        while (temp2 != 0) {
//            remainder = temp2 % 10;
//            result += pow(remainder,n);
//            temp2 /= 10;
//        }
//
//        // 如果结果等于原数，则打印
//        if (result == i) {
//            printf("%d ", i);
//        }
//
//        // 重置n和result
//        n = 0;
//        result = 0;
//    }
//
//    return 0;
//}





//12.穷举法求某数段完全平方数
//介绍：完全平方数是指一个数能表示成某个整数的平方的形式

//#include <stdio.h>
//
//int main() {
//    int start,end,i,j;
//    printf("请输入一个数段的起始和结束（用空格隔开）：");
//    scanf("%d %d", &start, &end);
//	for(i = start; i <= end; i++) {
//        for(j = 1; j * j <= i; j++) {
//            if(j * j == i) {
//                printf("%d 是一个完全平方数\n", i);
//                break;
//            }
//        }
//    }
//    return 0;
//}





//13.求定积分
//介绍：用矩形法

//#include <stdio.h>
//#include <math.h>
//
//float w_sin(float a){
//	return sin(a);
//}
//
//float w_cos(float a){
//	return cos(a);
//}
//
//float w_e(float a){
//	return exp(a);
//}
//
//float integral(float a,float b,float (*p)(float)){
//	float d = (b-a)/20;
//	float result = 0;
//	float x = a;
//	int i;
//	for(i=1;i<=20;i++){
//		x = x+d;						//用区间右端点的函数值
//		result = result + d*(*p)(x);
//	}
//	return result;
//}
//
//int main(){
//	float a,b;
//	printf("请输入函数sin(x)的下限a和上限b：");
//	scanf("%f%f",&a,&b);
//	printf("函数sin(x)在%.2f~~~%.2f上的定积分 = %f\n",a,b,integral(a,b,w_sin));
//	
//	printf("请输入函数cos(x)的下限a和上限b：");
//	scanf("%f%f",&a,&b);
//	printf("函数cos(x)在%.2f~~~%.2f上的定积分 = %f\n",a,b,integral(a,b,w_cos));
//
//	printf("请输入函数e^(x)的下限a和上限b：");
//	scanf("%f%f",&a,&b);
//	printf("函数e^(x)在%.2f~~~%.2f上的定积分 = %f\n",a,b,integral(a,b,w_e));
//	return 0;
//}





//13.求多元方程的根（二分法）
//见第五章-章末习题15





//13.求多元方程的根（牛顿迭代法）
//见第五章-章末习题14





//13.求多元方程的根（弦截法）
//弦截法流程：
//1、选择初始区间：首先，我们需要选择一个包含方程根的初始区间 [x1, x2]。这个区间应该满足 f(x1) 和 f(x2) 的符号相反，这样才能保证该区间内存在根。
//2、计算新的近似根：在每一步迭代中，我们都会用以下公式计算新的 x 值：x=f(x2)−f(x1)x1⋅f(x2)−x2⋅f(x1)​；这个公式是通过在 [x1, x2] 区间上画一条直线，然后取直线与 x 轴的交点作为新的 x 值。
//3、更新区间：如果 f(x) 和 f(x1) 的乘积大于或等于 0，说明 x 和 x1 在方程的图像上位于同一侧，因此我们更新 x1 为新的 x 值；否则，我们更新 x2 为新的 x 值。
//4、检查收敛性：我们会检查 f(x) 的绝对值是否小于精度要求 eps。如果满足这个条件，那么我们就认为找到了一个近似根，然后结束迭代；否则，我们会继续进行下一步迭代。
//5、返回结果：最后，函数返回找到的近似根 x。

//#include <stdio.h>
//#include <math.h>
//
//double f(double x) {
//    // 在这里定义你的方程
//    return pow(x, 3) - 5 * pow(x, 2) + 16 * x - 80;
//}
//
//double chord_method(double x1, double x2, double eps) {
//    double x;
//    do {
//        x = (x1 * f(x2) - x2 * f(x1)) / (f(x2) - f(x1));
//        if (f(x) * f(x1) >= 0) {
//            x1 = x;
//        } else {
//            x2 = x;
//        }
//    } while (fabs(f(x)) >= eps);
//    return x;
//}
//
//int main() {
//    double a = 1, b = 2, eps = 1e-6;
//    double root = chord_method(a, b, eps);
//    printf("方程的根 = %lf\n", root);
//    return 0;
//}





//14.求两个矩阵之和、之积

//#include<stdio.h>
//
//#define SIZE 3 // 定义矩阵大小
//
//void add(int m1[SIZE][SIZE], int m2[SIZE][SIZE], int sum[SIZE][SIZE]) {
//    int i, j;
//    for (i = 0; i < SIZE; i++) {
//        for (j = 0; j < SIZE; j++) {
//            sum[i][j] = m1[i][j] + m2[i][j];
//        }
//    }
//}
//
//void multiply(int m1[SIZE][SIZE], int m2[SIZE][SIZE], int prod[SIZE][SIZE]) {
//    int i, j, k;
//    for (i = 0; i < SIZE; i++) {
//        for (j = 0; j < SIZE; j++) {
//            prod[i][j] = 0;
//            for (k = 0; k < SIZE; k++) {
//                prod[i][j] += m1[i][k] * m2[k][j];
//            }
//        }
//    }
//}
//
//int main() {
//    int m1[SIZE][SIZE], m2[SIZE][SIZE], sum[SIZE][SIZE], prod[SIZE][SIZE];
//    int i, j;
//
//    // 从用户处获取两个矩阵
//    printf("请输入第一个矩阵：\n");
//    for (i = 0; i < SIZE; i++) {
//        for (j = 0; j < SIZE; j++) {
//            scanf("%d", &m1[i][j]);
//        }
//    }
//
//    printf("请输入第二个矩阵：\n");
//    for (i = 0; i < SIZE; i++) {
//        for (j = 0; j < SIZE; j++) {
//            scanf("%d", &m2[i][j]);
//        }
//    }
//
//    // 计算矩阵之和和之积
//    add(m1, m2, sum);
//    multiply(m1, m2, prod);
//
//    // 输出结果
//    printf("两个矩阵之和为：\n");
//    for (i = 0; i < SIZE; i++) {
//        for (j = 0; j < SIZE; j++) {
//            printf("%d ", sum[i][j]);
//        }
//        printf("\n");
//    }
//
//    printf("两个矩阵之积为：\n");
//    for (i = 0; i < SIZE; i++) {
//        for (j = 0; j < SIZE; j++) {
//            printf("%d ", prod[i][j]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}





//15.统计输入字符中的单词个数

//#include <stdio.h>
//
//// 检查字符是否为英文字母
//int isAlpha(char c) {
//    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
//}
//
//int main() {
//    char c;
//    int wordCount = 0;
//    int inWord = 0;
//
//    printf("请输入一段文本：\n");
//
//    while ((c = getchar()) != '\n') {
//        if (!isAlpha(c)) {
//            if (inWord) {
//                inWord = 0;
//                wordCount++;
//            }
//        } 
//		else {
//            inWord = 1;
//        }
//    }
//
//    if (inWord) wordCount++;  // 计算最后一个单词（如果存在）
//
//    printf("单词数量：%d\n", wordCount);
//
//    return 0;
//}





//16.最近点对问题
//介绍：要求在给定的二维平面上的点集中找出距离最近的一对点

//#include <stdio.h>
//#include <float.h>
//#include <math.h>
//
///* 定义一个点的结构体 */
//typedef struct Point {
//    int x;
//	int y;
//}Point;
//
///* 计算两点之间的距离 */
//double dist(Point p1, Point p2) {
//    return sqrt((p1.x - p2.x)*(p1.x - p2.x) + (p1.y - p2.y)*(p1.y - p2.y));
//}
//
///* 找到最近的两个点 */
//void closestPair(Point P[], int n) {
//    double min = DBL_MAX; // 初始化最小距离为最大浮点数
//    Point p1, p2; // 用于存储最近的两个点
//
//    int i, j;
//    for (i = 0; i < n; i++) {
//        for (j = i+1; j < n; j++) {
//            double distance = dist(P[i], P[j]);
//
//            /* 如果找到了更近的两个点，就更新最小距离和最近的两个点 */
//            if (distance < min) {
//                min = distance;
//                p1 = P[i];
//                p2 = P[j];
//            }
//        }
//    }
//
//    printf("最近的两个点是 (%d, %d) 和 (%d, %d)，他们之间的距离是 %.6f\n", p1.x, p1.y, p2.x, p2.y, min);
//}
//
//int main() {
//    Point P[] = {{2, 3}, {12, 30}, {40, 50}, {5, 1}, {12, 10}, {3, 4}};
//    int n = 6;
//    closestPair(P, n);
//    return 0;
//}





//17.背包问题
//介绍：给定一组物品，每种物品都有自己的重量和价格，在限定的总重量内，我们如何选择，才能使得物品的总价格最高

//#include <stdio.h>
//
//#define MAX_W 100 /* 定义背包的最大重量为常量 */
//#define MAX_N 100 /* 定义物品的最大数量为常量 */
//
///* 定义物品的结构体 */
//typedef struct {
//    int weight; /* 物品的重量 */
//    int value;  /* 物品的价值 */
//} Item;
//
///* 定义一个函数，返回两个数中的最大值 */
//int max(int a, int b) {
//    return (a > b) ? a : b;
//}
//
///* 定义一个函数，解决背包问题 */
//void knapsack(Item items[], int n, int W) {
//    int i, w;
//    /* 定义一个二维数组，存储最大价值的表格 */
//    int K[MAX_N+1][MAX_W+1];
//
//    /* 初始化表格 */
//    for (i = 0; i <= n; i++) {
//        for (w = 0; w <= W; w++) {
//            /* 表格的第一行和第一列都是0，因为这些子问题没有物品可以选择 */
//            if (i == 0 || w == 0)
//                K[i][w] = 0;
//            /* 如果当前物品的重量小于或等于背包的剩余重量，我们可以选择是否放入这个物品 */
//            else if (items[i-1].weight <= w)
//                /* 我们选择放入物品和不放入物品两种情况中价值最大的那种 */
//                K[i][w] = max(items[i-1].value + K[i-1][w-items[i-1].weight], K[i-1][w]);
//            /* 如果当前物品的重量大于背包的剩余重量，我们不能放入这个物品 */
//            else
//                K[i][w] = K[i-1][w];
//        }
//    }
//
//    /* 输出最大价值 */
//    printf("最大价值: %d\n", K[n][W]);
//
//    /* 找出放入背包的物品 */
//    printf("放入背包的物品: ");
//    w = W;
//    for (i = n; i > 0 && K[i][w] != 0; i--) {
//        /* 如果这一行的价值和上一行的价值不同，说明我们选择了放入这个物品 */
//        if (K[i][w] != K[i-1][w]) {
//            printf("%d ", i);
//            /* 更新背包的剩余重量 */
//            w -= items[i-1].weight;
//        }
//    }
//    printf("\n");
//}
//
//int main() {
//    /* 定义一个物品数组 */
//    Item items[] = {{2, 3}, {3, 4}, {4, 5}, {5, 6}};
//    /* 计算物品的数量 */
//    int n = sizeof(items) / sizeof(items[0]);
//    /* 定义背包的最大重量 */
//    int W = 8;
//
//    /* 调用背包问题函数 */
//    knapsack(items, n, W);
//
//    return 0;
//}





//18.多机调度问题
//介绍：设有n个独立的作业，由m台相同的机器进行加工处理。作业i所需的处理时间为t[i]。 任何作业可以在任何一台机器上面加工处理，但未完工之前不允许中断处理。任何作业不能拆分成更小的作业。 要求给出一种作业调度方案，使所给的n个作业在尽可能短的时间内由m台机器加工处理完成。

//#include <stdio.h>
//
//// 定义任务结构体
//typedef struct {
//    int id;     // 任务ID
//    int time;   // 任务执行时间
//} Task;
//
//// 定义机器结构体
//typedef struct {
//    int id;         // 机器ID
//    int end_time;   // 机器上当前任务的结束时间
//} Machine;
//
//// 交换两个任务的位置
//void swap(Task* a, Task* b) {
//    Task temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//// 交换两个机器的位置
//void swap_machine(Machine* a, Machine* b) {
//    Machine temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//// 对任务进行排序，执行时间长的任务在前
//void sort_tasks(Task* tasks, int n) {
//	int i,j;
//    for (i = 0; i < n; i++) {
//        for (j = i + 1; j < n; j++) {
//            if (tasks[i].time < tasks[j].time) {
//                swap(&tasks[i], &tasks[j]);
//            }
//        }
//    }
//}
//
//// 对机器进行排序，结束时间早的机器在前
//void sort_machines(Machine* machines, int m) {
//	int i,j;
//    for (i = 0; i < m; i++) {
//        for (j = i + 1; j < m; j++) {
//            if (machines[i].end_time > machines[j].end_time) {
//                swap_machine(&machines[i], &machines[j]);
//            }
//        }
//    }
//}
//
//// 多机调度
//void schedule(Task* tasks, int n, Machine* machines, int m) {
//	int i;
//
//    // 对任务进行排序
//    sort_tasks(tasks, n);
//
//    // 分配任务到机器
//    for (i = 0; i < n; i++) {
//        // 对机器进行排序
//        sort_machines(machines, m);
//
//        // 将任务分配给第一台机器
//        machines[0].end_time += tasks[i].time;
//        printf("任务%d被分配给机器%d，结束时间为%d\n", tasks[i].id, machines[0].id, machines[0].end_time);
//    }
//
//    // 找出最晚结束的机器
//    sort_machines(machines, m);
//    printf("总最小执行时间为%d\n", machines[m - 1].end_time);
//}
//
//int main() {
//	int n = 5;		//任务数量
//	int m = 3;		//机器数量
//
//    // 定义任务
//    Task tasks[] = {{1, 1}, {2, 2}, {3, 3}, {4, 1}, {5, 2}};
//
//    // 定义机器
//    Machine machines[] = {{1, 0}, {2, 0}, {3, 0}};
//
//    // 进行调度
//    schedule(tasks, n, machines, m);
//
//    return 0;
//}





//19.最长公共子序列
//介绍：求两个字符串的最长公共子序列

//#include<stdio.h>
//#include<string.h>
//
///* 定义最大字符串长度 */
//#define MAX_LEN 100
//
///* 打印LCS的函数 */
//void print_lcs(char *b, char *X, int i, int j) {
//    /* 如果已经到达表格的边界，那么结束递归 */
//    if (i == 0 || j == 0) return;
//    /* 如果方向为对角线，那么输出当前字符，并向左上方递归 */
//    if (b[i*MAX_LEN+j] == 'D') {
//        print_lcs(b, X, i-1, j-1);
//        printf("%c", X[i-1]);
//    } 
//    /* 如果方向为上方，那么向上方递归 */
//    else if (b[i*MAX_LEN+j] == 'U') {
//        print_lcs(b, X, i-1, j);
//    } 
//    /* 如果方向为左方，那么向左方递归 */
//    else {
//        print_lcs(b, X, i, j-1);
//    }
//}
//
///* 主函数 */
//int main() {
//    /* 输入的两个字符串 */
//    char X[MAX_LEN], Y[MAX_LEN]; 
//    /* 用于构建LCS的表格 */
//    char b[MAX_LEN][MAX_LEN]; 
//    /* 存储LCS长度的表格 */
//    int c[MAX_LEN][MAX_LEN]; 
//    /* 字符串的长度 */
//    int m, n; 
//    /* 循环变量 */
//    int i, j; 
//
//    printf("请输入第一个字符串：");
//    gets(X);
//    printf("请输入第二个字符串：");
//    gets(Y);
//
//    m = strlen(X);
//    n = strlen(Y);
//
//    /* 初始化第0行和第0列 */
//    for (i = 0; i <= m; i++) c[i][0] = 0;
//    for (j = 0; j <= n; j++) c[0][j] = 0;
//
//    /* 动态规划构建c表格和b表格 */
//    for (i = 1; i <= m; i++) {
//        for (j = 1; j <= n; j++) {
//            /* 如果当前字符相同，那么LCS长度加1，方向为对角线 */
//            if (X[i-1] == Y[j-1]) {
//                c[i][j] = c[i-1][j-1] + 1;
//                b[i][j] = 'D'; /* D表示对角线 */
//            } 
//            /* 如果上方的LCS长度大于等于左方的LCS长度，那么取上方的LCS长度，方向为上方 */
//            else if (c[i-1][j] >= c[i][j-1]) {
//                c[i][j] = c[i-1][j];
//                b[i][j] = 'U'; /* U表示上方 */
//            } 
//            /* 否则取左方的LCS长度，方向为左方 */
//            else {
//                c[i][j] = c[i][j-1];
//                b[i][j] = 'L'; /* L表示左方 */
//            }
//        }
//    }
//
//    /* 打印LCS */
//    printf("最长公共子序列为：");
//    print_lcs(b, X, m, n);
//    printf("\n");
//
//    return 0;
//}





//20.连续子数组最大乘积
//介绍：在一个整数数组中找到一个连续的子数组，使得这个子数组的乘积最大

//#include <stdio.h>
//
//// 自定义的最大值和最小值函数
//double my_fmax(double a, double b) { return a > b ? a : b; }
//double my_fmin(double a, double b) { return a < b ? a : b; }
//
//// 计算连续子数组的最大乘积，并输出对应的子数组
//double maxProduct(double* nums, int numsSize) {
//    // 定义变量
//    double maxVal = nums[0];  // 当前最大值
//    double minVal = nums[0];  // 当前最小值
//    double maxProduct = nums[0];  // 最大乘积
//    double tempMax, tempMin;  // 临时变量
//    int i;  // 循环变量
//    int begin = 0, end = 0;  // 子数组的开始和结束位置
//    int tempBegin = 0;  // 临时开始位置
//
//    // 遍历数组
//    for (i = 1; i < numsSize; i++) {
//        // 当前元素是负数时，交换当前最大值和最小值
//        if (nums[i] < 0) {
//            tempMax = maxVal;
//            maxVal = minVal;
//            minVal = tempMax;
//        }
//
//        // 更新最大值和最小值
//        maxVal = my_fmax(nums[i], maxVal * nums[i]);
//        minVal = my_fmin(nums[i], minVal * nums[i]);
//
//        // 如果当前最大值大于最大乘积，更新最大乘积和对应的子数组位置
//        if (maxProduct < maxVal) {
//            maxProduct = maxVal;
//            begin = tempBegin;
//            end = i;
//        }
//
//        // 如果当前最大值小于当前元素，更新临时开始位置
//        if (maxVal < nums[i]) {
//            tempBegin = i;
//        }
//    }
//
//    // 输出对应的子数组
//    printf("对应的子数组为: ");
//    for (i = begin; i <= end; i++) {
//        printf("%f ", nums[i]);
//    }
//    printf("\n");
//
//    // 返回最大乘积
//    return maxProduct;
//}
//
//int main() {
//    // 定义输入数组
//    double nums[] = {2.3, -2.5, -4.2, 3.0, 0.2, -2.3, 2.2};
//    int numsSize = sizeof(nums) / sizeof(nums[0]);
//
//    // 计算并输出最大乘积
//    printf("最大乘积为: %f\n", maxProduct(nums, numsSize));
//
//    return 0;
//}