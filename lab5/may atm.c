#include <stdio.h>
#include <conio.h>
int main ()
{
	printf ("Welcom to FPT Bank");
	int mathe ,mapin;
	int tk=100000;
	printf ("\nNhap ma the: ");
	scanf ("%d", &mathe);
	printf ("Nhap ma pin: ");
	scanf ("%d", &mapin);
    if (mathe == 1234 && mapin == 0000) 
    {
    	int a;
		printf ("Nhap lua chon cua ban:\n1.Kiem tra so du\n2.Rut tien\n3.Chuyen khoan\n4.Ket thuc chuong trinh\n");
    	scanf ("%d", &a);
    	if (a==1)
    	{
    		printf ("So du cua ban la: %dVND", tk);
		}
		else if (a==2)
		{
		    int sotien;
			printf ("Nhap so tien ban muon rut: ");
			scanf ("%d", &sotien);
			if (sotien%50==0 && sotien<950000)
			{
			    char ans = 'y';
			 	printf ("Giao dich nay mat phi, ban co muon tiep tuc khong (y or n): ");
				fflush(stdin);
				scanf ("%c", &ans);
				int tienphi = 5;
				if (ans == 'y')
				{
					printf ("So du con lai la: %d", tk - sotien - tienphi );
				}
				else 
				    printf ("Cam on ban da su dung dich vu!");
				
			}
			else 
			     printf ("Ban can nhap so tien la boi cua 50 va nho hon 100 ngan.");
		}
		else if (a==3)
		{
			int tkn;
		    printf ("Nhap so tai khoan nguoi nhan: ");
			scanf ("%d", &tkn);
			if (tkn == 4321)
			{
				int tienchuyen;
				printf ("Nhap so tien ban muon chuyen: ");
				scanf ("%d", &tienchuyen);
				if (tienchuyen <=950000)
				{
				   printf ("Ban da chuyen %dVND\nSo du con lai cua ban la: %d", tienchuyen,tk - tienchuyen);
				}
				else 
				   printf ("Ban can chuyen so tien nho hon 100 ngan!");
			}
			else 
			       printf ("So tai khoan khong hop le!");
		
		}
		else if (a==4)
		{
			printf ("Cam on ban da su dung dich vu!");
		}
	}
	else 
	    printf ("Ma the hoac ma pin khong dung!");
    return 0;
} 
