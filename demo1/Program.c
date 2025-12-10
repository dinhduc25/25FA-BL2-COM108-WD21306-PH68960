
#include <stdio.h>
#include <math.h>
struct SinhVien {
    char ten[50];
    float diem;
};
void thongTinMh()
{
    char tenMH[50];
    char maMH[20];
    int soTin;
    int gia = 500000;

    printf("Nhap ten mon hoc: ");
    getchar();
    fgets(tenMH, sizeof(tenMH), stdin);

    printf("Nhap ma mon hoc: ");
    fgets(maMH, sizeof(maMH), stdin);

    printf("Nhap so tin chi: ");
    scanf_s("%d", &soTin);

    int tongTien = soTin * gia;

    printf("\n===== THONG TIN MON HOC =====\n");
    printf("Ten mon: %s", tenMH);
    printf("Ma mon: %s", maMH);
    printf("So tin chi: %d\n", soTin);
    printf("Gia: %d VND\n", gia);
    printf("Tong hoc phi: %d VND\n", tongTien);
}

void tongSole() {
    {
        int n;
        printf("Nhap vao 1 so nguyen duong N: ");
        scanf_s("%d", &n);

        int tong = 0, dem = 0;

        for (int i = 1; i <= n; i++)
        {
            if (i % 3 == 0)
            {
                tong += i;
                dem++;
            }
        }

        if (dem == 0)
        {
            printf("Khong co so nao chia het cho 3 trong khoang 1..%d\n", n);
        }
        else
        {
            float tbc = (float)tong / dem;
            printf("TBC cac so chia het cho 3 tu 1 -> %d la: %.2f\n", n, tbc);
        }
    }
}
void thongTinlap() {
    int chon;
    do
    {
        int soSV;
        printf("Nhap so sinh vien (nhap > 5): ");
        scanf_s("%d", &soSV);

        if (soSV <= 5)
        {
            printf("So sinh vien phai lon hon 5!\n");
            return;
        }

        struct SinhVien ds[100];

        getchar(); // clear buffer

        for (int i = 0; i < soSV; i++)
        {
            printf("\nNhap ten sinh vien %d: ", i + 1);
            fgets(ds[i].ten, sizeof(ds[i].ten), stdin);

            printf("Nhap diem cua sinh vien %d: ", i + 1);
            scanf_s("%f", &ds[i].diem);
            getchar();
        }

        float tongDiem = 0;
        printf("\n===== DANH SACH SINH VIEN =====\n");
        for (int i = 0; i < soSV; i++)
        {
            printf("%d. %s - Diem: %.2f\n", i + 1, ds[i].ten, ds[i].diem);
            tongDiem += ds[i].diem;
        }

        float diemTB = tongDiem / soSV;
        printf("\nDiem trung binh ca lop: %.2f\n", diemTB);
        printf("Tiep tuc chuc nang [1|khac]: ");
        scanf_s("%d", &chon);
        printf("---------------------------\n");
    } while (chon == 0);

}
void lapChucNang(int chon)
{
    int tiepTuc = 1;
    while (tiepTuc == 1)
    {
        switch (chon)
        {
        case 1:
            thongTinMh();
            break;
        case 2:
            tongSole();
            break;
        case 3:
            thongTinlap();
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
        printf("1. Thong tin mon hoc\n");
        printf("2. Tinh tong cac so le \n");
        printf("3. Thong tin diem lap\n");
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



