#include<stdio.h>
#include<string.h>
int demso(char s[],char k)
{
	int dem=0;
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]==k)
		{
			dem++;
		}
	}
	return dem;
}
int main()
{
	char s[20],k;
	printf("Nhap vao 1 chuoi ki tu: ");
	gets(s);
	printf("Nhap vao 1 ki tu: ");
	scanf("%c",&k);
	int sokitu = demso(s,k);
	printf("So lan ki tu xuat hien trong chuoi la: %d\n",sokitu);
	return 0;
}
