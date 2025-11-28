
#include <stdio.h>
#include <math.h>
void kiemTraSoNguyen()
{
    printf("kiem tra so nguyen\n");
}
void lapChucNang(int chonChucNang)
{
    int tiepTuc = 1;
    while (tiepTuc == 1)
    {
        switch (chonChucNang)
        {
            case 1:
                kiemTraSoNguyen();
                break;
            case 2:
                break;
            case 3:
                break;
            default:
                printf("Chon lai [0-10]\n");

        }
        printf("Tiep tuc chuc nang nay? [1=Co | 0=Khong\n");
        scanf_s("%d", &tiepTuc);
        system("cls"); // clear screen
    }
}


int main()
{
    int chonChucNang;
    do
    {
        printf("-------MENU-----------\n");
        printf("1. Kiem Tra So Nguyen");
        printf("\n");
        printf("2. Uoc chung - Boi Chung");
        printf("\n");
        printf("1. Kiem Tra So Nguyen");
        printf("\n");
        printf("1. Kiem Tra So Nguyen");
        printf("\n");
        printf("1. Kiem Tra So Nguyen");
        printf("\n");
        printf("1. Kiem Tra So Nguyen");
        printf("\n");
        printf("1. Kiem Tra So Nguyen");
        printf("\n");
        printf("1. Kiem Tra So Nguyen");
        printf("\n");
        printf("1. Kiem Tra So Nguyen");
        printf("\n");
        printf("1. Kiem Tra So Nguyen");
        printf("\n");
        printf("Moi chon chuc nang [1-10]: ");
        scanf_s("%d", &chonChucNang);
        if(chonChucNang != 0) {
            lapChucNang(chonChucNang);
        }
        
    } while (chonChucNang != 0);
    
}

