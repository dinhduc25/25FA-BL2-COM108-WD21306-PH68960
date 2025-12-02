
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
struct SinhVien {
	char ten[50];
	float diem;
	char hocLuc[20];
};
// CASE 10
int UCLN(int a, int b) {
	while (b != 0) {
		int tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}

void rutGon(int* ts, int* ms) {
	int u = UCLN(*ts, *ms);
	*ts /= u;
	*ms /= u;
}
//-------------------------
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

		int k = sqrt(x);
		if (k * k == x)
			printf("%d la so chinh phuong\n", x);
		else
			printf("%d khong la so chinh phuong\n", x);
		printf("Tiep tuc chuc nang [1|khac]: ");
		scanf_s("%d", &chon);
		printf("---------------------------\n");
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
		printf("---------------------------\n");
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
		printf("---------------------------\n");
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
		printf("---------------------------\n");
	} while (chon == 1);
}
//--------------5----------------------//
void doitien() {
	int chon;
	do {
		printf("  Thuc thi doi tien \n");
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
		printf("---------------------------\n");
	} while (chon == 1);
}
//--------------------6-------------------//
void tinhLaiSuat() {
	int chon;
	do {
		printf(" Thuc thi tinh lai suat  \n");
		float tienVay;
		float laiSuat = 0.05;
		int kyHan = 12;
		
		printf("Nhap so tien muon vay: ");
		scanf_s("%f", &tienVay);

		float gocPhaiTra = tienVay / kyHan; 
		float tienConLai = tienVay;

		printf("\n===== Bang tra gop 12 thang =====\n");
		printf("Ky Han | Lai phai tra | Goc phai tra | So tien phai tra | So tien con lai\n");

		for (int i = 1; i <= kyHan; i++) {
			float laiPhaiTra = tienConLai * laiSuat;
			float tongPhaiTra = gocPhaiTra + laiPhaiTra;
			tienConLai -= gocPhaiTra;

			printf("%2d     | %10.0f    | %10.0f   | %15.0f   | %15.0f\n",
				i, laiPhaiTra, gocPhaiTra, tongPhaiTra, tienConLai);
		}
		printf("Tiep tuc chuc nang [1|khac]: ");
		scanf_s("%d", &chon);
		printf("---------------------------\n");
	} while (chon == 1);
}
//---------------------------7----------------//
void vayTienmuaXe() {
	int chon;
	do {
		printf(" Thuc thi vay tien mua xe \n");

		float phanTramVay;
		const float giaXe = 500000000;       
		const int soThang = 24 * 12;          
		const float laiThang = 0.072 / 12;    

		printf("Nhap %% so tien muon vay : ");
		scanf_s("%f", &phanTramVay);

		float tienVay = giaXe * (phanTramVay / 100);
		float traTruoc = giaXe - tienVay;
		float gocMoiThang = tienVay / soThang;
		float noConLai = tienVay;

		printf("\nTien tra truoc: %.0f VND\n", traTruoc);
		printf("So tien vay: %.0f VND\n", tienVay);

		printf("\n===== Bang tra gop 24 nam (288 thang) =====\n");
		printf("Thang | Lai phai tra | Goc phai tra | Tong phai tra | No con lai\n");

		for (int i = 1; i <= soThang; i++) {
			float tienLai = noConLai * laiThang;
			float tongTra = gocMoiThang + tienLai;
			noConLai -= gocMoiThang;

			printf("%4d | %11.0f | %12.0f | %13.0f | %12.0f\n",
				i, tienLai, gocMoiThang, tongTra, noConLai);
		}
		printf("Tiep tuc chuc nang [1|khac]: ");
		scanf_s("%d", &chon);
		printf("---------------------------\n");
	} while (chon == 1);
}
//-----------------8---------------------------//
void sapXepSV() {
	int chon;
	do {
		printf(" Thuc thi sap xep sinh vien  \n");
		int n;
		struct SinhVien sv[100];

		do {
			printf("Nhap so luong sinh vien (1-100): ");
			scanf_s("%d", &n);
			if (n < 1 || n > 100)
				printf("So luong khong hop le. Moi nhap lai.\n");
		} while (n < 1 || n > 100);

		getchar(); 
		for (int i = 0; i < n; i++) {
			printf("\nNhap thong tin sinh vien thu %d\n", i + 1);

			printf("Ho ten: ");
			fgets(sv[i].ten, sizeof(sv[i].ten), stdin);
			sv[i].ten[strcspn(sv[i].ten, "\n")] = '\0';

			printf("Diem: ");
			scanf_s("%f", &sv[i].diem);
			getchar(); 
			if (sv[i].diem >= 9.0)
				strcpy_s(sv[i].hocLuc, sizeof(sv[i].hocLuc), "Xuat sac");
			else if (sv[i].diem >= 8.0)
				strcpy_s(sv[i].hocLuc, sizeof(sv[i].hocLuc), "Gioi");
			else if (sv[i].diem >= 6.5)
				strcpy_s(sv[i].hocLuc, sizeof(sv[i].hocLuc), "Kha");
			else if (sv[i].diem >= 5.0)
				strcpy_s(sv[i].hocLuc, sizeof(sv[i].hocLuc), "Trung binh");
			else
				strcpy_s(sv[i].hocLuc, sizeof(sv[i].hocLuc), "Yeu");
		}

		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				if (sv[i].diem < sv[j].diem) {
					struct SinhVien tmp = sv[i];
					sv[i] = sv[j];
					sv[j] = tmp;
				}
			}
		}

		printf("\n===== DANH SACH SINH VIEN SAU KHI SAP XEP =====\n");
		printf("%-25s %-10s %-15s\n", "Ho ten", "Diem", "Hoc luc");
		for (int i = 0; i < n; i++) {
			printf("%-25s %-10.2f %-15s\n", sv[i].ten, sv[i].diem, sv[i].hocLuc);
		}
		printf("Tiep tuc chuc nang [1|khac]: ");
		scanf_s("%d", &chon);
		printf("---------------------------\n");
	} while (chon == 1);
}
//-------------9-------------------------------//
void Game() {
	int chon;
	do {
		printf("Bat dau tro choi  \n");
		int user[2];
		int system[2];
		int match = 0;

		for (int i = 0; i < 2; i++) {
			do {
				printf("Nhap so thu %d (01-15): ", i + 1);
				scanf_s("%d", &user[i]);
			} while (user[i] < 1 || user[i] > 15);
		}

		srand((unsigned int)time(NULL));
		system[0] = rand() % 15 + 1;
		do {
			system[1] = rand() % 15 + 1;
		} while (system[1] == system[0]); 

		printf("\nSo cua he thong: %02d %02d\n", system[0], system[1]);

		for (int i = 0; i < 2; i++) {
			if (user[i] == system[0] || user[i] == system[1]) {
				match++;
			}
		}

		if (match == 0)
			printf("Chuc ban may man lan sau!\n");
		else if (match == 1)
			printf("Chuc mung ban da trung giai nhi!\n");
		else if (match == 2)
			printf("Chuc mung ban da trung giai nhat!\n");

		printf("Tiep tuc chuc nang [1|khac]: ");
		scanf_s("%d", &chon);
		printf("---------------------------\n");
	} while (chon == 1);
}
//--------------------10-----------------------//
void tinhToanphanSo() {
	int chon;
	do {
		printf(" Thuc thi phep tinh  \n");
		int ts1, ms1, ts2, ms2;
		printf("Nhap phan so thu nhat [tu so | mau so]: ");
		scanf_s("%d %d", &ts1, &ms1);
		printf("Nhap phan so thu hai [tu so | mau so]: ");
		scanf_s("%d %d", &ts2, &ms2);

		if (ms1 == 0 || ms2 == 0) {
			printf("Mau so khong hop le!\n");
		}
		else {
			int tong_ts = ts1 * ms2 + ts2 * ms1;
			int tong_ms = ms1 * ms2;
			rutGon(&tong_ts, &tong_ms);

			int hieu_ts = ts1 * ms2 - ts2 * ms1;
			int hieu_ms = ms1 * ms2;
			rutGon(&hieu_ts, &hieu_ms);

			int tich_ts = ts1 * ts2;
			int tich_ms = ms1 * ms2;
			rutGon(&tich_ts, &tich_ms);

			int thuong_ts = ts1 * ms2;
			int thuong_ms = ts2 * ms1;
			if (thuong_ms == 0) {
				printf("Khong the chia cho 0!\n");
			}
			else {
				rutGon(&thuong_ts, &thuong_ms);

				printf("\nTong: %d/%d\n", tong_ts, tong_ms);
				printf("Hieu: %d/%d\n", hieu_ts, hieu_ms);
				printf("Tich: %d/%d\n", tich_ts, tich_ms);
				printf("Thuong: %d/%d\n", thuong_ts, thuong_ms);
			}
		}

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
			sapXepSV();
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
