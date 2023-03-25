#include <stdio.h>
#include <conio.h>
# define MAX 100
int nhap(int mang[],int &n){

	printf (" nhap so pt cua mang= ");
	scanf(" %d",&n);
	for(int i=0;i<n;i++){
		printf("pt[%d]= ",i);
		scanf("%d",&mang[i]);
	}
}

int xuat(int mang[], int n){
	printf(" \n Xuat Mang :");
	for(int i=0;i<n;i++){
		printf(" %d",mang[i]);	
}}
				// them so vao cuoi mang

int themvaocuoi(int mang[],int &n,int m){
	mang[n]=m;
	n++;
	xuat(mang,n);
}
						//them so vao dau mang

int themdau(int mang[],int &n, int m ){
	n++;
	for(int i=n-1;i>0;i--){
		mang[i]=mang[i-1];
	}
	mang[0]=m;
	xuat(mang,n);
}
							// them so vao mot vi tri bat kì cua mang
	
int themvitri(int mang[],int &n, int m, int k ){
	n++;
	for(int i=n-1;i>k;i--){
		mang[i]=mang[i-1];
	}
	mang[k]=m;
	xuat(mang,n);
}
								// tim so lon nhat co trong mang

int lonnhat(int mang[],int n){
	int max;
	for(int i=0;i<n;i++)
	if(mang[i]>max)
	max=mang[i];
	printf("\ngia tri lon nhat= %d",max);
}
									//tim so nho nhat co trong mang

int nho(int mang[],int n){
	int min;
	for(int i=0;i<n;i++)
	if(mang[i]<min)
	min=mang[i];
	printf("\n gia tri nho nhat cua mang la: %d",min);
}
										// sap xep mang tang dan

int mangtang(int mang[],int n,int tang){

	for(int i=0;i<n;i++){
		for(int j=i+i;j<n;j++){
			if(mang[i]>mang[j]){
			
			tang=mang[i];
			mang[i]=mang[j];
			mang[j]=tang;
		}
	}
	}
	printf("\nsap xep mang tang : ");
	for(int i=0;i<n;i++){
		printf("  %d",mang[i]);
	}
	xuat(mang,n);
}
										// xoa 1 gia tri dâu mang

int xoadaumang(int mang[],int &n){
	for(int i=0;i<n-1;i++){
		mang[i]=mang[i+1];
	}
	n--;
	xuat(mang,n);
	
}
										//xoa 1 gia tri cuoi mang

int xoacuoimang(int mang[],int &n){
	for(int i=0;i>n-1;i--){
		mang[i-1]=mang[i];
	}
	n--;
	xuat(mang,n);
}
										// xoa 1 phan tu tai 1 vi tri ban muôn

int xoavitri(int mang[],int &n,int l){
	printf("nhap vi tri can xoa: ");scanf("%d",&l);
	for(int i=l;i<n-1;i++){
		mang[i]=mang[i+1];
	}
	n--;
	xuat(mang,n);	
	}
										// tim phan tu gia tri x tra ve vi tri

int tim(int mang[],int &n){
	int so;
	printf("\nnhap gia tri cua vi tri can tim= ");scanf("%d",&so);
	for(int i=0;i<n;i++){
		if(so==mang[i]){
			printf("\nvi tri la: %d",i);
		}
 }
}

										// Ðêm sô lân xuât hiên cua 1 phân tu co gia tri x tròg mang
int demsoluong(int mang[],int &n,int dem){
	int so;
	printf("nhap gia tri= ");scanf("%d",&so);
	for(int i=0;i<n;i++){
	
	if(so==mang[i]){
		dem=dem+1;
	}
}
	printf("\n so lan xuat hien cua %d trong mang la: %d",so,dem);
	
}

int main(){
	int n,mang[MAX],m;
	char gt;
	do{
		printf("\n1- nhap mang");
		printf("\n2- xuat mang");
		printf("\n3- them vao cuoi mang");
		printf("\n4- them vao dau mang");
		printf("\n5- them vao vi tri k trong mang");
		printf("\n6- tim MAX cua mang");
		printf("\n7- tim  MIN cua mang");
		printf("\n8- sap xep mang tang dan");
		printf("\n9- xoa vi tri dau mang");
		printf("\na- xoa vi tri cuoi mang");
		printf("\nb- xoa vi tri k mang");
		printf("\nc- tim vi tri cua gia tri ");
		printf("\nd- dem so lan xuat hien cua gia tri");
		printf("\nx- thoat");
		printf("\n lua chon la: ");
		scanf("  %c",&gt);
		
		if(gt=='1'){
			nhap(mang,n);
		}else if(gt=='2'){
			xuat(mang,n);
		}else if (gt=='3' || gt=='4'|| gt=='5'){
			printf("\n nhap gia tri can them=");scanf("%d",&m);
			
			if(gt=='3'){
				themvaocuoi(mang,n,m);
			}else if(gt=='4'){
				themdau(mang,n,m);
			}else if (gt=='5'){
				int k;
				printf("\n nhap vi tri can chen= ");scanf("%d",&k);
				themvitri(mang,n,m,k);
			}
		}
		else if(gt=='6'){
			lonnhat(mang,n);
		}
		else if(gt=='7'){
			nho(mang,n);
		}
		else if(gt=='8'){
			int tang;
		mangtang(mang,n,tang);
		}
		else if(gt=='9'){
			xoadaumang(mang,n);
		}
		else if(gt=='a'){
			xoacuoimang(mang,n);
		}
		else if(gt=='b'){
			int l;
			xoavitri(mang,n,l);
		}
		else if(gt=='c'){
			tim(mang,n);
		}
		else if(gt=='d'){
			int dem;
			demsoluong(mang,n,dem);
		}
	}while (gt!='x');
	
	return 0;
}
