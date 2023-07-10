
/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 50 
void set1_array(int ary[], int size);  // 랜덤값 입력
void sort_array(int ary[], int size);           // 오름차순 정렬
void C_array(int ary1[], int ary2[], int C_ary[]);              // c값 입력
void print_array(int ary[], int size);          // 출력
int main()
{
	srand((unsigned)time(NULL));
	int a[SIZE];
	int b[SIZE];
	int c[SIZE + SIZE] = { NULL };
	set1_array(a, SIZE);
	set1_array(b, SIZE);

	sort_array(a, SIZE);
	sort_array(b, SIZE);
	print_array(a,  SIZE);
	print_array(b,  SIZE);
	C_array(a, b, c);
	
	return 0;
}

void set1_array(int ary[], int size)
	for (int i = 0; i < size; i++)
	{
		ary[i] = rand() % 100;
	}
{
}

void sort_array(int ary[], int size)
{
	int temp, i, j;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < (size - 1) - i; j++)
		{
			if (ary[j] > ary[j + 1])
			{
				temp = ary[j];
				ary[j] = ary[j + 1];
				ary[j + 1] = temp;
			}
		}
	}
}

void print_array(int ary[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", ary[i]);
	}
	printf("\n\n");
}

void C_array(int ary1[], int ary2[], int C_ary[])
{
	int i, j;
	int count_a = 0, count_b = 0;
	for (i = 0; i < 10; i++)
	{
		if (C_ary[49] == NULL)
		{
			if(ary1[i] > ary2[i])
			{
				for (j = count_b; j < i; j++)
				{
					C_ary[i] = ary2[i];
					count_b++;
				}
			}
			else
			{;
				for (j = count_a; j < i; j++)
				{
					C_ary[i] = ary1[i];
					count_a++;
				}
			}
			printf("%d\t", C_ary[i]);
		}
		else
			C_ary[i] = (ary1[i - SIZE] > ary2[i - SIZE]) ? ary2[i - SIZE] : ary1[i - SIZE];
	}
	printf("\n\n");
}*/
/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct student {
	int num;
	char name[10];
	double grade;
	
};

int main() {
	struct student s;

	printf("학번을 입력하세요");
	scanf("%d", &s.num);

	printf("이름을 입력하세요");
	scanf("%s", s.name);

	printf("학점을 입력하세요");
	scanf("%lf", &s.grade);
	
	
	printf("%d\n", s.num);
	printf("%s\n", s.name);
	printf("%.2f\n", s.grade);


	return 0;

}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct point
{
	int x;
	int y;
};
struct rect{
	struct point p1;
	struct point p2;
};

int main() {
	struct rect r;
	int w, h, area, peri;

	printf("왼쪽 상단의 좌표를 입력하세요");
	scanf("%d%d", &r.p1.x, &r.p1.y);

	printf("오른쪽 하단의 좌표를 입력하세요");
	scanf("%d%d", &r.p2.x, &r.p2.y);

	w = r.p2.x - r.p1.x;
	h = r.p2.x - r.p1.x;

	area = w * h;
	peri = 2 * w + 2 * h;
	printf("면적은 %d이고 둘레는 %d입니다.",area,peri);

	return 0;

}


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 3

struct student
{
	int num;
	char name;
	double grade;
};


int main() {

	struct student list[SIZE];
	int i;

	for (i = 0; i < SIZE; i++) {
		printf("학번을 입력하세요");
		scanf("%d", &list[i].num);
		printf("이름을 입력하세요");
		scanf("%s", &list[i].name);
		printf("학점을 입력하세요");
		scanf("%lf", &list[i].grade);

	}

	for (i = 0; i < SIZE; i++)
		printf("이름:%d 학점:%lf", list[i].name, list[i].grade);

	return 0;
	
}


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct student {
	int num;
	char name[20];
	double grade;
};

int main() {
	struct student s = { 1,"홍길동",4.3 };
	struct student *p;

	p = &s;

	printf("학번=%d 이름=%s 학점=%.2f  \n", s.num, s.name, s.grade);
	printf("학번=%d 이름=%s 학점=%.2f  \n", (*p).num, (*p).name, (*p).grade);
	printf("학번=%d 이름=%s 학점=%.2f  \n", p->num, p->name, p->grade);
	return 0;
}



#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct vector {
	double x;
	double y;

};
struct vector get_vector_sum(struct vector a, struct vector b);

int main() {
	struct vector a = { 2.0,3.0 };
	struct vector b = { 5.0,6.0 };
	struct vector sum;

	sum = get_vector_sum(a, b);
	printf("벡터의 합은(%.1f,%.1f)\n", sum.x, sum.y);
	return 0;

}

struct vector get_vector_sum(struct vector a, struct vector b) {
	struct vector result;

	result.x = a.x + b.x;
	result.y = a.y + b.y;

	return result;
}
*/

#include<stdio.h>
union examole {
	int i;
	char c;
};

int main() {
	union example v;

	printf("공용체의 크기:%u\n", sizeof(v));
	v.c = 'A';
	printf("v.c:%c      v.i:%d\n", v.c, v.i);

	v.i = 10000;
	printf("v.c:%c     v.i:%d\n", v.c, v.i);
	return 0;

}

