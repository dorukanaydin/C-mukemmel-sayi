#include<stdio.h>
//Klavyeden girilen sayının  mükemmel sayı olup olmadığını bulan program

int mukemmelsayi(int sayi)
{
    int i,kalan;
    int toplam = 0;

    for(i=1;i<sayi;i++)
    {
       kalan = sayi % i;

       if(kalan == 0)
       {
           toplam = toplam + i;
       }
         
    }

    if( toplam == sayi)
    {
       
        return 1;
    }
    
    else
    {
      
        return 0;
    }
    
}

int main()
{
    int sayi;
    printf("Mukemmel sayi olup olunmadiginin bilinmesini isteyen sayiyi giriniz: ");
    scanf("%d",&sayi);
    
    if (mukemmelsayi(sayi) == 1 )
    {
        printf("Sayi mukemmel sayidir.");
    }

    else
    {
        printf("Sayi mukemmel sayi degildir.");
    }
    

}

