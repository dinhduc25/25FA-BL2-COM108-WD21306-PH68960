
#include <stdio.h>
#include <math.h>
#include <string.h>
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
    char mangKyTu[100] = {"Anh"};
    while (getchar() != '\n')
    {
        printf("%c", getchar());
    }
    printf("Nhap ten cua ban: ");
    fgets(mangKyTu, sizeof(mangKyTu), stdin);
    printf("%s", mangKyTu);
    printf("\n");
   
    printf("String length: ");
    printf("%d", strlen(mangKyTu) - 1);
    printf("\n");
    printf("String Compare The Same As: ");
    printf("%d", strcmp("aBc", "aBc"));
    printf("\n");
    printf("String Compare Less than: ");
    printf("%d", strcmp("A", "C"));
    printf("\n");
    printf("String Compare Greater than: ");
    printf("%d", strcmp("C", "A"));
    printf("\n");

    printf("String Reverse (Encryption): ");
    printf("%s", strrev(mangKyTu));
    printf("\n");
    printf("String Reverse (Decryption): ");
    printf("%s", strrev(mangKyTu));
    printf("\n");
    printf("String Lower: ");
    printf("%s", strlwr(mangKyTu));
    printf("\n");
    printf("String Upper: ");
    printf("%s", strupr(mangKyTu));
    printf("\n");
    printf("Find String in String: ");
    if (strstr(mangKyTu, "A") != NULL)
    {
        printf("Found: ");
        printf("%s", strstr(mangKyTu, "A"));
    }
    else
    {
        printf("NOT FOUND");
        printf("\n");
    }

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