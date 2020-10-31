#include <stdio.h>
#include <conio.h>
main(){
	int tk,stk, ck, tien;
	int mathe , mapin, ch;
	int count=0, ok=0;
	char key;
	tk=10000000;
	printf ("Welcom to FPT Bank\n");
	printf("Moi ban cho the vao khe!");
	printf ("\nNhap ma the: ");
	scanf ("%d", &mathe);
	printf ("Nhap ma pin: ");
	scanf ("%d", &mapin);
	if (mapin != 0000) 
    {
	    do
        {
            printf("Ban hay nhap lai ma pin:");
            scanf("%d", &mapin);
            if(mapin==0000){
            ok==0;printf("Ma pin dung!");
            break;
        	}
        	else
			count++;
        }
        
		while (count<=1||ok==0);
		{if(mapin!=0000)
		printf("The cua ban da bi khoa!\nBan vui long lien he ngan hang de duoc giup do!\n");
		}
                 
	}
	else{printf("Ma pin dung!");
	}
	
	while(key!=27){
	printf("\nBan muon:\n1. Rut Tien\n2. Kiem tra so du\n3. Chuyen khoan\n4. Ket thuc\n");
	printf("Ban chon:");
        scanf("%d", &ch);
	if(ch==1 || ch==2 || ch==3||ch==4)
		switch(ch){
			case 1:{
				printf("Moi ban nhap so tien can rut: ");scanf("%d",&tien);
				if(tien>tk){
					printf("So tien ban rut lon hon so tien hien tai trong tai khoan.");
					printf("\nMoi ban nhan phim bat ki de tiep tuc, hoac Esc de thoat.");
					key=getch();
				}
					else
					if(tien>5000000){
						printf("So tien duoc rut toi da la:5000000");
						printf("\nMoi ban nhan phim bat ki de tiep tuc, hoac Esc de thoat.");
							key=getch();
						}
						else
							if(tien%50000!=0){
								printf("So tien can rut phai la boi so cua 50000.");
								printf("\nMoi ban nhan phim bat ki de tiep tuc, hoac Esc de thoat.");
								key=getch();
							}
							else{
								tk-=tien;
								printf("So tien con lai trong tai khoan quy khach la: %d",tk);
								printf("\nMoi ban nhan phim bat ki de tiep tuc, hoac Esc de thoat.");
								key=getch();
							}
				break;
			}
			case 2:	{
			printf("So tien trong tai khoan quy khach la: %d",tk);
						printf("\nMoi ban nhan phim bat ki de tiep tuc, hoac Esc de thoat.");
						key=getch();
				break;
			}
			case 3:{
				printf("Moi ban nhap so tai khoan muon chuyen tien: "); scanf("%d",&stk);
				printf("Moi ban nhap so tien muon chuyen:"); scanf("%d",&ck);
				printf(": Ban da chuyen%dVND vao so tai khaon%d",ck, stk);
				printf("So tien con lai cua ban la:%dVND",tk-ck);
				printf("\nMoi ban nhan phim bat ki de tiep tuc, hoac Esc de thoat.");
				key=getch();
				break;
			}
			case 4:
				printf("Ban khong muon thuc hien giao dich!\nMoi ban nhan lai the!\nXIN CAM ON BAN DA SU DUNG DICH VU CUA CHUNG TOI!");
		}
		else printf("\nBan da chon sai ki tu, moi ban nhap lai, hoac nhan Esc de thoat ra.");
		key=getch();
	}
}
