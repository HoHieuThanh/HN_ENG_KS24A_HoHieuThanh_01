#include <stdio.h>
int main(){
	
	int arr[100], j, max, min, sum, item, index, temp, count, COUNT;
	int choice;
	do {
		printf("\n\nMENU");
		printf("\n1.Nhap so phan tu va gia tri");
		printf("\n2.In ra cac phan tu");
		printf("\n3.Tim gia tri nho nhat va lon nhat");
		printf("\n4.Tong tat ca cac phan tu");
		printf("\n5.Them 1 phan tu vao cuoi mang");
		printf("\n6.Xoa 1 phan tu");
		printf("\n7.Sap xep phan tu giam dan");
		printf("\n8.Tim kiem phan tu trong mang");
		printf("\n9.In ra so nguyen to");
		printf("\n10.Sap xep phan tu tang dan");
		printf("\n11.Thoat");
		printf("\nLua chon: ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				printf("Nhap so phan tu: ");
				scanf("%d", &j);
				printf("Nhap cac phan tu:\n");
				for(int i=0; i<j; i++){
					printf("arr[%d]= ",i);
					scanf("%d", &arr[i]);
				}
				break;
				
			case 2:
				for(int i=0; i<j; i++){
					printf("\narr[%d]= %d", i, arr[i]);
				}
				break;
				
			case 3:
				min=arr[0];
				max=arr[0];
				for(int i=1; i<j; i++){
					if(arr[i]<min){
						min=arr[i];
					}
				}
				for(int i=1; i<j; i++){
					if(arr[i]>max){
						max=arr[i];
					}
				}
				printf("\nPhan tu nho nhat: %d", min);
				printf("\nPhan tu lon nhat: %d", max);
				break;
				
			case 4:
				sum=0;
				for(int i=0; i<j; i++){
					sum+=arr[i];
				}
				printf("Tong tat ca cac phan tu = %d\n", sum);
				break;
				
			case 5:
				printf("Nhap phan tu muon them: ");
				scanf("%d", &item);
				arr[j]=item;
				j++;
				break;
				
			case 6:
				printf("Nhap vi tri ban muon xoa: ");
				scanf("%d", &index);
				for(int i=index; i<j; i++){
					arr[i]=arr[i+1];
				}
				j--;
				break;
				
			case 7:
				for(int i=0; i<j; i++){
					for(int n=0; n<j-i-1; n++){
						if(arr[n]<arr[n+1]){
							temp=arr[n];
							arr[n]=arr[n+1];
							arr[n+1]=temp;
						}
					}
				}
				break;
				
			case 8:
				count=-1;
				printf("Nhap phan tu muon tim: ");
				scanf("%d", &item);
				for(int i=0; i<j; i++){
					if(arr[i]==item){
						count++;
						index=i;
						continue;
					}
				}
				if(count!=-1){
					printf("Phan tu %d o vi tri %d", item, index);
				}else{
					printf("Khong co phan tu trong mang");
				}
				break;
				
			case 9:
				COUNT=0;
				for(int i=0; i<j; i++){
					count=-1;
					if(arr[i]!=0 || arr[i]!=1){
						for(int n=2; n<=arr[i]; n++){
							if(arr[i]%n==0){
								count++;
							}
						}
						if(count==0){
							printf("%d ",arr[i]);
							COUNT++;
						}
					}
				}
				if(COUNT==0){
					printf("Khong co so nguyen to trong mang");
				}
				break;
				
			case 10:
				min=arr[0];
				for(int i=0; i<j; i++){
					for(int n=0; n<j; n++){
						if(arr[n+1]<arr[n]){
							min=arr[n+1];
							temp=arr[n];
							arr[n]=arr[n+1];
							arr[n+1]=temp;
						}	
					}
				}
				break;
				
			case 11:
				printf("Ket thuc chuong trinh");
				
				break;
				
			default:
				printf("Khong hop le!");
		}

	}while(choice!=11);
	
	
	return 0;
}
