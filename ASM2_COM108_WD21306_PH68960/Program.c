
#include <stdio.h>
#include <math.h>
// 1-----------------------------//
void kiemTraSoNguyen() {
	int chon;

	do {

		printf("Thuc thi kiem tra so nguyen \n");
		int x;
		printf("Nhap mot so bat ky: ");
		scanf_s("%d", &x);
		printf("----Ket qua kiem tra----\n");
		printf("%d la so nguyen\n", x);
		int ktNT = 1;
		if (x < 2) ktNT = 0;
		else
			for (int i = 2; i <= sqrt(x); i++)
				if (x % i == 0) {
					ktNT = 0;
					break;
				}
		if (ktNT)
			printf("%d la so nguyen to\n", x);
		else
			printf("%d khong la so nguyen to\n", x);

		// Kiểm tra số chính phương
		int k = sqrt(x);
		if (k * k == x)
			printf("%d la so chinh phuong\n", x);
		else
			printf("%d khong la so chinh phuong\n", x);
		printf("Tiep tuc chuc nang [1|khac]: ");
		scanf_s("%d", &chon);
		printf("\n");
	} while (chon == 1);
	printf("\n");
}
//-----------2-----------------------//
void uocBoi() {
	int chon;
	do {
		printf("Thuc thi tim uoc boi  \n");
		int x, y;
		int a, b;
		printf("Nhap so nguyen to thu nhat: ");
		scanf_s("%d", &x);
		printf("Nhap so nguyen to thu hai: ");
		scanf_s("%d", &y);
		a = x;
		b = y;
		while (a != b) {
			if (a > b)
				a -= b;
			else b -= a;
		}
		printf("UCLN cua %d va %d la: %d\n ", x, y, a);
		int bcnn = (x * y) / a;
		printf("BCNN la: %d\n", bcnn);
		printf("Tiep tuc chuc nang [1|khac]: ");
		scanf_s("%d", &chon);
	} while (chon == 1);
}
//------------3---------------------//
void tinhTienkaraoke() {
	int chon;
	do {
		printf("  Thuc thi tinh tien karaoke  \n");
		int gioBD, gioKT;
		float tongTien = 0;
		printf("Nhap gio bat dau (12-23): ");
		scanf_s("%d", &gioBD);
		printf("Nhap gio ket thuc (12-23): ");
		scanf_s("%d", &gioKT);

		if (gioBD < 12 || gioKT > 23 || gioBD >= gioKT) {
			printf("Gio khong hop le! Quay ve menu.\n");
		}
		else {
			int soGio = gioKT - gioBD;

			if (soGio <= 3) {
				tongTien = soGio * 150000;
			}
			else {
				tongTien = 3 * 150000 + (soGio - 3) * 150000 * 0.7;
			}
			if (gioBD >= 14 && gioBD <= 17)
				tongTien *= 0.9;

			printf("So gio hat: %d\n", soGio);
			printf("Tong tien can thanh toan: %.0f VND\n", tongTien);
		}

		printf("Tiep tuc chuc nang [1|khac]: ");
		scanf_s("%d", &chon);
		printf("\n");
	} while (chon == 1);
}
//-----------------4------------------//
void tinhTiendien() {
	int chon;
	do {
		printf("Thuc thi tinh tien dien  \n");
		int kwh;
		float tien = 0;

		printf("Nhap so kWh dien da su dung: ");
		scanf_s("%d", &kwh);

		if (kwh < 0) {
			printf("So kWh khong hop le!\n");
		}
		else {
			int so = kwh;

			if (so > 400) {
				tien += (so - 400) * 2927;
				so = 400;
			}
			if (so > 300) {
				tien += (so - 300) * 2834;
				so = 300;
			}
			if (so > 200) {
				tien += (so - 200) * 2536;
				so = 200;
			}
			if (so > 100) {
				tien += (so - 100) * 2014;
				so = 100;
			}
			if (so > 50) {
				tien += (so - 50) * 1734;
				so = 50;
			}
			if (so > 0) {
				tien += so * 1678;
			}
			printf("Tong tien dien phai tra: %.0f VND\n", tien);
		}
		printf("Tiep tuc chuc nang [1|khac]: ");
		scanf_s("%d", &chon);
	} while (chon == 1);
}
//--------------5----------------------//
void doitien() {
	int chon;
	do {
		printf("---Thuc thi doi tien---  \n");
		int x;
		int menhGia[] = { 500, 200, 100, 50, 20, 10, 5, 2, 1 };
		int soTo[9] = { 0 };
		printf("Nhap so tien can doi: ");
		scanf_s("%d", &x);
		int temp = x;
		for (int i = 0; i < 9; i++) {
			soTo[i] = temp / menhGia[i];
			temp %= menhGia[i];
		}
		printf("Doi tien thanh: \n");
		for (int i = 0; i < 9; i++) {
			if (soTo[i] > 0)
				printf("%d to menh gia: %d\n", soTo[i], menhGia[i]);
		}
		printf("Tiep tuc chuc nang [1|khac]: ");
		scanf_s("%d", &chon);
	} while (chon == 1);
}
//--------------------6-------------------//
void tinhLaiSuat() {
	int chon;
	do {
		printf("Thuc thi tinh lai suat  \n");
		printf("Tiep tuc chuc nang [1|khac]: ");
		scanf_s("%d", &chon);
	} while (chon == 1);
}
//---------------------------7----------------//
void vayTienmuaXe() {
	int chon;
	do {
		printf("Thuc thi vay tien  \n");
		printf("Tiep tuc chuc nang [1|khac]: ");
		scanf_s("%d", &chon);
	} while (chon == 1);
}
//-----------------8---------------------------//
void sapXepsv() {
	int chon;
	do {
		printf("Thuc thi sap xep sinh vien  \n");
		printf("Tiep tuc chuc nang [1|khac]: ");
		scanf_s("%d", &chon);
	} while (chon == 1);
}
//-------------9-------------------------------//
void Game() {
	int chon;
	do {
		printf("Bat dau tro choi  \n");
		printf("Tiep tuc chuc nang [1|khac]: ");
		scanf_s("%d", &chon);
	} while (chon == 1);
}
//--------------------10-----------------------//
void tinhToanphanSo() {
	int chon;
	do {
		printf("Thuc thi phep tinh  \n");
		printf("Tiep tuc chuc nang [1|khac]: ");
		scanf_s("%d", &chon);
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
			kiemTraSoNguyen();
			break;
		case 2:
			uocBoi();
			break;
		case 3:
			tinhTienkaraoke();
			break;
		case 4:
			tinhTiendien();
			break;
		case 5:
			doitien();
			break;
		case 6:
			tinhLaiSuat();
			break;
		case 7:
			vayTienmuaXe();
			break;
		case 8:
			sapXepsv();
			break;
		case 9:
			Game();
			break;
		case 10:
			tinhToanphanSo();
			break;
		default:
			printf("Hay chon lai tu cn [1-10]: \n");
			printf("------------------------\n");
			break;
		}
		printf("Ban muon xac nhan quay lai Menu ? [0=Co | 1=Khong]\n");
		scanf_s("%d", &tiepTuc);
		system("cls"); // clear screen
	}
}


int main()
{
	int chon;
	do {
		printf("==========Menu===========");
		printf("\n");
		printf("1. Kiem tra so nguyen");
		printf("\n");
		printf("2. Uoc chung | Boi chung chua 2 so");
		printf("\n");
		printf("3. Tinh tien quan karaoke");
		printf("\n");
		printf("4 .Tinh tien dien ");
		printf("\n");
		printf("5. Chuc nang doi tien");
		printf("\n");
		printf("6. Lai suat vay ngan hang vay tra gop");
		printf("\n");
		printf("7. Vay tien mua xe");
		printf("\n");
		printf("8. Sap xep thong tin sinh vien");
		printf("\n");
		printf("9. Game FPOLY_LOTT(2/15)");
		printf("\n");
		printf("10. Tinh toan phan so");
		printf("\n");
		printf("Thoat chuong trinh: [0]\n");
		printf("Chon chuc nang: ");
		scanf_s("%d", &chon);
		printf("-----------------------------\n");
		if (chon != 0) {
			lapChucNang(chon);
		}
	} while (chon != 0);
}
