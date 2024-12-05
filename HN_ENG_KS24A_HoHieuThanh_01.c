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
					printn++){
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
