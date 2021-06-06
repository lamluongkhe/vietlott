//#include<iostream>
//#include<time.h>
//using namespace std;
//void nhap(int arr[], int sizearr);
//void hoanvi(int& a, int& b);
//void Sapxep(int arr[], int sizearr);
//void xuat(int arr[], int sizearr);
//void Kq(int arr2[], int sizearr);
//void Sosanh(int arr[], int arr2[], int sizearr);
////testne
//int main()
//{
//	const int sizearr = 6;
//	int arr[sizearr], arr2[sizearr];
//	cout << "******** Tro choi VIETLOTT 6/45 ********" << endl;
//	cout << "Moi ban chon 6 so, tu 1 den 45" << endl;
//	nhap(arr, sizearr);
//	Sapxep(arr, sizearr);
//	xuat(arr, sizearr);
//	Kq(arr2, sizearr);
//	Sosanh(arr, arr2, sizearr);
//	system("pause");
//	return 0;
//}
//void nhap(int arr[], int sizearr)			//Nguoi choi nhap 6 so minh muon va kiem tra co trung so hay khong
//{
//	for (int i = 0; i < sizearr; i++)
//	{
//		int b = i + 1;
//		cout << "so thu " << b << " ban chon la: ";
//		cin >> arr[i];
//		while (arr[i] > 45 || arr[i] <= 0)
//		{
//			cout << "nhap sai, ban chi co the chon so tu 1 den 45" << endl;
//			cout << "so thu " << b << " ban chon la: ";
//			cin >> arr[i];
//		}
//		int j = 0;
//		while (j < i)                      //kiem tra nhap co trung so hay khong
//		{
//			if (arr[i] == arr[j])
//			{
//				cout << "So nay da nhap, moi chon 1 so khac " << endl;
//				cout << "so thu " << b << " ban chon la: ";
//				cin >> arr[i];
//				while (arr[i] > 45 || arr[i] <= 0)
//				{
//					cout << "nhap sai, ban chi co the chon so tu 1 den 45" << endl;
//					cout << "so thu " << b << " ban chon la: ";
//					cin >> arr[i];
//				}
//				j = 0;
//				continue;
//			}
//			else
//			{
//				j++;
//			}
//		}
//
//	}
//}
//void hoanvi(int& a, int& b) // chuyen vi tri cac so
//{
//	int tam = a;
//	a = b;
//	b = tam;
//}
//void Sapxep(int arr[], int sizearr)	//Sap xep cac so tu be den lon
//{
//	for (int i = 0; i < sizearr; i++)
//	{
//		if (arr[i] < arr[i - 1])
//		{
//			hoanvi(arr[i], arr[i - 1]);
//			i = 0;
//		}
//	}
//}
//void xuat(int arr[], int sizearr)		//Xuat cac so nguoi choi vua nhap
//{
//	cout << "cac so ban chon la: " << endl;
//	for (int i = 0; i < sizearr; i++)
//	{
//		cout << arr[i] << "\t";
//	}
//	cout << endl;
//}
//void Kq(int arr2[], int sizearr)
//{
//	srand(time(0));
//	cout << "******** ket qua so xo Vietlott ********" << endl;
//	for (int i = 0; i < sizearr; i++)
//	{
//		arr2[i] = rand() % (45 - 1 + 1) + 1;
//		for (int j = 1; j <= i; j++)		//kiem tra so ngau nhien co trung nhau ko.
//		{
//			if (arr2[i] == arr2[j - 1])
//			{
//				arr2[i] = rand() % (45 - 1 + 1) + 1;
//				j--;
//			}
//		}
//	}
//	Sapxep(arr2, sizearr);					//Sap xep Ket qua xo so theo thu tu tu be den lon.
//	for (int i = 0; i < sizearr; i++)
//	{
//		cout << arr2[i] << '\t';
//	}
//	cout << endl;
//}
//void Sosanh(int arr[], int arr2[], int sizearr)		//So sanh ket qua Nhap cua nguoi choi va ket qua xo so cua chuong trinh
//{
//	int dem = 0;
//	for (int i = 0; i < sizearr; i++)
//	{
//		for (int j = 0; j < sizearr; j++)
//			if (arr[i] == arr2[j])
//			{
//				dem++;
//			}
//
//	}
//	cout << "Tong cac so trung la: " << dem << endl;
//	switch (dem)										//Xuat giai thuong ma nguoi choi trung
//	{
//	case 1: case 2:
//		cout << "Chuc ban may man lan sau \n";
//		break;
//	case 3:
//		cout << "Ban trung giai ba: voi so tien la 30.000 VND \n";
//		break;
//	case 4:
//		cout << "Ban trung giai nhi: voi so tien la 300.000 VND \n";
//		break;
//	case 5:
//		cout << "Ban trung giai nhat: voi so tien la 10.000.000 VND \n";
//		break;
//	case 6:
//		cout << "Xin chu mung, ban da trung giai Jackpot\n";
//		break;
//	default:
//		break;
//	}
//}
