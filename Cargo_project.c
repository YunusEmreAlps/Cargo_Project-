/// Final Project
/// Yunus Emre Alpu -- 17010011005

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

# define Row  100
# define Column  10

/// sizeof ( C_Data ) / sizeof ( C_Data[0] ) ;     Learn  Components Number
/// sizeof (C_Data[0]) / sizeof (C_Data[0][0]) ;

float C_Data[Row][Column] = { {15,150.7,300,20,320,450.1,1,4,42,1} ,{26,90.5,90,9,99,850.4,2,3,34,42} ,{1,100,100,27,127,600.7,2,5,1,2},{36,150,150,32,182,500.6,1,3,34,1}} ;

float Cid[Row] = {15,26,1,36} , Ckg[Row] , Ckm[Row] ;
int NetFee[Row] , ExtFee[Row] , TotFee[Row] , TiMax[Row] , TiMin[Row] , Ccod[Row] , Citc[Row] ;
int B[Row] , C[Row] ;

int Count = 4 ;
float Weight = 0.0 , Client = 0.0 , ProDel = 0.0 , ProMod = 0.0 , BoxTy = 0.0 , Pack = 0.0 ,Loca = 0.0 ;


int Pass ( int WorkNum , float LangNum ) ; ///  This Function need this show off every variable  Password
int DelUser ( float LangNum ) ; ///  Delete User Function
int NetPrice ( float LangNum ) ; ///  Net Cargo Fee Function
int ExtPrice ( float LangNum , float Client ) ; ///  Extra Cargo Fee Function
int MinDelTime ( float LangNum ) ; /// Minimum Delivery Time
int MaxDelTime ( float LangNum ) ; ///  Maximum Delivery Time


int main()
{
    float LangNum = 0.0 ; ///  Language Number

    printf(" \n -------------------------- \n ") ; /// Choose Turkish or English

    printf(" \n 1.) Turkce devam etmek icin Lutfen 1'e basin : \n ") ;
    printf(" \n 2.) Please to continue in English press 2 : \n ") ;

    printf(" \n -------------------------- \n ") ;

    printf(" \n - Lutfen islem numaranizi girin : \n ") ;
    printf(" \n - Please enter process number : ") ;

    while (1)
    {
        scanf("%f",&LangNum) ;

        if ((LangNum == 1) || (LangNum == 2))
        {
            break ;
        }
        printf(" \n -------------------------- \n ") ;

        printf(" \n - Yanlis tuslama , Lutfen islem numaranizi girin : \n ") ;
        printf(" \n - This number is not match , Please enter process number : ") ;

        while(getchar() != '\n') ;
    }

    system("CLS") ;


    int WorkNum = 0 , ProNum = 0 , ProNum2 = 0 , Result = 0 , Sum = 0 , Sum2= 0 , Sum3 = 0 , Sum4 = 0 ,Del = 0 ;
    int i , j ;
    float WorNum = 0.0 , Pro2 = 0.0 , Pro = 0.0 ;

    /*
       WorkNum : Work Number actually mean Working Class ( Step ) Number .
       ProNum : Process Number
       ProNum2 : Process Number 2 for Second Menu ( Working Class )
       Result  : Swap Password function
       Sum = Net Cargo Fee
       Sum2 = Extra Cargo Fee
       Sum3 = Minimum delivery time
       Sum4 = Maximum delivery time
    */

    if ( LangNum == 1 )
    {
        while (1)
        {
            system("CLS") ;

            printf(" \n -------------------------- \n ") ;

            printf(" \n 1.) Sirket calisani olarak islem yapmak icin Lutfen 1'e basin : \n ") ;
            printf(" \n 2.) Bireysel veya Kurumsal islem yapmak icin Lutfen 2'ye basin : \n ") ;

            printf(" \n -------------------------- \n ") ;

            printf(" \n - Lutfen islem numaranizi girin : ") ;

            while (1)
            {
                scanf("%f",&WorNum) ;

                if ((WorNum == 1) || (WorNum == 2))
                {
                    break ;
                }
                printf(" \n -------------------------- \n ") ;

                printf(" \n - Yanlis tuslama , Lutfen islem numaranizi girin : ") ;

                while(getchar() != '\n') ;
            }

            WorkNum = WorNum ;

            if ( WorkNum == 1 )
            {
                Result = Pass( WorkNum , LangNum ) ;

                if ( Result > 0 )
                {
                    WorkNum = 1 ;

                }
                else if ( Result == 0 )
                {
                    WorkNum = 3 ;

                }
            }

            switch (WorkNum)
            {
            case 1 :
                system("CLS") ;

                printf(" \n -------------------------- \n ") ;

                printf(" \n - Menu dili : Turkce \n ") ;

                printf(" \n 1.) Kullanici ekle / cikar islemi icin Lutfen 1'e basin : \n ") ;
                printf(" \n 2.) Siteye giren kullanici verilerini gormek icin Lutfen 2'ye basin : \n ") ;
                printf(" \n 3.) Ana menu'ye gitmek icin Lutfen 3'e basin : \n ") ;
                printf(" \n 4.) Cikis icin Lutfen 4'e basin : \n ") ;

                printf(" \n -------------------------- \n ") ;

                printf(" \n - Lutfen islem numaranizi girin : ") ;


                while (1)
                {
                    scanf("%f",&Pro2) ;

                    if ((Pro2 == 1) || (Pro2 == 2) || (Pro2 == 3) || (Pro2 == 4 ))
                    {
                        break ;
                    }

                    printf(" \n -------------------------- \n ") ;

                    printf(" \n - Yanlis tuslama , Lutfen islem numaranizi girin : ") ;
                    while(getchar() != '\n') ;
                }

                ProNum2 = Pro2 ;

                switch (ProNum2)
                {
                case 1 :
                    system("CLS") ;

                    Del = DelUser( LangNum ) ;

                    break ;

                case 2 :
                    system("CLS") ;

                    printf("Cid   Ckg   NetFee   ExtFee   TotFee   Ckm   MinTime   MaxTime  FiCod  LaCod \n") ;

                    for (i = 0 ; i < Count ; i ++ )
                    {
                        for (j = 0 ; j < Column ; j++ )
                        {
                            printf("%.2f \t",C_Data[i][j]) ;
                        }
                        printf("\n") ;
                    }

                    getch () ;

                    break ;

                case 3 :
                    system("CLS") ;

                    return main() ;

                    break ;

                case 4 :
                    system("CLS");

                    printf(" \n - Alpu Kargo \n ") ;
                    printf(" \n - Bizi tercih ettiginiz icin tesekkur ederiz  \n ") ; /// End Part


                    break ;

                }


                break ;

            case 2 :
                system("CLS") ;

                printf(" \n -------------------------- \n ") ;

                printf(" \n - Menu dili : Turkce \n ") ;

                printf(" \n 1.) Gonderi fiyati hesaplamak icin Lutfen 1'e basin : \n ") ;
                printf(" \n 2.) Gonderi teslimat suresini ogrenmek icin Lutfen 2'ye basin : \n ") ;
                printf(" \n 3.) Ana menu'ye gitmek icin Lutfen 3'e basin : \n ") ;
                printf(" \n 4.) Cikis icin Lutfen 4'e basin : \n ") ;

                printf(" \n -------------------------- \n ") ;

                printf(" \n - Lutfen islem numaranizi girin : ") ;

                while (1)
                {
                    scanf("%f",&Pro) ;

                    if ((Pro == 1) || (Pro == 2) || (Pro == 3) || ( Pro == 4 ))
                    {
                        break ;
                    }

                    printf(" \n -------------------------- \n ") ;

                    printf(" \n - Yanlis tuslama , Lutfen islem numaranizi girin : ") ;

                    while(getchar() != '\n') ;

                }

                ProNum = Pro ;

                switch (ProNum)
                {

                case 1 :
                    system("CLS") ;

                    Sum = NetPrice(LangNum) ;
                    Sum2 = ExtPrice(LangNum , Client) ;
                    Sum3 = MinDelTime(LangNum) ;
                    Sum4 = MaxDelTime(LangNum) ;

                    printf(" \n - Kargo Fiyati : %d TL \n ",Sum) ;
                    printf(" \n - Extra ucretler : %d TL \n ",Sum2) ;
                    printf(" \n - Total ucret : %d TL \n ", Sum + Sum2 ) ;

                    for (i = Count ; i< Row ; i ++ )
                    {

                        TotFee[i] = Sum + Sum2 ;
                        C_Data[i][4] = TotFee[i] ;
                    }

                    Count ++ ;

                    getch () ;
                    break ;

                case 2 :
                    system("CLS") ;

                    Sum = NetPrice(LangNum) ;
                    Sum2 = ExtPrice(LangNum , Client) ;
                    Sum3 = MinDelTime(LangNum) ;
                    Sum4 = MaxDelTime(LangNum) ;

                    for (i = Count ; i< Row ; i ++ )
                    {

                        TotFee[i] = Sum + Sum2 ;
                        C_Data[i][4] = TotFee[i] ;
                    }

                    printf(" \n - Gonderinin minimum ulasma zamani : %d gun \n " ,Sum3) ;
                    printf(" \n - Gonderinin maximum ulasma zamani : %d gun \n " ,Sum4) ;


                    Count++ ;


                    getch();
                    break ;

                case 3 :
                    system("CLS") ;

                    return main() ;

                    break ;

                case 4 :
                    system("CLS") ;

                    printf(" \n - Alpu Kargo \n ") ;
                    printf(" \n - Bizi tercih ettiginiz icin tesekkur ederiz  \n ") ; /// End Part

                    break ;
                }

                break ;

            case 3 : /// need for Password part

                break ;

            }

            if((ProNum == 4) || (ProNum2 == 4))  /// Exit Loop
            {
                break ;
            }
        }
    }

    else if ( LangNum == 2 )
    {
        while (1)
        {
            system("CLS") ;

            printf(" \n -------------------------- \n ") ;

            printf(" \n 1.) For continue to progress as company worker Please press 1 : \n ") ;
            printf(" \n 2.) For continue to progress as customer Please press 2 : \n ") ;

            printf(" \n -------------------------- \n ") ;

            printf(" \n - Please enter process number : ") ;

            while (1)
            {
                scanf("%f",&WorNum) ;

                if ((WorNum == 1) || (WorNum == 2))
                {
                    break ;
                }

                printf(" \n -------------------------- \n ") ;

                printf (" \n - This number is not match , Please enter process number : ") ;
                while(getchar() != '\n') ;

            }

            WorkNum = WorNum ;

            if ( WorkNum == 1 )
            {
                Result = Pass ( WorkNum , LangNum ) ;

                if ( Result > 0 )
                {
                    WorkNum = 1 ;
                }

                else if ( Result == 0 )
                {
                    WorkNum = 3 ;
                }
            }

            switch (WorkNum)
            {
            case 1 :

                system("CLS") ;

                printf(" \n -------------------------- \n ") ;

                printf(" \n - Menu language : English \n ") ;

                printf(" \n 1.) For customer add / delete progress Please press 1 : \n ") ;
                printf(" \n 2.) For view the website user database Please press 2 : \n ") ;
                printf(" \n 3.) For go back to main menu Please press 3 : \n ") ;
                printf(" \n 4.) For exit please press 4 : \n ") ;

                printf(" \n -------------------------- \n ") ;

                printf(" \n - Please enter process number : ") ;

                while (1)
                {
                    scanf("%f",&Pro2) ;

                    if ((Pro2 == 1) || (Pro2 == 2) || (Pro2 == 3) || ( Pro2 == 4 ))
                    {
                        break ;
                    }

                    printf(" \n -------------------------- \n ") ;

                    printf(" \n - This number is not match , Please enter process number : ") ;
                    while(getchar() != '\n') ;
                }

                ProNum2 = Pro2 ;

                switch(ProNum2)
                {

                case 1 :
                    system("CLS") ;

                    Del = DelUser( LangNum ) ;

                    break ;

                case 2 :
                    system ("CLS") ;

                    printf("Cid   Ckg   NetFee   ExtFee   TotFee   Ckm   MinTime   MaxTime  FiCod  LaCod  \n") ;

                    for (i = 0 ; i < Count ; i++ )
                    {
                        for (j = 0 ; j < Column ; j++ )
                        {
                            printf("%.2f \t",C_Data[i][j]) ;
                        }

                        printf("\n") ;
                    }

                    getch() ;
                    break ;

                case 3 :
                    system("CLS") ;

                    return main() ;

                    break ;



                case 4 :
                    system("CLS");

                    printf(" \n - Alpu Turkey Postal Service \n ") ;
                    printf(" \n - Thank you for choose our company \n ") ;


                    getch() ;
                    break ;
                }

                break ;

            case 2 :
                system("CLS") ;

                printf(" \n -------------------------- \n ") ;

                printf(" \n - Menu language : English \n ") ;

                printf(" \n 1.) For calculate cargo fee Please press 1 : \n ") ;
                printf(" \n 2.) For learn about delivery time Please press 2 : \n ") ;
                printf(" \n 3.) For go back to main menu Please press 3 : \n ") ;
                printf(" \n 4.) For exit Please press 4 : \n ") ;

                printf(" \n -------------------------- \n ") ;

                printf(" \n - Please enter process number : ") ;

                while (1)
                {
                    scanf("%f",&Pro) ;

                    if ((Pro == 1) || (Pro == 2) || (Pro == 3) || ( Pro == 4 ))
                    {
                        break ;
                    }

                    printf(" \n -------------------------- \n ") ;

                    printf(" \n - This number is not match , Please enter process number : ") ;
                    while(getchar() != '\n') ;

                }

                ProNum = Pro ;

                switch (ProNum)
                {
                case 1 :
                    system("CLS") ;

                    Sum = NetPrice(LangNum) ;
                    Sum2 = ExtPrice(LangNum , Client) ;
                    Sum3 = MinDelTime(LangNum) ;
                    Sum4 = MaxDelTime(LangNum) ;

                    printf(" \n - Cargo fee : %d TL \n ",Sum) ;
                    printf(" \n - Extra fee : %d TL \n ",Sum2) ;
                    printf(" \n - Total fee : %d TL \n ", Sum + Sum2 ) ;

                    for (i = Count ; i< Row ; i ++ )
                    {

                        TotFee[i] = Sum + Sum2 ;
                        C_Data[i][4] = TotFee[i] ;
                    }

                    Count ++ ;

                    getch () ;
                    break ;

                case 2 :
                    system("CLS") ;

                    Sum = NetPrice(LangNum) ;
                    Sum2 = ExtPrice(LangNum , Client) ;
                    Sum3 = MinDelTime(LangNum) ;
                    Sum4 = MaxDelTime(LangNum) ;

                    for (i = Count ; i< Row ; i ++ )
                    {

                        TotFee[i] = Sum + Sum2 ;
                        C_Data[i][4] = TotFee[i] ;
                    }

                    printf(" \n - Minimum delivery time : %d day \n " ,Sum3) ;
                    printf(" \n - Maximum delivery time : %d day \n " ,Sum4) ;


                    Count++ ;


                    getch();
                    break ;

                case 3 :
                    system("CLS") ;

                    return main() ;

                    break ;

                case 4 :
                    system("CLS") ;

                    printf(" \n - Alpu Turkey Postal Service \n ") ;
                    printf(" \n - Thank you for choose our company \n ") ;


                    getch() ;
                    break ;

                }

                break ;

            case 3 : /// Password part

                break ;

            }

            if ((ProNum == 4 ) || (ProNum2 == 4 )) /// Exit loop
            {
                break ;
            }
        }

    }





    getch() ;
    return 0 ;
}

int Pass( int WorkNum , float LangNum )
{
    int C2 = 3 , C = -1 ;
    int i ;
    float PassWord = 0.0 ;


    for (i = 3 ; i > 0 ; i -- )
    {
        if (LangNum == 1)
        {

            printf(" \n - Lutfen sifrenizi girin : ") ;
            scanf("%f",&PassWord) ;

            if ((PassWord == 1010) || (PassWord == 1011) || (PassWord == 1012) || (PassWord == 1013) ||

                    (PassWord == 1014) || (PassWord == 1015) || (PassWord == 1016) || (PassWord == 1017) || (PassWord == 1018) ||

                    (PassWord == 1019) || (PassWord == 1020))
            {
                printf(" \n - Sifreniz dogru  \n ") ;
                getch() ;
                break ;
            }

            else
            {
                C2 -- ;
            }


            printf("\n -------------------------- \n ") ;

            printf(" \n - Sifreniz Yanlis , Lutfen tekrar deneyiniz \n ") ;
            printf(" \n - Kalan kullanim hakki : %d  \n ", i-1 ) ;

            printf(" \n -------------------------- \n ") ;
        }

        else if ( LangNum == 2 )
        {
            printf(" \n - Please enter password : ") ;
            scanf("%f",&PassWord) ;

            if ((PassWord == 1010) || (PassWord == 1011) || (PassWord == 1012) || (PassWord == 1013) ||

                    (PassWord == 1014) || (PassWord == 1015) || (PassWord == 1016) || (PassWord == 1017) || (PassWord == 1018) ||

                    (PassWord == 1019) || (PassWord == 1020))
            {
                printf(" \n - Password is correct \n ") ;

                getch() ;
                break ;
            }

            else
            {
                C2 -- ;
            }

            printf(" \n -------------------------- \n ") ;

            printf(" \n - Password is incorrect , Please try again \n") ;
            printf(" \n - Amount of use : %d \n", i-1 ) ;

            printf(" \n -------------------------- \n ") ;


        }
    }

    if (C2 == 0)
    {
        if ((PassWord > 1009) && (PassWord < 1021))
        {
            C = 1 ;
        }

        else
        {
            C = 0 ;
        }
    }

    return C ;
}

int NetPrice( float LangNum )
{
    int Conseq = 0 ;
    float ClientNum = 0.0 ;      /// Customer number
    float C2 = 0.0 , Fcod = 0.0 , Lcod = 0.0 ;     /// float variety pay attention

    int Netfee = 0 , fee = 0 , inWeigh = 0 , F = -1 , L = -1 , Y = -1 ; ;
    int i ,k ,j ;

    if ( LangNum == 1 )
    {
        printf(" \n -------------------------- \n ") ;

        printf(" \n - Lutfen kargoyu teslim ettiginiz il kodunu girin : ") ;

        while (1)
        {
            scanf ("%f",&Fcod) ;

            for (i=1 ; i<82 ; i++)
            {
                if (Fcod == i )
                {
                    F = 1 ;
                    break ;
                }
            }

            if (F == 1 )
            {
                break ;
            }

            printf(" \n -------------------------- \n ") ;
            printf(" \n - Yanlis tuslama , Lutfen kargoyu teslim ettiginiz il kodunu girin : ") ;
            while (getchar() != '\n') ;

        }

        for (i=Count ; i< Row ; i++)
        {

            Ccod[i] = Fcod ;

            C_Data[i][8] = Ccod[i] ;

        }

        system("CLS") ;

        printf(" \n -------------------------- \n ") ;

        printf(" \n - Lutfen kargoyu teslim alacaginiz il kodunu girin : ") ;

        while (1)
        {
            scanf ("%f",&Lcod) ;

            for (i=1 ; i<82 ; i++)
            {
                if ( Lcod == i )
                {
                    L = 1 ;
                    break ;
                }
            }

            if ( L == 1 )
            {
                break ;
            }

            printf(" \n -------------------------- \n ") ;
            printf(" \n - Yanlis tuslama , Lutfen kargoyu teslim alacaginiz il kodunu girin : ") ;
            while (getchar() != '\n') ;

        }

        for (i=Count ; i< Row ; i++)
        {

            Citc[i] = Lcod ;

            C_Data[i][9] = Citc[i] ;

        }

        system("CLS") ;


        printf(" \n -------------------------- \n ") ;

        printf(" \n - Lutfen kargo agirligi girin : ") ;

        while (1)
        {
            scanf("%f",&Weight) ;

            if (( Weight > 0 )&& ( Weight < 2001 ))
            {
                break ;
            }

            printf(" \n -------------------------- \n ") ;

            if ( Weight > 2000 )
            {
                printf("\n - Girmis oldugunuz deger hizmet sinirlarini asmaktadir . \n ") ;

            }

            printf(" \n -------------------------- \n ") ;

            printf(" \n - Yanlis tuslama , Lutfen kargo agirligi girin : ") ;
            while(getchar() != '\n') ;

        }

        for (i=Count ; i< Row ; i++)
        {

            Ckg[i] = Weight ;

            C_Data[i][1] = Ckg[i] ;

        }

        inWeigh = Weight ;

        system("CLS") ;

        printf(" \n -------------------------- \n ") ;

        printf(" \n 1.) Bireysel musteri olarak devam etmek icin Lutfen 1'e basin : \n ") ;
        printf(" \n 2.) Kurumsal musteri olarak devam etmek icin Lutfen 2'ye basin : \n ") ;

        printf(" \n -------------------------- \n ") ;

        printf(" \n - Lutfen islem numaranizi girin : ") ;

        while (1)
        {
            scanf("%f",&Client) ;

            if ((Client == 1) || (Client == 2))
            {
                break ;
            }

            printf(" \n -------------------------- \n ") ;

            printf(" \n - Yanlis tuslama , Lutfen islem numaranizi girin : ") ;
            while(getchar() != '\n') ;
        }

        system("CLS") ;

        printf(" \n -------------------------- \n ") ;

        printf(" \n - Lutfen ( 1-100 ) arasinda olan musteri numaranizi girin : ") ;

        while (1)
        {

            while ( 1 )
            {
                scanf("%f",&ClientNum) ;

                for ( i = 1 ; i < 101 ; i++)
                {
                    if ( ClientNum == i )
                    {
                        L = 1 ;
                    }

                }
                if ( L == 1 )
                {
                    break ;
                }
                printf(" \n - Yanlis tuslama , Lutfen musteri numaranizi girin : ") ;
                while(getchar() != '\n') ;
            }

            for ( i=0 ; i<Count ; i++)
            {
                for ( j=0; j<Count ; j++)
                {
                    if (Cid[j] == ClientNum)
                    {
                        printf(" \n -------------------------- \n ") ;

                        printf(" \n - Musteri numarasi sistemde baska bir kullaniciya aittir . \n ") ;
                        printf(" \n - Lutfen tekrar deneyiniz : ") ;

                        scanf("%f",&ClientNum) ;
                    }

                    else
                    {
                        Y = 1 ;
                    }


                }

                if (Cid[i]== ClientNum )
                {
                    printf(" \n -------------------------- \n ") ;

                    printf(" \n - Musteri numarasi sistemde baska bir kullaniciya aittir . \n ") ;
                    printf(" \n - Lutfen tekrar deneyiniz : ") ;

                    scanf("%f",&ClientNum) ;
                }

            }

            if ((Y == 1)&&((ClientNum != 0) && (ClientNum < 101)))
            {
                break ;
            }


            printf(" \n - Yanlis tuslama , Lutfen musteri numaranizi girin : ") ;
            while(getchar() != '\n') ;



        }


        system("CLS") ;

        for (i = Count ; i< Row ; i++)
        {
            if ((Weight == 0) && (Count != 0))
            {
                ClientNum = 0 ;
            }
            B[i] = ClientNum ;
            Cid[i] = ClientNum ;
            C_Data[i][0] = Cid[i] ;

        }

    }

    else if ( LangNum == 2 )
    {
        printf(" \n -------------------------- \n ") ;

        printf(" \n - Please enter the province code where you send the cargo : ") ;

        while (1)
        {
            scanf ("%f",&Fcod) ;

            for (i=1 ; i<82 ; i++)
            {
                if (Fcod == i )
                {
                    F = 1 ;
                    break ;
                }
            }

            if (F == 1 )
            {
                break ;
            }

            printf(" \n -------------------------- \n ") ;
            printf(" \n - This number is not match \n ") ;
            printf(" \n - Please enter the province code where you send the cargo : ") ;
            while (getchar() != '\n') ;

        }

        for (i=Count ; i< Row ; i++)
        {

            Ccod[i] = Fcod ;

            C_Data[i][8] = Ccod[i] ;

        }

        system("CLS") ;

        printf(" \n -------------------------- \n ") ;

        printf(" \n - Please enter the province code for delivery of the cargo : ") ;

        while (1)
        {
            scanf ("%f",&Lcod) ;

            for (i=1 ; i<82 ; i++)
            {
                if ( Lcod == i )
                {
                    L = 1 ;
                    break ;
                }
            }

            if ( L == 1 )
            {
                break ;
            }

            printf(" \n -------------------------- \n ") ;
            printf(" \n - This number is not match \n ") ;
            printf(" \n - Please enter the province code for delivery of the cargo : ") ;
            while (getchar() != '\n') ;

        }

        for (i=Count ; i< Row ; i++)
        {

            Citc[i] = Lcod ;

            C_Data[i][9] = Citc[i] ;

        }

        system("CLS") ;


        printf(" \n -------------------------- \n ") ;

        printf(" \n - Please enter cargo weight : ") ;

        while (1)
        {
            scanf("%f",&Weight) ;

            if (( Weight > 0 ) && ( Weight < 2001 ))
            {
                break ;
            }

            printf(" \n -------------------------- \n ") ;

            if ( Weight > 2000 )
            {
                printf("\n - This cargo weight is above service limits . \n ") ;
            }

            printf(" \n -------------------------- \n ") ;

            printf(" \n - This number is not match , Please enter cargo weight : ") ;
            while(getchar() != '\n') ;
        }

        for (i=Count ; i< Row ; i++)
        {

            Ckg[i] = Weight ;

            C_Data[i][1] = Ckg[i] ;

        }

        inWeigh = Weight ;

        system("CLS") ;

        printf(" \n -------------------------- \n ") ;

        printf(" \n 1.) For continue to progress as individual Please press 1 : \n ") ;
        printf(" \n 2.) For continue to progress as corporate Please press 2 : \n ") ;

        printf(" \n -------------------------- \n ") ;

        printf (" \n - Please enter process number : ") ;

        while (1)
        {
            scanf("%f",&Client) ;

            if ( (Client == 1) || (Client == 2))
            {
                break ;
            }

            printf(" \n -------------------------- \n ") ;

            printf(" \n - This number is not match , Please enter process number : ") ;
            while(getchar() != '\n') ;

        }

        system("CLS") ;

        printf(" \n -------------------------- \n ") ;

        printf(" \n - Please enter your customer number (1-100 ) : ") ;

        while (1)
        {
            while ( 1 )
            {
                scanf("%f",&ClientNum) ;

                for ( i= 1 ; i < 101 ; i++)
                {
                    if (ClientNum == i )
                    {
                        L = 1 ;
                        break ;
                    }

                }
                if ( L == 1 )
                {
                    break ;
                }
                printf(" \n - This number is not match , Please enter your customer number : ") ;
                while(getchar() != '\n') ;
            }

            for ( i=0 ; i<Count ; i++)
            {
                for ( j=0; j<Count ; j++)
                {
                    if (Cid[j] == ClientNum)
                    {
                        printf(" \n -------------------------- \n ") ;

                        rintf(" \n - This number is not match , Please enter your customer number : ") ;

                        scanf("%f",&ClientNum) ;
                    }

                    else
                    {
                        Y = 1 ;
                    }


                }

                if (Cid[i]== ClientNum )
                {
                    printf(" \n -------------------------- \n ") ;

                    rintf(" \n - This number is not match , Please enter your customer number : ") ;

                    scanf("%f",&ClientNum) ;
                }





            }

            if ((Y == 1)&&((ClientNum != 0) && (ClientNum < 101)))
            {
                break ;
            }

            printf(" \n - This number is not match , Please enter your customer number : ") ;
            while(getchar() != '\n') ;


        }

        system("CLS") ;

        for (i = Count ; i< Row ; i++)
        {
            if ((Weight == 0) && (Count != 0))
            {
                ClientNum = 0 ;
            }
            B[i] = ClientNum ;
            Cid[i] = ClientNum ;
            C_Data[i][0] = Cid[i] ;

        }

    }


    if ( Client == 1 )
    {
        Netfee = inWeigh * 2 ;
    }

    if (Client == 2)
    {
        Netfee = inWeigh * 1 ;
    }


    for ( i=Count ; i< Row ; i++)
    {
        if (Weight == 0 )
        {
            Netfee = 0 ;
        }

        NetFee[i] = Netfee ;
        C_Data [i][2] = NetFee[i] ;


    }

    Pack = Netfee *(0.1) ;

    return Netfee ;
}

int ExtPrice( float LangNum , float Client )
{

    int Extra = 0 ;
    int i ;

    if ( LangNum == 1 )
    {
        printf(" \n -------------------------- \n ") ;

        printf(" \n 1.) Kargo gonderim tipi subede teslim ise Lutfen 1'e basin : \n ") ;
        printf(" \n 2.) Kargo gonderim tipi adresten alim ise Lutfen 2'ye basin : \n ") ;

        printf("\n -------------------------- \n ") ;

        printf(" \n - Lutfen islem numaranizi girin : ") ;

        while (1)
        {
            scanf("%f",&ProDel) ;

            if ((ProDel == 1) || (ProDel == 2))
            {
                break ;
            }

            printf(" \n -------------------------- \n ") ;

            printf(" \n - Yanlis tuslama , Lutfen islem numaranizi girin : ") ;
            while(getchar() != '\n') ;

        }

        system("CLS") ;

        printf(" \n -------------------------- \n ") ;

        printf(" \n 1.) Kargo teslim sekli telefon ihbar ise Lutfen 1'e basin : \n ") ;
        printf(" \n 2.) Kargo teslim sekli adrese teslim ise Lutfen 2'ye basin : \n ") ;

        printf(" \n -------------------------- \n ") ;

        printf(" \n - Lutfen islem numaranizi girin : ") ;

        while (1)
        {
            scanf("%f",&ProMod) ;

            if ((ProMod == 1) || (ProMod == 2))
            {
                break ;
            }

            printf(" \n -------------------------- \n ") ;

            printf(" \n - Yanlis tuslama , Lutfen islem numaranizi girin : ") ;
            while(getchar() != '\n') ;

        }
        system("CLS") ;

        printf(" \n -------------------------- \n ") ;

        printf (" \n 1.) Normal kargo paketi icin Lutfen 1'e basin : \n ") ;
        printf (" \n 2.) Ozel kargo paketi icin Lutfen 2'e basin : \n ") ;

        printf(" \n -------------------------- \n ") ;

        printf(" \n - Lutfen islem numaranizi girin : ") ;

        while (1)
        {
            scanf("%f",&BoxTy) ;

            if ((BoxTy == 1) || (BoxTy == 2))
            {
                break ;
            }

            printf(" \n -------------------------- \n ") ;

            printf(" \n - Yanlis tuslama , Lutfen islem numaranizi girin : ") ;
            while(getchar() != '\n') ;

        }
        system("CLS") ;



    }

    else if ( LangNum == 2 )
    {
        printf(" \n -------------------------- \n ") ;

        printf(" \n 1.) Type of delivery , delivered to the branch Please press 1 : \n ") ;
        printf(" \n 2.) Type of delivery , courier Please press 2 : \n ") ;

        printf(" \n -------------------------- \n ") ;

        printf(" \n - Please enter process number : ") ;

        while (1)
        {
            scanf("%f",&ProDel) ;

            if ((ProDel == 1) || (ProDel == 2))
            {
                break ;
            }

            printf(" \n -------------------------- \n ") ;

            printf(" \n - This number is not match , Please enter process number : ") ;
            while(getchar() != '\n') ;

        }

        system("CLS") ;

        printf(" \n -------------------------- \n ") ;

        printf(" \n 1.) Mode of delivery , phone warning Please press 1 : \n ") ;
        printf(" \n 2.) Mode of delivery , delivery to your door Please press 2 : \n ") ;

        printf(" \n -------------------------- \n ") ;

        printf(" \n - Please enter process number : ") ;

        while (1)
        {
            scanf("%f",&ProMod) ;

            if ((ProMod == 1) || (ProMod == 2))
            {
                break ;
            }

            printf(" \n -------------------------- \n ") ;

            printf(" \n - This number is not match , Please enter process number : ") ;
            while(getchar() != '\n') ;

        }

        system("CLS") ;
        printf(" \n -------------------------- \n ") ;

        printf (" \n 1.) For normal cargo package Please press 1 : \n ") ;
        printf (" \n 2.) For special cargo package Please press 2 : \n ") ;

        printf(" \n -------------------------- \n ") ;

        printf(" \n - Please enter process number : ") ;

        while (1)
        {
            scanf("%f",&BoxTy) ;

            if ((BoxTy == 1) || (BoxTy == 2))
            {
                break ;
            }

            printf(" \n -------------------------- \n ") ;

            printf(" \n - This number is not match , Please enter process number : ") ;
            while(getchar() != '\n') ;

        }

        system("CLS") ;
    }




    if ( Client == 1 )
    {
        if ((ProDel == 1 ) && (ProMod == 1))
        {
            Extra = 0 ;
        }

        else if (((ProDel == 1) && (ProMod == 2)) || ((ProDel == 2) && (ProMod == 1)))
        {
            Extra = 10 ;
        }
        else
        {
            Extra = 20 ;
        }
    }

    else
    {
        if ((ProDel == 1 ) && (ProMod == 1))
        {
            Extra = 0 ;
        }

        else if ((ProDel == 1) && (ProMod == 2))
        {
            Extra = 9 ;  /// %10 discount
        }

        else if ((ProDel == 2) && (ProMod == 1))
        {
            Extra = 8 ; /// %20 discount
        }

        else
        {
            Extra = 17 ;
        }
    }

    if (BoxTy == 2 )
    {
        Extra = Extra + Pack ;
    }

    for (i = Count ; i< Row ; i++)
    {
        if ( Weight == 0 )
        {
            Extra = 0 ;
        }

        ExtFee[i] = Extra ;
        C_Data[i][3] = ExtFee[i] ;
    }


    return Extra ;
}

int MinDelTime ( float LangNum  )
{
    int Min = 0 ;
    int i ;

    if ( LangNum == 1 )
    {
        printf(" \n -------------------------- \n ") ;

        printf(" \n - Maximum girebileceginiz km : 2040 km \n ") ;
        printf(" \n - gonderinin teslim edilecegi sube ile gonderinin teslimatin yapilacagi sube \n ") ;
        printf(" \n - arasinda bulunan uzakligi giriniz : ") ;


        while (1)
        {
            scanf("%f",&Loca) ;

            if (( Loca < 2041.0 )&&(Loca > 0.0 ))
            {
                break ;
            }

            printf(" \n -------------------------- \n ") ;

            printf(" \n - Yanlis tuslama , Lutfen arasinda bulunan uzakligi giriniz : ") ;
            while (getchar() != '\n') ;

        }

    }

    else if ( LangNum == 2 )
    {
        printf(" \n -------------------------- \n ") ;

        printf(" \n - Maximum km :2040 km \n ") ;
        printf(" \n - Enter the distance between two delivery point : ") ;

        while (1)
        {
            scanf("%f",&Loca) ;

            if (( Loca < 2041.0 )&&( Loca > 0.0 ) )
            {
                break ;
            }

            printf(" \n -------------------------- \n ") ;

            printf(" \n - This number is not match , Please enter new distance : ") ;
            while (getchar() != '\n') ;

        }

    }

    system("CLS") ;

    printf(" \n -------------------------- \n ") ;

    for (i = Count ; i< Row ; i ++ )
    {
        if (Weight == 0)
        {
            Loca = 0 ;

        }

        Ckm[i] = Loca ;
        C_Data[i][5] = Ckm[i] ;
    }

    if( Loca <= 600 )
    {
        Min = 1 ;
    }
    else if ( Loca <= 1000 )
    {
        Min = 2 ;
    }
    else if ( Loca > 1000 )
    {
        Min = 3 ;
    }



    for (i = Count ; i< Row ; i ++ )
    {
        if (Weight == 0)
        {
            Min = 0 ;

        }
        TiMin[i] = Min ;

        C_Data[i][6] = TiMin[i] ;
    }



    return Min ;
}

int MaxDelTime( float LangNum )
{
    int  Max = 0 ;
    int i ;

    if ((ProDel == 1 ) && (ProMod == 1)) /// Subeden - Subeye
    {
        if( Loca <= 600.0 )
        {
            Max = 2 ;
        }
        else if ( Loca <= 1000.0 )
        {
            Max = 3 ;
        }
        else if ( Loca > 1000.0 )
        {
            Max = 4 ;
        }
    }

    else if (((ProDel == 1) && (ProMod == 2)) || ((ProDel == 2) && (ProMod == 1))) /// Kapidan Subeye yada Subeden Kapýya
    {
        if( Loca <= 600.0)
        {
            Max = 3 ;
        }
        else if ( Loca <= 1000.0 )
        {
            Max = 4 ;
        }
        else if ( Loca > 1000.0 )
        {
            Max = 5 ;
        }
    }
    else if ((ProDel == 2) && (ProMod == 2))/// Kapidan Kapiya
    {
        if( Loca <= 600.0 )
        {
            Max = 4 ;
        }
        else if ( Loca <= 1000.0 )
        {
            Max = 5 ;
        }
        else if ( Loca > 1000.0)
        {
            Max = 6 ;
        }
    }

    for (i = Count ; i< Row ; i ++ )
    {
        if ((Weight == 0) && (Count != 0))
        {
            Max = 0 ;
        }
        TiMax[i] = Max ;


        C_Data[i][7] = TiMax[i] ;
    }


    return Max ;
}

int DelUser ( float LangNum )
{
    int Add = 0 , Add2 = 0 , Add3 = 0 , Add4 = 0 ;
    int Stor = -1 ;
    int i , j , k , Temp , R2 = 0 , D = -1 , E = -1  ;
    float Cho = 0.0 , Delid = -1.0 ;

    if ( LangNum == 1 )
    {
        printf(" \n -------------------------- \n ") ;

        printf(" \n 1.) Kullanici eklemek icin Lutfen 1'e basin : \n ") ;
        printf(" \n 2.) Kullanici silmek icin Lutfen 2'ye basin : \n ") ;
        printf(" \n 3.) Ana menu'ye gitmek icin Lutfen 3'e basin : \n ") ;

        printf(" \n -------------------------- \n ") ;

        printf(" \n - Lutfen islem numaranizi girin : ") ;

        while (1)
        {
            scanf("%f",&Cho) ;

            if ((Cho == 1) || (Cho == 2) || (Cho == 3))
            {
                break ;
            }

            printf(" \n -------------------------- \n ") ;

            printf(" \n - Yanlis tuslama , Lutfen islem numaranizi girin : ") ;
            while(getchar() != '\n') ;

        }
        system("CLS");

    }

    else if ( LangNum == 2 )
    {
        printf(" \n -------------------------- \n ") ;

        printf(" \n 1.) For add user Please press 1 : \n ") ;
        printf(" \n 2.) For delete user Please press 2 : \n ") ;
        printf(" \n 3.) For go back to main menu Please press 3 : \n ") ;

        printf(" \n -------------------------- \n ") ;

        printf(" \n - Please enter process number : ") ;

        while (1)
        {
            scanf("%f",&Cho) ;

            if ((Cho == 1) || (Cho == 2) || ( Cho == 3 ))
            {
                break ;
            }

            printf(" \n -------------------------- \n ") ;

            printf(" \n - This number is not match , Please enter process number : ") ;
            while(getchar() != '\n') ;

        }
        system("CLS");
    }



    if (Cho == 1)
    {
        Add =  NetPrice(LangNum) ;
        Add2 = ExtPrice(LangNum , Client) ;
        Add3 = MinDelTime(LangNum) ;
        Add4 = MaxDelTime(LangNum) ;

        for (i = Count ; i< Row ; i ++ )
        {

            TotFee[i] = Add + Add2 ;
            C_Data[i][4] = TotFee[i] ;
        }

        Count ++ ;



    }

    else if ( Cho == 2 )
    {
        printf(" \n -------------------------- \n ") ;

        printf("Cid   Ckg   NetFee   ExtFee   TotFee   Ckm   MinTime   MaxTime  FiCod  LaCod \n") ;

        for ( i=0 ; i < Count ; i++)
        {
            for ( j=0 ; j< Column ; j++)
            {
                printf("%.2f \t",C_Data[i][j]) ;
            }
            printf("\n") ;
        }

        printf(" \n -------------------------- \n ") ;

        if ( LangNum == 1)
        {
            printf(" \n - Lutfen silmek istediginiz musteri numarasini girin : ") ;
        }

        else
        {
            printf(" \n - Please enter customer number you want to delete : ") ;
        }


        while (1)
        {
            scanf("%f",&Delid) ;

            for( i = 0 ; i < Count ; i++)
            {
                if ((Delid == C_Data[i][0]) &&((Delid>0)&&(Delid<101)))
                {
                    E = 1 ;

                    Stor = i ;
                    break ;
                }
            }

            if (E == 1 )
            {
                break ;
            }

            if (Count == 0 )
            {
                break ;
            }

            if ( LangNum == 1 )
            {
                printf(" \n - girdiginiz numara sistemde bulunmamaktadir \n ") ;
                printf(" \n - Lutfen silinilmesi istenen musteri numarasini girin : ") ;
            }

            else if ( LangNum == 2  )
            {
                printf(" \n - This customer number have not in the system \n ")  ;
                printf(" \n - Please enter customer number you want to delete : ") ;
            }

            while(getchar() != '\n') ;
        }


        for ( i = 0 ; i< Column ; i++ )
        {
            B[Stor] = -1 ;
            Cid [Stor] = -1 ;
            C_Data[Stor][i] = -1 ;
        }

        for ( i = 0 ; i<Count ; i++)
        {
            for(j=0 ; j<Count ; j++)
            {
                if (B[i]>B[j])
                {
                    Temp = B[i] ; /// Sequence version
                    B[i] = B[j] ;
                    B[j] = Temp ;
                }
            }
        }

        /// C[i] = This is not sequence version

        while (1)
        {
            for( i = 0 ; i < Count ; i++ )
            {
                for( j = 0 ; j < Column ; j++ )
                {
                    for ( k= 0 ; k < Column ; k++ )
                    {
                        if ((C_Data[i][k]*1 ) == -1 )
                        {
                            Temp = C_Data [i][k] ;
                            C_Data [i][k] = C_Data [Count-1][k] ;
                            C_Data[Count-1][k] = Temp ;

                        }

                    }
                    if ((C_Data[Count-1][j]*1 )== -1)
                    {
                        D = 1 ;
                        break ;
                    }

                }
            }

            if (D==1)
            {
                break ;
            }

        }

        Count -- ;

        printf(" \n -------------------------- \n ") ;

        printf("Cid   Ckg   NetFee   ExtFee   TotFee   Ckm   MinTime   MaxTime  FiCod  LaCod \n") ;

        for (i = 0 ; i < Count ; i ++ )
        {
            for (j = 0 ; j < Column ; j++ )
            {
                printf("%.2f \t",C_Data[i][j]) ;
            }
            printf("\n") ;
        }



        getch () ;


    }

    else if ( Cho == 3 )
    {
        return main () ;
    }

}

