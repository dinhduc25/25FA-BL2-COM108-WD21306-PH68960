#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void lapChucNang(int chon)
{
    int tiepTuc = 1;
    while (tiepTuc == 1)
    {
        switch (chon)
        {
        case 1:
            printf("Ban da chon chuc nang 1\n");
            break;
        case 2:
            printf("Ban da chon chuc nang 2\n");
            break;
        case 3:
            printf("Ban da chon chuc nang 3\n");
            break;
        case 4:
            printf("Ban da chon chuc nang 4\n");
            break;
        default:
            printf("Hay chon lai tu cn [1-10]: \n");
            break;
        }

        printf("Tiep tuc chuc nang nay? [1=Co | 0=Khong]: ");
        scanf_s("%d", &tiepTuc);

        system("cls");
    }
}
int main()
{
    int chon;
    do {
        printf("=========MENU=========\n");
        printf("1. \n");
        printf("2. \n");
        printf("3. \n");
        printf("Thoat chuong trinh: [0]\n");
        printf("Chon chuc nang:");
        printf("\n");
        scanf_s("%d", &chon);
        if (chon != 0) {
            lapChucNang(chon);
        }
    } while (chon != 0);
}