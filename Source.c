#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define MIN -100
#define MAX 100
//int main(void)
//{
	//setlocale(LC_ALL, "RUS");
	//int chislo;
	//char fname[20] = "number.txt";
	//FILE *out;
	//puts("�������� �����");
	//if ((out = fopen(fname, "a")) == NULL)
	//{
		//printf("������ �������� ����� ��� ������");
		//return 0;
	//}
	//fprintf(out, "%d", 5);
	//fprintf(out, "%0.2f\n", 12.56);
	//printf("\n������� ����� ��� ������ � ���� number:");
	//scanf("%d", &chislo);
	//fprintf(out, "%d\n", chislo);
	//fclose(out);
	//return 1;
//}



//double random();

//int main()
//{
	//setlocale(LC_ALL, "RUS");
	//char fname1[40] = "temp.txt";
	//puts("�������� �����");
	//FILE* fp;
	//int a;
	//int menu;
	//int cikle = 1;
	//while (cikle == 1)
	//{
		//printf("\t ����\n");
		//printf("1. ������ � ����� ����.\n");
		//printf("2. �������� � ������������.\n");
		//scanf("%d", &menu);
		//printf("\n");
		//switch (menu)
		//{
		//case 1:
			//if ((fp = fopen(fname1, "wt")) == NULL)
			//{
				//printf("������ ��� �������� �����\n");
				//	return 0;
			//}
			//printf("������� ���-��: ");
			//scanf("%d", &a);
			//for (int i = 1; i <= a; i++) {
			//	fprintf(fp, "%.2lf\n", random());
		//	}
			//fclose(fp);
		//	break;

		//case 2:
		//	if ((fp = fopen(fname1, "a")) == NULL)
				//	{
			//	printf("������ ��� �������� �����\n");
		//		return 0;
		//	}
		//	printf("������� ���-��: ");
		//	scanf("%d", &a);
		//	for (int i = 1; i <= a; i++) {
		//		fprintf(fp, "%.2lf\n", random());
			//}
			//fclose(fp);
			//break;

		//default:
		//	printf("�������� �������\n");
		//	break;
		//}
	//}
	//return 1;
//
//}
//double random()	
//{
	//double res;
	//res = MIN + 1.f * (MAX - MIN) * rand() / RAND_MAX;
	//return res;
//}

double random();
double sr();
int main()
{
	setlocale(LC_ALL, "RUS");
	char fname1[40] = "temp.txt";
	puts("�������� �����");
	FILE* fp;
	int a;
	int menu;
	int cikle = 1;
	while (cikle == 1)
	{
		printf("\t ����\n");
		printf("1. ������ � ����� ����.\n");
		printf("2. �������� � ������������.\n");
		printf("3. ���������������������\n");
		scanf("%d", &menu);
		printf("\n");
		switch (menu)
		{
		case 1:
			if ((fp = fopen(fname1, "wt")) == NULL)
			{
				printf("������ ��� �������� �����\n");
					return 0;
			}
			printf("������� ���-��: ");
			scanf("%.2lf", &a);
			for (int i = 1; i <= a; i++) {
				fprintf(fp, "%d\n", random());
			}
			fclose(fp);
			break;

		case 2:
			if ((fp = fopen(fname1, "a")) == NULL)
			{
				printf("������ ��� �������� �����\n");
				return 0;
			}
			printf("������� ���-��: ");
			scanf("%.2lf", &a);
			for (int i = 1; i <= a; i++) {
			fprintf(fp, "%d\n", random());
			}
			fclose(fp);
			break;

		case 3:
			fprintf(fp, "%.2lf", sr);
			break;


		default:
			printf("�������� �������\n");
			break;
		}
	}
	return 1;

}
double random()	
{
	double res;
	res = MIN + 1.f * (MAX - MIN) * rand() / RAND_MAX;
	return res;
}

double sr(char fname1, FILE* fp)
{
	double sum = 0, a = 0, kk;	
	while (!feof(fp))
	{	
			fscanf(fp, "lf", &kk);
			sum += a;
			a += 1;
	}
	sum = sum / a;
	fclose(fp);
	return sum;
}