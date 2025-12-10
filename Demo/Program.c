
#include <stdio.h>
#include <math.h>
#include <string.h>
void thongTinSP() {
    int chon;
    do{
        printf("---Thuc thi thong tin san pham---\n");
        char ten1[50], ten2[50], ten3[50];
        float soLuong1, soLuong2, soLuong3;

        printf("Nhap ten san pham 1: ");
        scanf_s("%s", ten1, 50);
        printf("Nhap so luong san pham 1: ");
        scanf_s("%f", &soLuong1);

        printf("Nhap ten san pham 2: ");
        scanf_s("%s", ten2, 50);
        printf("Nhap so luong san pham 2: ");
        scanf_s("%f", &soLuong2);

        printf("Nhap ten san pham 3: ");
        scanf_s("%s", ten3, 50);
        printf("Nhap so luong san pham 3: ");
        scanf_s("%f", &soLuong3);

        printf("\nTHONG TIN SAN PHAM\n");
        printf("%s  %.2f\n", ten1, soLuong1);
        printf("%s  %.2f\n", ten2, soLuong2);
        printf("%s  %.2f\n", ten3, soLuong3);
        printf("Tiep tuc chuc nang [1|khac]: ");
        scanf_s("%d", &chon);
        printf("---------------------------\n");
    } while (chon == 1);
}

void tbcChiHet() {
    int chon;
    do {
        printf("---Thuc thi phep tinh---\n");
        int n;

        printf("Nhap 1 so nguyen duong n: ");
        scanf_s("%d", &n);

        printf("\nCac so chia het cho 3 nho hon %d:\n", n);

        int tong = 0, dem = 0;

        for (int i = 1; i < n; i++) {
            if (i % 3 == 0) {
                printf("%d ", i);
                tong += i;
                dem++;
            }
        }

        if (dem > 0) {
            float tbc = (float)tong / dem;
            printf("\nTrung binh cong = %.2f\n", tbc);
        }
        else {
            printf("\nKhong co so nao chia het cho 3!\n");
        }
        printf("Tiep tuc chuc nang [1|khac]: ");
        scanf_s("%d", &chon);
        printf("---------------------------\n");
    } while (chon == 1);
}

void thongTinNV() {
    int chon;
    do {
        printf("---Thuc thi thong tin nhan vien---\n");
        int soNV;

        printf("Nhap so luong nhan vien: ");
        scanf_s("%d", &soNV);

        char ten[100][50];
        float luong[100];

        for (int i = 0; i < soNV; i++) {
            printf("\nNhap ten nhan vien %d: ", i + 1);
            scanf_s("%s", ten[i], 50);
            printf("Nhap muc luong cua nhan vien %d: ", i + 1);
            scanf_s("%f", &luong[i]);
        }

        printf("\n===== DANH SACH NHAN VIEN =====\n");
        for (int i = 0; i < soNV; i++) {
            printf("%s  %.2f trieu\n", ten[i], luong[i]);
        }

        int dem = 0;
        for (int i = 0; i < soNV; i++) {
            if (luong[i] > 5) dem++;
        }
        printf("\nSo nhan vien co luong > 5 trieu: %d\n", dem);

        float max = luong[0];
        int vitri = 0;
        for (int i = 1; i < soNV; i++) {
            if (luong[i] > max) {
                max = luong[i];
                vitri = i;
            }
        }
        printf("Nhan vien luong cao nhat: %s (%.2f trieu)\n", ten[vitri], max);
        printf("Tiep tuc chuc nang [1|khac]: ");
        scanf_s("%d", &chon);
        printf("---------------------------\n");
    } while (chon == 1);
}

void lapChucNang(int chon)
{
    int tiepTuc = 1;
    while (tiepTuc == 1)
    {
        switch (chon)
        {
        case 1:
            thongTinSP();
            break;
        case 2:
            tbcChiHet();
            break;
        case 3:
            thongTinNV();
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
        printf("1. Thong tin san pham \n");
        printf("2. TBC cac so chia het cho 3 \n");
        printf("3. Thong tin nhan vien\n");
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


