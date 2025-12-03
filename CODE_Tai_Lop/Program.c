
#include <stdio.h>
#include <math.h>
void kiemTraSoNguyen()
{
    printf("kiem tra so nguyen\n");
}
void demoMang2Chieu() {
    int array[2][3];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Mang [%d][%d] = ", i, j);
            scanf_s("%d", &array[i][j]);
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d", array[i][j]);
        }
        printf("\n");
    }
}
void demoString() {
    ////String
    //char name[50] = { "Anh" }; //{ 'A', 'n', 'h' }
    ////get(name); > fgets();
    //for (int i = 0; i < 50; i++) {
    //    scanf_s(" %c", &name[i]);
    //}
    //for (int i = 0; i < 50; i++) {
    //    printf("%d", name[i]);
    //}
    ////Xuat du lieu = for + prinf
    ///*puts(name);*/
    //printf("\n");
    /*
    char name[50];
    fflush(stdin); // tránh trôi lệnh sau scanf_s ở menu

    printf("Nhap ten day du: ");
    fgets(name, sizeof(name), stdin);
    printf("\n");

    printf("Ten vua nhap: %s\n", name);`
    */
    char name[50] = { "Anh" };
    while (getchar() != '\n')
    {
        printf("%c", getchar());
    }
    printf("Nhap ten cua ban: ");
    fgets(name, sizeof(name), stdin);
    printf("%s", name);
    printf("\n");
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
            demoString();
            break;
        case 3:
            demoMang2Chieu();
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
        printf("2. STRING");
        printf("\n");
        printf("Mang 2 chieu");
        printf("\n");
        printf("Moi chon chuc nang [1-10]: ");
        scanf_s("%d", &chonChucNang);
        if (chonChucNang != 0) {
            lapChucNang(chonChucNang);
        }

    } while (chonChucNang != 0);

}

//int main()
//{
//	int n;
//	int y[10];
//	printf("Nhap phan tu: ");
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++) {
//		printf("y[%d] = ", i);
//		scanf_s("%d", &y[i]);
//	}
//	printf("Cac phan tu cua mang la: \n");
//	for (int i = 0; i < n; i++) {
//		printf(" %d", y[i]);
//	}
//
//}