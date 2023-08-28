#include <stdio.h>
//task1

//int main(void)
//{
//int x;
//x =5;

//printf("Variable x is located at %p\n", &x);


//int *p = NULL;
//int *q = NULL;

//p = &x;

//printf("Pointer value of p is %p\n", p);

//printf("Dereferenced value of p is %d, and x = %d\n", *p, x);
//return 0;

//task2
 
//int a = 42;
//int b = 7;
//int c = 999;
//int *t = &a;
//int *u = NULL;

//printf("%d %d\n", a, *t);

//c = b;
//u = t;
//printf("%d %d\n", c, *u);

//a = 8;
//b = 8;
//printf("%d %d %d\n", b, c, *t, *u);

//*t = 123;
//printf("%d %d %d %d %d\n", a, b, c, *t, *u);

//t =&c;
//*t=555;
//printf("%d %d %d %d %d\n", a, b, c, *t, *u);

//c =100;
//printf("%d %d %d %d %d\n", a, b, c, *t, *u);

//int **v = &t;
//printf("%d\n", **v);

//return 0; 


//printf("sizeof(char): %lu\n", sizeof(char));
//printf("sizeof(42): %lu\n", sizeof(42));
//printf("sizeof(float): %u\n", sizeof(float));
//printf("sizeof(double): %lu\n", sizeof(double));
//printf("sizeof(NULL): %lu\n", sizeof(NULL));
//return 0;

//TASK 3
//int d[3] = {1, 2, 3};
//printf("sizeof(d) = %lu\n", sizeof(d));
//printf("sizeof 3.14 is = %lu\n", sizeof(3.14));
//printf("sizeof int = %lu\n", sizeof(int)); 

//int d[3] = {1,2,3};
//printf("The array starts at %p\n", d);
//printf("The first element is %d\n", *d);
//printf("The second element is %d\n", *(d+1));
//printf("The third element is %d\n", *(d+2));
//for (int i=0; i<3; i++){
//	printf("Element: %d\n", d[i]);
//}
//for (int *w = d; w < (d+3); w++){
//printf("Element: %d\n", *w);
//}
//int data[3][4] = {{1, 2, 3, 4},
//		{5,6,7,8},
//		{9,10,11,12}};
//printf("address of first element of row 0 is %p\n", *(data + 0)+0);
//printf("value of first element of row 0 is %d\n", **(data +0)+0);

//printf("%p %p %p %p\n", (*(data +0) +0), (*(data+0)+1), (*(data +0)+2), (*(data +0) +3));
//printf("%p %p %p %p\n", (*(data +1)+0), (*(data+1)+1), (*(data+1)+2), (*(data+1)+3));
//printf("%p %p %p %p\n", (*(data+2)+0), (*(data+2)+1), (*(data+2)+2), (*(data+2)+3));

void  print1Darray(int *arr,int size){
for(int *w = arr; w < (arr+size); w++){
printf("%d ", *w);
}
printf("\n");
}
void print2Darray(int numRow, int numColumn, int arr[] [numColumn]){
int n;
for(int i=0;i<numRow;i++) {
for(n=0;n<numColumn;n++) {
printf("%p",*(arr+i)+n);
}
printf("\n");
 }
}
int main(void){
int d[3]={1,2,3};
print1Darray(d,3);
int data [3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
print2Darray(3,4,data);
return 0;

}
