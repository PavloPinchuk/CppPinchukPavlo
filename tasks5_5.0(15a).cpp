#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<cmath>
#include<time.h>

typedef
struct Student
{
	char surname[50];
	int groupId;
	int note1;
	int note2;
	int note3;
}Student;

Student vvod_Student()
{
	Student res;
	printf("surname = ");
	scanf("%s", res.surname);
	printf("groupId = ");
	scanf("%d", &res.groupId);
	printf("note1 = ");
	scanf("%d", &res.note1);
	printf("note2 = ");
	scanf("%d", &res.note2);
	printf("note3 = ");
	scanf("%d", &res.note3);
	return res;
}

void vyvod_Student(const Student x)
{
	printf("Student: \nsurname: ");
	puts(x.surname);
	printf("groudId:%d \nnote1:%d \nnote2:%d \nnote3:%d \n", x.groupId, x.note1, x.note2, x.note3);
}

//Вважатимемо що заборгованість - це коли оцінка менша ніж 3
void Find_Debt(const Student mas[], int n)
{
	printf("Borzhniki: \n");
	bool p = true;
	for (int i = 0; i < n; i++)
	{
		if (mas[i].note1 < 3 || mas[i].note2 < 3 || mas[i].note3 < 3)
		{
			p = false;
			puts(mas[i].surname);
		}
	}
	if (p)
		printf("nemae");
}
int main()
{
	const size_t n = 3;
	Student mas[n];
	for (int i = 0; i < n; i++)
	{
		mas[i] = vvod_Student();
	}
	Find_Debt(mas, n);
	getchar();
	getchar();
}
