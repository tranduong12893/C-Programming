#include<stdio.h>
int login(int user, int pass);
void menu();
int withdraw(int a, int b);
int Transfer(int id,int num, int taikhoan);
int taikhoan=10000000;
int main()
{	int username, password;
	int ch;
	char yes = 'y';
    printf("WELLCOME TO FPT BANK\n");
    printf("Xin cho the vao khe.\n");
	printf("Moi ban nhap Username:");
    scanf("%d", &username);
    printf("Moi ban nhap Password:");
    scanf("%d", &password);
    printf("Dang kiem tra...\n");
    login(username, password);
  	if(login(username, password)==1)
  	{
  		printf("The cua ban da bi khoa!\nBan vui long lien he ngan hang de duoc giup do!\n");
  		return 0;
	}
	if(login(username, password)==2)
	{
  		return 0;
	}
	if(login(username, password)==3)
	{
		printf("Ban da dang nhap thanh cong!");
    	do
		{ 
			menu();
    		printf("Ban chon:");
    		fflush(stdin);
    		scanf("%d",&ch);
    		switch(ch)
			{
				case 1:
				{
					int rut;
					printf("Moi nhap so tien ban muon rut:");
					scanf("%d", &rut);
					taikhoan = withdraw(rut, taikhoan);
					printf("Ban da rut: %d\n", rut);
					printf("So tien trong tai khoan con la:%d VND\n", taikhoan);
					printf("Nhan 'y' de tiep tuc va 'n' de ket thuc:");
					fflush(stdin);
					scanf("%c", &yes);
					break;
				}
				case 2:	
				{
					int id, num;
					printf("Moi ban nhap so tai khoan chuyen den:");
					scanf("%d", &id);
					printf("Moi ban nhap so tien can chuyen:");
					scanf("%d", &num);
					taikhoan=Transfer( id, num, taikhoan);
					printf("Ban da chuyen %d VND vao so tai khoan:%d\n", num, id);
					printf("Tai khoan cua ban con:%d VND\n", taikhoan);
					printf("Nhan 'y' de tiep tuc va 'n' de ket thuc:");
					fflush(stdin);
					scanf("%c", &yes);
					break;
				}
				case 3:
				{
					printf("So du trong tai khoan cua ban la:%d VND\n", taikhoan);
					printf("Nhan 'y' de tiep tuc va 'n' de ket thuc:");
					fflush(stdin);
					scanf("%c", &yes);
					break;	
				}
				case 4:
				{
					printf("Ban chon thoat!\n");
					printf("XIN CAM ON DA SU DUNG DICH VU CUA CHONG TOI!\n");
    				printf("THANK YOU!");
					return 0;	
				}
			}
		}
   		while(yes=='y');
   		{
			if (yes=='n')
			printf("Ban muon ket thuc!\n");
    		printf("XIN CAM ON DA SU DUNG DICH VU CUA CHONG TOI!\n");
    		printf("THANK YOU!");
    		return 0;
		}   
	}
}


//login
int login(int user, int pass)
{	int login;int count;
	login=0;
	count=0;
	if(user==1234)
	{
		if(pass==1111)
		{
			login=1;
			return login;
		}	
		else
		{	do
			{
				printf("Mat khau ban nhap khong dung!\n");
				printf("Moi ban nhap lai mat khau:");
				fflush(stdin);
				scanf("%d", &pass);
				if(pass!=1111)
				{
					count++;
				}
				else
				{	
					login=3;
					return login;
				}
			}
			while(count>1||login==3);
			{
				if(pass!=1111)
				login=1;
				return login;
			}
		}	
	}
	else
	{
		printf("So tai khoan ban nhap khong dung!");
		login=2;
		return login;
	}
}
//menu
void menu()
{
	printf("\n     DICH VU:\n");
	printf("===================================\n");
	printf("1. Rut Tien\n");
	printf("2. Chuyen khoan\n");
	printf("3. Kiem tra so ru\n");
	printf("4. Ket thuc\n");
	printf("===================================\n");
}
//rut tien
int withdraw(int a, int b)
{   int tk;
    if(a%50 == 0 && a<=3000000 && a <= b)
       {
	   		tk=b-a;
        	return tk;
		} 
    else
        printf("So tien ban muon rut khong la boi cua 50, lon hon 3 trieu hoac lon hon so tien ban co");
}
//chuyen khoan
int Transfer(int id,int num, int taikhoan)
{
	if (id==4567)
		if(num<taikhoan)
		{
			taikhoan=taikhoan-num;
			return taikhoan;
		}
	else
	printf("So tai khoan khong dung!\n");
	printf("Moi nhap lai so tai khoan chuyen den!");
}	
