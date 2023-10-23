// Basit Hesap Makinesi.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//
//C++ ile basit hesap makinesi yapımı
#include <iostream>
using namespace std;
int main()
{
	int sayi1, sayi2, sonuc;
	char islem;

	cout << "\n\n";

	cout << "Hesap Makinesi\n\n";
	cout << "Yapmak istediginiz islemin sembolunu giriniz\n";
	cout << "Toplama:(+)\n";
	cout << "Cikarma:(-)\n";
	cout << "Carpma:(*)\n";
	cout << "Bolme:(/)\n";
	cout << "Cikis yapmak icin q basiniz\n\n";

	while (true)
	{
		cout << "Yapmak istediginiz islemin sembolunu giriniz:";
		cin >> islem;

		if (islem=='q')
		{
			cout << "Cikis yapiliyor";
			break;
		}
		else if (islem=='+')
		{
			cout << "Toplama islemi bolumu\n\n";
			cout << "Birinci Sayiyi Giriniz:";
			cin >> sayi1;
			cout << "\n";
			cout << "Ikinci Sayiyi Giriniz:";
			cin >> sayi2;
			sonuc = sayi1 + sayi2;
			cout << "Girdiginiz birinci sayi:" << sayi1;
			cout << "\n";
			cout << "Girdiginiz ikinci sayi:" << sayi2;
			cout << "\n";
			cout << "Sonuc: " << sonuc;
			cout << "\n";
		}
		else if (islem=='-')
		{
			cout << "Cikarma islemi bolumu\n\n";
			cout << "Birinci Sayiyi Giriniz:";
			cin >> sayi1;
			cout << "\n";
			cout << "Ikinci Sayiyi Giriniz:";
			cin >> sayi2;
			sonuc = sayi1 - sayi2;
			cout << "Girdiginiz birinci sayi:" << sayi1;
			cout << "\n";
			cout << "Girdiginiz ikinci sayi:" << sayi2;
			cout << "\n";
			cout << "Sonuc: " << sonuc;
			cout << "\n";
		}
		else if (islem == '*')
		{
			cout << "Carpma islemi bolumu\n\n";
			cout << "Birinci Sayiyi Giriniz:";
			cin >> sayi1;
			cout << "\n";
			cout << "Ikinci Sayiyi Giriniz:";
			cin >> sayi2;
			sonuc = sayi1 * sayi2;
			cout << "Girdiginiz birinci sayi:" << sayi1;
			cout << "\n";
			cout << "Girdiginiz ikinci sayi:" << sayi2;
			cout << "\n";
			cout << "Sonuc: " << sonuc;
			cout << "\n";
		}
		else if (islem == '/')
		{
			cout << "Bolme islemi bolumu\n\n";
			cout << "Birinci Sayiyi Giriniz:";
			cin >> sayi1;
			cout << "\n";
			cout << "Ikinci Sayiyi Giriniz:";
			cin >> sayi2;
			sonuc = sayi1 / sayi2;
			cout << "Girdiginiz birinci sayi:" << sayi1;
			cout << "\n";
			cout << "Girdiginiz ikinci sayi:" << sayi2;
			cout << "\n";
			cout << "Sonuc: " << sonuc;
			cout << "\n";
		}

		else
		{
			cout << "Gecersiz islem\n\n";
		}
	}

	return 0;
}


