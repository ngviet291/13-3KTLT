#include<stdio.h>
#include<string.h>
int demso(char s[],char h[])
{
	int dem=0;
	int dems=strlen(s);
	int demh=strlen(h);
	for(int i=0;i<=dems-demh;i++)
	{
		int j;
		for (j=0;j<demh;j++)
		{
			if(s[i+j]!=h[j]){
			break;
			}
		}
		if(j==demh)
		{
			dem++;
		}
	}
	return dem;
	
}
int main()
{
	char s[20],h[20];
	printf("Nhap vao 1 chuoi ki tu: ");
	gets(s);
	printf("Nhap vao 1 chuoi ki tu con: ");
	gets(h);
	int chuoixuathien = demso(s,h);
	printf("So lan chuoi h xuat hien trong chuoi s la: %d\n",chuoixuathien);
	return 0;
}
