
#include <stdio.h>
#include <math.h>
#include <string.h>
void thongTinTC() {
    char ma[20], ten[50];
    int namSinh;

    printf("\n=== THONG TIN THU CUNG ===\n");

    printf("Nhap ma thu cung: ");
    scanf_s("%s", ma, 20);

    printf("Nhap ten thu cung: ");
    scanf_s("%s", ten, 50);

    printf("Nhap nam sinh: ");
    scanf_s("%d", &namSinh);

    printf("\n--- KET QUA ---\n");
    printf("Ma thu cung: %s\n", ma);
    printf("Ten thu cung: %s\n", ten);
    printf("Nam sinh: %d\n", namSinh);
}
void tinhTong() {
    int n;

    printf("\nNhap so luong phan tu (n > 3): ");
    scanf_s("%d", &n);

    int a[100], tong = 0;

    printf("Nhap %d so nguyen:\n", n);
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &a[i]);
        tong += a[i];
    }

    printf("\n--- KET QUA ---\n");
    printf("Tong cac so = %d\n", tong);

    // Kiem tra cac so co chia het cho 5
    printf("Cac so chia het cho 5: ");
    int co = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 5 == 0) {
            printf("%d ", a[i]);
            co = 1;
        }
    }
    if (!co) printf("Khong co so nao");
    printf("\n");
}
void thongTinCH() {
    int sl;
    printf("\nNhap so luong thu cung: ");
    scanf_s("%d", &sl);

    float canNang[100];
    float tong = 0;
    float min = 0;

    printf("Nhap can nang cua tung thu cung:\n");
    for (int i = 0; i < sl; i++) {
        scanf_s("%f", &canNang[i]);
        tong += canNang[i];

        if (i == 0 || canNang[i] < min) {
            min = canNang[i];
        }
    }

    printf("\n--- KET QUA ---\n");
    printf("Can nang trung binh: %.2f\n", tong / sl);
    printf("Can nang nho nhat: %.2f\n", min);
}
void lapChucNang(int chon)
{
    int tiepTuc = 1;
    while (tiepTuc == 1)
    {
        switch (chon)
        {
        case 1:
            thongTinTC();
            break;
        case 2:
            tinhTong();
            break;
        case 3:
            thongTinCH();
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
        printf("1. Thong tin thu cung \n");
        printf("2. Tinh tong \n");
        printf("3. Thong tin cua hang\n");
        printf("0. Thoat chuong trinh\n");
        printf("------------------------\n");
        printf("Chon chuc nang [0-3]: ");
        printf("\n");
        scanf_s("%d", &chon);
        if (chon != 0) {
            lapChucNang(chon);
        }
    } while (chon != 0);
}
