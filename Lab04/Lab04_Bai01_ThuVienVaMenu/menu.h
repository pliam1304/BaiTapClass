#pragma once
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu);
void ChayChuongTrinh();

void XuatMenu() {
	cout << endl << "======== CHON CHUC NANG ========";
	cout << endl << "1. Chuc nang thu nhat";
	cout << endl << "2. CHuc nang thu hai";
	cout << endl << "3. Chuc nang thu ba";
	cout << endl << "4. Chuc nang thu tu";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "================================";
}

int ChonMenu(int soMenu) {
	int stt;

	do {
		system("cls");

		XuatMenu();

		cout << endl << "Nhap 1 so de chon menu: ";
		cin >> stt;
	} while (stt < 0 || stt > soMenu);

	return stt;
}

void XuLyMenu(int menu) {
	switch (menu) {
		case 1:
			cout << endl << "Ban da chon chuc nang 1";
			break;
		case 2:
			cout << endl << "Ban da chon chuc nang 2";
			break;
		case 3:
			cout << endl << "Ban da chon chuc nang 3";
			break;
		case 4:
			cout << endl << "Ban da chon chuc nang 4";
			break;
		default:
			cout << endl << "Thoat khoi chuong trinh";
			break;
	}

	if (menu > 0) {
		cout << endl << endl
			<< "Nhan 1 phim bat ky de tiep tuc";
	}
}

void ChayChuongTrinh()
{
	int menu,
		soMenu = 4;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu);
	} while (menu > 0);
	_getch();
}