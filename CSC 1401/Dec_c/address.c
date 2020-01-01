#include <stdio.h>

void f1(int *p){
	*p += 5;
}

void f2(int *p){
	*p *= 2;
}

void f3(int *p){
	*p *= 3;
}

int main(){
	int n = 17, m = 23;
	float o = 3.0;
	int *p1 = &n;
	float *p2 = &o;
	printf("%p\n", p1);
	p1 = &m;
	printf("%p\n", p1);
	printf("%d\n", *p1);
	printf("%p\n", p2);
	f1(p1);
	f2(p1);
	f3(p1);
	printf("%d\n", m);
	/*p1 = 90;*/
	*p1 = 7;
	printf("%d\n", m);
	return 0;
}
