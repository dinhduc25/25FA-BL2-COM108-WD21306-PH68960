
#include <stdio.h>
#include <math.h>
// 1-----------------------------//
void kiemTraSoNguyen() {
	int chon;

	do {

		printf("Thuc thi kiem tra so nguyen \n");

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
		printf("Tiep tuc chuc nang [1|khac]: ");
		scanf_s("%d", &chon);
	} while (chon == 1);
}
//------------3---------------------//
void tinhTienkaraoke() {
	int chon;
	do {
		printf("Thuc thi tim uoc boi  \n");
		printf("Tiep tuc chuc nang [1|khac]: ");
		scanf_s("%d", &chon);
	} while (chon == 1);
}
//-----------------4------------------//
void tinhTiendien() {
	int chon;
	do {
		printf("Thuc thi tinh tien dien  \n");
		printf("Tiep tuc chuc nang [1|khac]: ");
		scanf_s("%d", &chon);
	} while (chon == 1);
}
//--------------5----------------------//
void doitien() {
	int chon;
	do {
		printf("Thuc thi doi tien  \n");
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
		printf("Chon chuc nang:");
		printf("\n");
		scanf_s("%d", &chon);
		switch (chon) {
		case 1:
			kiemTraSoNguyen();
			break;
		case 2:
			uocBoi();
			break;
		case 3:
			tinhLaiSuat();
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
	} while (chon != 0);
}
