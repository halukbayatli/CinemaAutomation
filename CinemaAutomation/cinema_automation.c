#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *s1 = "ENIGMA", *s2 = "HARRY POTTER", *s3 = "THE LORD OF THE RINGS", *s4 = "AVATAR";
    char *tercih;
    float fiyat0, fiyat, artis1, artis2, ind1, ind2, ind3, ind4, dubzam, zam3d, sabahind, ogrind, yasind, gunind, topind;
    int f1, f2, f3, f4;

    f1 = 100;
    f2 = 140;
    f3 = 90;
    f4 = 120;

    int tercih1, tercih2, tercih3, tercih4, ogr, yas, guntercih;

    printf("\tSINEMA FILMLERI\t");
    printf("\n\n\n");
    printf("******** %s ********\n******** %s ********\n******** %s ********\n******** %s ********", s1,s2,s3,s4);
    printf("\n\n\n");
    printf("\t%s ------> %i TL\n\t%s ------> %i TL\n\t%s ------> %i TL\n\t%s ------> %i TL",s1,f1,s2,f2,s3,f3,s4,f4);

    printf("\n\n\n");
    printf("\n%s icin 1\n%s icin 2\n%s icin 3\n%s icin 4\n\n", s1,s2,s3,s4);
    printf("Izlemek istediginiz sinema filmini seciniz: ");
    scanf("%i", &tercih1);
    if (tercih1 == 1)
    {
        fiyat = f1;
        tercih = s1;
    }
    else if (tercih1 == 2)
    {
        fiyat = f2;
        tercih = s2;
    }
    else if (tercih1 == 3)
    {
        fiyat = f3;
        tercih = s3;
    }
    else if (tercih1 == 4)
    {
        fiyat = f4;
        tercih = s4;
    }

    fiyat0 = fiyat;

    printf("\n\n\n");
    printf("\t|Filmde altyazili tercihinde bulursaniz fiyat artmaz\t\n\t dublajli tercihinde bulunursaniz %%10 fiyat artar|\t");
    printf("\n\n\n");
    printf("Filmi altyazili veya dublajli olarak hangisini izlemek istersiniz (altyazili icin '1' dublajli icin '2' giriniz): ");
    scanf("%i", &tercih2);
    if (tercih2 == 2)
    {
        dubzam = 0.1;
        artis1 = fiyat*dubzam;
        fiyat += artis1;
    }

    printf("\n\n\n");
    printf("\t|Filmde 2D tercih edilirse fiyat artmaz\t\n\t 3D tercih edilirse %%15 fiyat artar|\t");
    printf("\n\n\n");
    printf("Filmi 2D veya 3D olarak hangisini tercih etmek istersiniz (2D icin '2' 3D icin '3' giriniz): ");
    scanf("%i", &tercih3);
    if (tercih3 == 3)
    {
        zam3d = 0.15;
        artis2 = fiyat*zam3d;
        fiyat += artis2;
    }

    printf("\n\n\n");
    printf("\t|Filmde sabah seansi secilirse %%5 fiyat indirimi olur\t\n\t ogle veya aksam seansi secilirse fiyatta degisiklik olmaz|\t");
    printf("\n\n\n");
    printf("Filmi sabah, ogle ve aksam seanslarindan hangisini tercih etmek istersiniz (sabah icin '1' ogle ve aksam icin '2' giriniz): ");
    scanf("%i", &tercih4);
    if (tercih4 == 1)
    {
        sabahind = 0.05;
        ind1 = fiyat*sabahind;
        fiyat -= ind1;
    }

    printf("\n\n\n");
    printf("\t|Ogrenci iseniz toplam fiyatta %%20 indirim olur\t\n\t ogrenci degilseniz toplam fiyatta degisiklik olmaz|\t\n\n\n");
    printf("Ogrenci olup olmadiginizi giriniz: (ogrenci iseniz '1' ogrenci degilseniz '0' giriniz): ");
    scanf("%i", &ogr);
    if (ogr == 1)
    {
        ogrind = 0.2;
        ind2 = fiyat*ogrind;
        fiyat -= ind2;
    }

    printf("\n\n\n");
    printf("\t|Yasiniz 18'in altindaysa toplam fiyatta %%50 indirim olur\t\n\t eger degilseniz toplam fiyatta degisiklik olmaz|\t");
    printf("\n\n\n");
    printf("Yasinizi giriniz: ");
    scanf("%i", &yas);
    if (yas < 18)
    {
        yasind = 0.5;
        ind3 = fiyat*yasind;
        fiyat -= ind3;
    }

    printf("\n\n\n");
    printf("\t|Film pazartesi gunu secilirse toplam fiyattan %%30 indrim olur\t\n\t sali, carsamba, persembe ve cuma gunu secilirse toplam fiyatta degisiklik olmaz|\t\n\n\n");
    printf("Filmi hangi gun secmek istersiniz: (Pazartesi '1' diger gunler icin '0' giriniz): ");
    scanf("%i", &guntercih);
    if (guntercih == 1)
    {
        gunind = 0.3;
        ind4 = fiyat*gunind;
        fiyat -= ind4;
    }

    printf("\n");
    printf("\t%s\n\n", tercih);
    printf("Baslangic ucreti: %0.2f TL\n", fiyat0);
    if(fiyat0 > fiyat)
    {
        printf("Ucret farki: %0.2f TL\n", topind=fiyat0-fiyat);
    }
    else if (fiyat0 < fiyat)
    {
        printf("Ucret farki: %0.2f TL\n", topind=fiyat-fiyat0);
    }
    printf("Odeyeceginiz toplam ucret: %0.2f TL\n", fiyat);

    return 0;
}