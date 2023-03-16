#include <stdio.h>
#include <conio.h>
#include <Windows.h>
using namespace std;
 
void TextColor(int x)//X là mã màu
{
     HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, x);
}
struct sach{
	char tacgia[50];
	char tieude[50];
	char chude[50];
	int id;
};

int main(){
	
	struct sach sach1;
	struct sach sach2;
	int id;
	printf("-----NHAP THONG TIN QUYEN SACH 1-----\n");
	TextColor(11);
	printf ("nhap tieu de sach: ");fflush(stdin);
	gets(sach1.tieude);
	printf("nhap ten tac gia: ");fflush(stdin);
	gets(sach1.tacgia);
	printf ("nhap chu de sach: ");fflush(stdin);
	gets(sach1.chude);
	printf("nhap ID sach: ");fflush(stdin);
	scanf("%d",&sach1.id);
	
	printf("-----NHAP THONG TIN QUYEN SACH 2----\n");
	printf("nhap tieu de sach: ");fflush(stdin);
	gets(sach2.tieude);
	printf("nhap ten tac gia: ");fflush(stdin);
	gets(sach2.tacgia);
	printf ("nhap chu de sach: ");fflush(stdin);
	gets(sach2.chude);
	printf("nhap ID sach: ");fflush(stdin);
	scanf("%d",&sach2.id);
	
	printf("=================THONG TIN SACH =================\n");
	printf("%-30s %-20s %-15s %-10s \n","TIEU DE","TAC GIA","CHU DE","ID");
	printf("%-30s %-20s %-15s %-10d \n",sach1.tieude,sach1.tacgia,sach1.chude,sach1.id);
	printf("%-30s %-20s %-15s %-10d \n",sach2.tieude,sach2.tacgia,sach2.chude,sach2.id);
	
	getch();
	return 0;
}
