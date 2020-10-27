#include <stdio.h>
void main()
{   
    char chu;
    printf("\n Input A or a: Ada.");
    printf("\n Input B or b: Basic.");
    printf("\n Input C or c: COBOL.");
    printf("\n Input D or d: dBase III.");
    printf("\n Input F or f: Fortran.");
    printf("\n Input P or p: Pascal.");
    printf("\n Input V or v: Visual C++.");
    printf("\n\nNhap 1 chu bat ky:");

    scanf("%c", &chu);
    switch(chu)
    {
   		case 'A': 
		   printf("\nNgon ngu lap trinh ban da chon la: Ada.");
   			break;
   			
   		case 'a': 
		   printf("\nNgon ngu lap trinh ban da chon la: Ada.");
   			break;
   			
   		case 'B': 
		   printf("\nNgon ngu lap trinh ban da chon la: Basic.");
   			break;
   			
   		case 'b': 
		   printf("\nNgon ngu lap trinh ban da chon la: Basic.");
   			break;

        case 'C': 
		   printf("\nNgon ngu lap trinh ban da chon la: COBOL.");
   			break;

        case 'c': 
		   printf("\nNgon ngu lap trinh ban da chon la: COBOL.");
   			break;
   			
        case 'D': 
		   printf("\nNgon ngu lap trinh ban da chon la: dBase III.");
   			break;
   		
        case 'd': 
		   printf("\nNgon ngu lap trinh ban da chon la: dBase III.");
   			break;

        case 'F': 
		   printf("\nNgon ngu lap trinh ban da chon la: Fortran.");
   			break;

        case 'f': 
		   printf("\nNgon ngu lap trinh ban da chon la: Fortran.");
   			break;

        case 'P': 
		   printf("\nNgon ngu lap trinh ban da chon la: Pascal.");
   			break;

        case 'p': 
		   printf("\nNgon ngu lap trinh ban da chon la: Pascal.");
   			break;

        case 'V': 
		   printf("\nNgon ngu lap trinh ban da chon la: Visual C++.");
   			break;

        case 'v': 
		   printf("\nNgon ngu lap trinh ban da chon la: Visual C++.");
   			break;

        default : 
		   printf("\nTruong trinh ban chon khong ton tai!");
   }
}