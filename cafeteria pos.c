#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define PRODUCT_SIZE 30

//Beykoz University Cafeteria POS (Point of Sale) Software

void Price(int i);

 char *products[PRODUCT_SIZE] = {"1.Kasarli Sandvic\t7 TL\t","2.Albeni\t\t2.25 TL\t","3.BenimO\t\t2.50TL\t","4.Biskrem\t\t2 TL\t","5.Brownie\t\t2.5 TL\t","6.Canga\t\t\t2.5 TL\t","7.Tutku\t\t\t2.5 TL\t","8.Cubuk kraker\t\t2 TL\t","9.Cizi\t\t\t2.5 TL\t","10.Ayvalik Tostu\t7 TL\t","11.Pizza Tost\t\t7 TL\t","12.Peynirli Gozleme\t9 TL\t","13.Patatesli Gozleme\t9 TL\t","14.Hamburger\t\t12 TL\t","15.Cheese Burger\t13 TL\t","16.Patso\t\t9 TL\t","17.Pogaca\t\t2 TL\t","18.Simit\t\t2 TL\t","19.Kasarli Sandvic\t7 TL\t","20.Domatesli Sandvic\t7 TL\t","21.Cay\t\t\t1.5 TL\t","22.Buyuk Cay\t\t3 TL\t","23.Bitki Cayi\t\t2.5 TL\t","24.Americano\t\t4.5 TL\t","25.Cappucino\t\t5 TL\t","26.Espresso\t\t4 TL\t","27.Latte\t\t5 TL\t","28.Kola\t\t\t3.5 TL\t","29.Ayran\t\t2.5 TL\t","30.Su\t\t\t1.5 TL\t"};


int main() {
    int quantity,password,i,Price1;
    float price,Sum;
    while(password!=1901)
    
   {
	 system("color C");
    printf("\n\n\n\n\n\n\t\t\t--------------------------------\n");
    printf("\n\n\t\t\tWelcome to the Beykoz University\n");
    printf("\n\n\t\t\t--------------------------------\n"); 
    printf("\n\t\t\tPlease enter personal password\n\n\t\t\t\t\t");//prompts personal password
    scanf("%d",&password);
   
    if(password==1901){
      system("cls");
    system("color B");
    printf("PRODUCT\t\t\tPRICE\t\tPRODUCT NUMBER\n");
        
    }
    else{
        printf("Please try again\n");
        system("PAUSE");
        system("cls");
    }
        
    } //end while
    
  
    for (i = 0; i<PRODUCT_SIZE; i++) {
        printf("%s\t\t%d\n",products[i],i+1);
        
    }
    Price(i);

    
    return 0;
}

void Price(int i)
 {
    int quantity,givenmoney;
    float price=0,refund;
    int syrup;
	char x;  

    while(i!=0)
    {
        printf("Enter a product number(0 to exit,-1 to total price):");
    scanf("%d",&i);
     if(i==0)
    {
        exit(0);
    }
    else if(i==-1){
        system("cls");
    printf("Total Price %.2f TL\n",price);
        system("color A");

    printf("Enter the given money amount:\n");
    scanf("%d",&givenmoney);
    refund=givenmoney-price;
    printf("Refund:%.2f TL",refund);
    

        exit(0);
    } //end if

    printf("Enter the quantity of your product:");
    scanf("%d",&quantity);


    switch(i)
    {
        case 1:price+=quantity*7;
    	printf("%s\t%.2f\n",products[0],price);
	    break;
    	case 2:price+=quantity*2.25;
    	printf("%s\t%.2f\n",products[1],price);
    	break;
    	case 3:price+=quantity*2.50;
    	printf("%s\t%.2f\n",products[2],price);
    	break;
    	case 4:price+=quantity*2;
    	printf("%s\t%.2f\n",products[3],price);
    	break;
    	case 5:price+=quantity*2.5;
    	printf("%s\t%.2f\n",products[4],price);
    	break;
    	case 6:price+=quantity*2.5;
    	printf("%s\t%.2f\n",products[5],price);
    	break;
    	case 7:price+=quantity*2.5;
    	printf("%s\t%.2f\n",products[6],price);
    	break;
    	case 8:price+=quantity*2;
    	printf("%s\t%.2f\n",products[7],price);
    	break;
    	case 9:price+=quantity*2.5;
    	printf("%s\t%.2f\n",products[8],price);
    	break;
    	case 10:price+=quantity*7;
    	printf("%s\t%.2f\n",products[9],price);
    	break;
    	case 11:price=quantity*7;
    	printf("%s\t%.2f\n",products[10],price);
    	break;
    	case 12:price+=quantity*9;
    	printf("%s\t%.2f\n",products[11],price);
    	break;
    	case 13:price+=quantity*9;
    	printf("%s\t%.2f\n",products[12],price);
    	break;
    	case 14:price+=quantity*12;
    	printf("%s\t%.2f\n",products[13],price);
    	break;
    	case 15:price+=quantity*13;
    	printf("%s\t%.2f\n",products[14],price);
    	break;
    	case 16:price+=quantity*9;
    	printf("%s\t%.2f\n",products[15],price);
    	break;
    	case 17:price+=quantity*2;
    	printf("%s\t%.2f\n",products[16],price);
    	break;
    	case 18:price+=quantity*2;
    	printf("%s\t%.2f\n",products[17],price);
    	break;
    	case 19:price+=quantity*7;
    	printf("%s\t%.2f\n",products[18],price);
    	break;
    	case 20:price+=quantity*7;
    	printf("%s\t%.2f\n",products[19],price);
    	break;
    	case 21:price+=quantity*1.5;
    	printf("%s\t%.2f\n",products[20],price);
    	break;
    	case 22:price+=quantity*3;
    	printf("%s\t%.2f\n",products[21],price);
    	break;
    	case 23:price+=quantity*2.5;
    	printf("%s\t%.2f\n",products[22],price);
    	break;
    	case 24: 	
	printf("If you want to additional syrup press [Y] or [N]\nSyrup Price:2.5TL\n");
	scanf("%s",&x);
	
	if(x=='Y' || x=='y'){
	system("color D");
	printf("***Enter a syrup number***\n [1]Vanilla\n[2]Chocalate\n[3]Strawberry\n[4]Blueberry\n[5]Raspberry\n");
	scanf("%d",&syrup);
	price+=(quantity*2.5)+(quantity*4.5);
	
}
    else if (x=='N' || x=='n')
	{
	price+=quantity*4.5;	
} //end if
		printf("%s\t%.2f\n",products[23],price);

    	break;
		case 25:printf("If you want to additional syrup press [Y] or [N].\nSyrup Price:2.5TL\n");
	scanf("%s",&x);
	
	if(x=='Y' || x=='y'){
	
	printf("***Enter a syrup number***\n [1]Vanilla\n[2]Chocalate\n[3]Strawberry\n[4]Blueberry\n[5]Raspberry\n");
	scanf("%d",&syrup);
	price+=(quantity*2.5)+(quantity*5);
	
}
    else if (x=='N' || x=='n')
	{
	price+=quantity*5;	
} 
		break;
		case 26:printf("If you want to additional syrup press [Y] or [N]\nSyrup Price:2.5TL\n");
	scanf("%s",&x);
	
	if(x=='Y' || x=='y'){
	
	printf("***Enter a syrup number***\n [1]Vanilla\n[2]Chocalate\n[3]Strawberry\n[4]Blueberry\n[5]Raspberry\n");
	scanf("%d",&syrup);
	price+=(quantity*2.5)+(quantity*4);
	
}
    else if (x=='N' || x=='n')
	{
	price+=quantity*4;	
} 
		break;
		case 27:printf("If you want to additional syrup press [Y] or [N].\nSyrup Price:2.5TL\n");
	scanf("%s",&x);
	
	if(x=='Y' || x=='y'){
	
	printf("***Enter a syrup number***\n [1]Vanilla\n[2]Chocalate\n[3]Strawberry\n[4]Blueberry\n[5]Raspberry\n"); //syrup selection
	scanf("%d",&syrup);
	price+=(quantity*2.5)+(quantity*5);
	
}
    else if (x=='N' || x=='n')
	{
	price+=quantity*5;	
} 
		break;
		case 28:price+=quantity*3.5;
		printf("%s\t%.2f\n",products[27],price);
		break;
		case 29:price+=quantity*2.5;
		printf("%s\t%.2f\n",products[28],price);
		break;
		case 30:price+=quantity*1.5;
		printf("%s\t%.2f\n",products[29],price);
		break;
		default:printf("Please enter a number between 1-30...\n");
		break;
		        
    } //end switch  
    printf("\n\n");

}//end while
exit (i);
}

