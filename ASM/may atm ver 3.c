#include<stdio.h>
int login(int user, int pass);
void menu();
int withdraw(int a, int b);
int totien(int x);
int Transfer(int id,int num, int tk);
int taikhoan=10000000;
int main()
{	int username, password;
	int ch, ok;
	char yes = 'y';
	int t500, t200, t100, t50;
    printf("          WELLCOME TO FPT BANK\n");
    printf("Xin cho the vao khe.\n\n");
	printf("Moi ban nhap Username:");
    scanf("%d", &username);
    printf("Moi ban nhap Password:");
    scanf("%d", &password);
    printf("Dang kiem tra...\n");
    ok=login(username, password);
  	if(ok==1)
  	{
  		printf("The cua ban da bi khoa!\nBan vui long lien he ngan hang de duoc giup do!\n");
  		return 0;
	}
	if(ok==2)
	{
  		return 0;
	}
	if(ok==3)
	{
		printf("Ban da dang nhap thanh cong!\n");
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
					int rut, conlai=0;
					printf("Moi nhap so tien ban muon rut:");
					scanf("%d", &rut);
					conlai = withdraw(rut, taikhoan);
					if(conlai!=0)
					{
						taikhoan=conlai;
						printf("Ban da rut: %d\n", rut);
						totien(rut);
						printf("So tien trong tai khoan con la:%d VND\n", taikhoan);
					}
					printf("Nhan 'y' de tiep tuc va 'n' de ket thuc:");
					fflush(stdin);
					scanf("%c", &yes);
					break;
				}
				case 2:	
				{
					int id, num,ck;
					printf("Moi ban nhap so tai khoan chuyen den:");
					scanf("%d", &id);
					printf("Moi ban nhap so tien can chuyen:");
					scanf("%d", &num);
					ck=Transfer( id, num, taikhoan);
					if(ck!=0)
					{
						printf("Ban da chuyen %d VND vao so tai khoan:%d\n", num, id);
						printf("Tai khoan cua ban con:%d VND\n", taikhoan);	
					}
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
				default :
					printf("Dich vu ban chon khong co!\n");
					printf("Nhan 'y' de tiep tuc va 'n' de ket thuc:");
					fflush(stdin);
					scanf("%c", &yes);
					break;
			}
		}
   		while(yes=='y');
   		{
			if (yes=='n')
			printf("Ban muon ket thuc!\n");
    		printf("XIN CAM ON DA SU DUNG DICH VU CUA CHONG TOI!\n");
    		printf("                THANK YOU!");
    		return 0;
		}   
	}
}


//login
int login(int user, int pass)
{	
	int login;int count;
	login=0;
	count=0;
	if(user==1234)
	{
		if(pass==1111)
		{
			login=3;
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
	printf("\n	DICH VU:\n");
	printf("===================================\n\n");
	printf("	1. Rut Tien.\n");
	printf("	2. Chuyen khoan.\n");
	printf("	3. Kiem tra so ru.\n");
	printf("	4. Ket thuc.\n\n");
	printf("===================================\n");
}
//rut tien
int withdraw(int a, int b)
{   
	int tk;
    if(a%50000 == 0) 
    {
	    if(a<=3000000)
		{
			if(a <= b)
	   		{
	   			tk=b-a;
	   			return tk;
			}	
        	else
        		printf("So tien ban rut lon khong the hon so tien ban co!\n");
        		tk=0;
        		return tk;
        }  
        else
        	printf("So tien ban rut khong the lon hon 3 trieu!\n");
        	tk=0;
        	return tk;
    }
    else
        printf("So tien ban muon rut khong la boi cua 50.000 VND!\n");
        tk=0;
        return tk;
}
//chuyen khoan
int Transfer(int id,int num, int tk)
{
	if (id==4567)
		if(num<tk)
		{
			tk=tk-num;
			return tk;
		}
	else
	printf("So tai khoan khong dung!\n");
	printf("Moi nhap lai so tai khoan chuyen den!\n");
	tk=0;
}	
//to tien
int totien(int x)
{
    int st500 = 0;
    int st200 = 0;
    int st100 = 0;
    int st50 = 0;
 	int i=0;
    for (i = 1; i>0;)
    {
        if (x == 0)
        {
            break;
        }
 
        if (x >= 500000)
        {
            x -= 500000;
            st500++;
        }
        else if ((x < 500000) && (x >= 200000))
        {
            x -= 200000;
            st200++;
        }
        else if ((x < 200000) && (x >= 100000))
        {
            x -= 100000;
            st100++;
        }
        else if ((x%50000==0)&&(x>0))
        {
            x -= 50000;
            st50++;
        }
    }
 	printf("Bao gom:\n");
 	if(st500!=0)
    	printf("So to 500,000 VND:%d to.\n",st500);
    if(st200!=0)
    	printf("So to 200,000 VND:%d to.\n",st200);
    if(st100!=0)
    	printf("So to 100,000 VND:%d to.\n",st100);
    if(st50!=0)
    	printf("So to 50,000 VND:%d to.\n",st500);
    return x;
}

