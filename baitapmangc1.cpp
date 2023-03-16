#include <stdio.h>
int main(){
	int n;
	int dc=0;
		printf(" nhap vao so phan tu cua mang=  ");
		scanf("%d",&n);
	int i=0;
	int arr[n];
	
	for (i=0;i<n;i++){
		printf("nhap pt[%d] cua mang = ",i);
		scanf("%d",&arr[i]);
	}
		printf("--------------------\n");
	
	for (i=0;i<n;i++){
		printf("pt[%d] co gia tri vua nhap= %d\n",i,arr[i]);
	}printf("--------------------\n");
	// tinh tong cac so chan o vitri le
	{
	
	int sum=0;
	 int i=1;
	 for ( i=1;i<n;i+=2){
	 
	 	if(arr[i]%2==1){
	 		sum=(sum+arr[i]);
	}
	 }
	 		printf("tong cac so o vi tri le= %d\n",sum);
	 }printf("--------------------\n");
	 // tim so lon nhat trong mang
	 {
  	 int dc=0;
	 int max=arr[0];
	   for(i=0;i<n;i++){
	   	if (arr[i]>max)
	   	max= arr[i];
	   }	
	   		printf("so lon nhat trong mang la: %d\n",max);
		for (i=0;i<n;i++){
			if(max==arr[i])
			dc=i;
		}
	   		printf("tai vi tri: %d\n",dc);
	 }printf("--------------------\n");
	 // timso nho nhat trong mang
	{
	 int min=arr[0];
	   for(i=0;i<n;i++){
	   	if (arr[i]<min)
	   	min= arr[i];
	   }	
	   		printf("so nho nhat trong mang la: %d\n",min);
	   		for (i=0;i<n;i++){
			if(min==arr[i])
			dc=i;}
	   		printf("tai vi tri: %d\n",dc);
	 }printf("--------------------\n");
	 
   
   {
   	int tangdan;
   	for(int i=0;i<n;i++){
	   for(int j=i+1;j<n;j++){
	   if (arr[i]<arr[j]){
	   	tangdan=arr[i];
	   	arr[i]=arr[j];
	   	arr[j]=tangdan;}
	   }
   }
}
	printf("mang sau khi sap xep la: ");
		for(i=0;i<n;i++){
		printf("%3d",arr[i]);
		}
	return 0 ;
}
