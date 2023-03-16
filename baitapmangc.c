#include <stdio.h>
int main(){
	int n;
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
	 
	 	if(arr[i]%2==0){
	 		sum=(sum+arr[i]);
	}
	 }
	 		printf("tong cac so chan o vi tri le= %d\n",sum);
	 }printf("--------------------\n");
	 // tim so lon nhat trong mang
	 {
	 int max=arr[0];
	   for(i=0;i<n;i++){
	   	if (arr[i]>max)
	   	max= arr[i];
	   }	
	   		printf("so lon nhat trong mang la: %d\n",max);
	 }printf("--------------------\n");
	 // timso nho nhat trong mang
	{
	 int min=arr[0];
	   for(i=0;i<n;i++){
	   	if (arr[i]<min)
	   	min= arr[i];
	   }	
	   		printf("so nho nhat trong mang la: %d\n",min);
	 }printf("--------------------\n");
	 
	 // sap xep mang theo thu tu tang dan
	 int tg;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] < a[j]){
                // Hoan vi 2 so a[i] va a[j]
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;        
            }
        }
    }
    
    
    printf("\nMang da sap xep la: ");
    for(int i = 0; i < n; i++){
        printf("%5d", arr[i]);
    }
	 
	return 0 ;
}
