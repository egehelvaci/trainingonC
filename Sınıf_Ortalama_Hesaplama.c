#include <stdio.h>
#include <stdlib.h>

int main()
{
    int not_toplam=0;
    int notlar;
    int ortalama ;
    int ogrencisayisi;
    int i=1;

    printf("Ogrenci Sayisini Giriniz...\n");
    scanf("%d",&ogrencisayisi);
    if(ogrencisayisi<5)
    {
        printf("Bes kisilik sinif mi olur ?\n");


    }
    else {
    while(i<=ogrencisayisi)
    {
        printf("%d.Ogrenci Notu Giriniz:\n",i);
        scanf("%d",&notlar);
        not_toplam+=notlar;
        i++;
    }
        ortalama=not_toplam/ogrencisayisi;
        printf("ortalama=%d",ortalama);

    }


    return 0;
}
