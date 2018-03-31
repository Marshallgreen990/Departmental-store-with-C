#include<stdio.h>
 #include<stdlib.h>
int qty,jq=0,shq=0,sq=0;
float disc,amt,nb,ja=0,sha=0,sa=0,jd=0,shd=0,sd=0,jb=0,shb=0,sb=0;
void jeans();
void shirts();
void shoes();
void main()
{
float tot=0;
int n,c;
char ch,j[10],sh[10],s[10];

strcpy(j,"jeans");
strcpy(sh,"shirts");
strcpy(s,"shoes");
choices:
printf("--------------------------------------------\n");
printf("ENTER YOUR CHOICES\n");
printf("1- MENS EXCLUSEIVE [JEANS,SHIRTS]\n");
printf("2- WOMENS EXCLUSEIVE [JEANS,SHIRTS,SUIT,SALWAR]\n");
printf("3- KIDS EXCLUSEIVE [JEANS,SHIRTS,SHOES]\n");
printf("4- FOR GETTING BILL\n");
printf("5- FOR EXIT ENTER \n");
scanf("%d",&n);
switch(n)
{
case 1:
mens:
 printf("-----------enter your choice--------------\n");
 printf("1- MENS JEANS\n");
  printf("2- MENS SHOES\n");
   printf("3- MENS SHIRTS\n");
   scanf("%d",&c);
   switch(c)
   {

   case 1:
   jeans();

	     printf("DO YOU WANT TO BUY MORE [Y/N]\n");
      scanf("%s",&ch);
	    if(ch=='y' || ch=='Y')

      goto mens;

      else
      goto choices;
    case 2:
   shoes();

      printf("DO YOU WANT TO BUY MORE [Y/N]\n");
      scanf("%s",&ch);
	    if(ch=='y' || ch=='Y')

      goto mens;

      else
      goto choices;

  case 3:
   shirts();

      printf("DO YOU WANT TO BUY MORE [Y/N]\n");
      scanf("%s",&ch);
	    if(ch=='y' || ch=='Y')

      goto mens;

      else
      goto choices;
       default:
      printf("you have choosen invalid case");
      }
      break;
case 2:
womens:
 printf("-----------enter your choice--------------\n");
 printf("1- WOMENS JEANS\n");
  printf("2- WOMENS SHOES\n");
   printf("3- WOMENS SHIRTS\n");
   scanf("%d",&c);
   switch(c)
   {

   case 1:
   jeans();
  /*   printf("-------WOMENS EXCLUSIVE(JEANS)--------\n");
      printf("each jeans cost 500 and we are giving 20%% discount\n");
      printf("how many jeans you want\n");
      scanf("%d",&qty);
      amt=500 * qty;
      disc=amt*20/100;
      nb=amt-disc;
      printf("amt=%.2f\ndisc=%.2f\n,nb=%.2f\n",amt,disc,nb);  */
      printf("DO YOU WANT TO BUY MORE [Y/N]\n");
      scanf("%s",&ch);
	    if(ch=='y' || ch=='Y')

      goto womens;

      else
      goto choices;

    case 2:
   shoes();
     /* printf("-------WOMENS EXCLUSIVE(SHOES)--------\n");
      printf("each jeans cost 700 and we are giving 15%% discount\n");
      printf("how many jeans you want\n");
      scanf("%d",&qty);
      amt=700*qty;
      disc=amt*15/100;
      nb=amt-disc;
      printf("amt=%.2f\ndisc=%.2f\n,nb=%.2f\n",amt,disc,nb);  */
      printf("DO YOU WANT TO BUY MORE [Y/N]\n");
      scanf("%s",&ch);
	    if(ch=='y' || ch=='Y')

      goto womens;

      else
      goto choices;
   case 3:
   shirts();
    /*  printf("-------WOMENS EXCLUSIVE(SHIRTS)--------\n");
      printf("each jeans cost 400 and we are giving 10%% discount\n");
      printf("how many jeans you want\n");
      scanf("%d",&qty);
      amt=400*qty;
      disc=amt*10/100;
      nb=amt-disc;
      printf("amt=%.2f\ndisc=%.2f\n,nb=%.2f\n",amt,disc,nb);*/
      printf("DO YOU WANT TO BUY MORE [Y/N]\n");
      scanf("%s",&ch);
	    if(ch=='y' || ch=='Y')

      goto womens;

      else
      goto choices;
	 default:
      printf("you have choosen invalid case");
      }

 case 3:
 kids:
 printf("-----------enter your choice--------------\n");
 printf("1- KIDS JEANS\n");
  printf("2- KIDS SHOES\n");
   printf("3- KIDS SHIRTS\n");
   scanf("%d",&c);
   switch(c)
   {

   case 1:
   jeans();
   /*
      printf("-------KIDS EXCLUSIVE(JEANS)--------\n");
      printf("each jeans cost 500 and we are giving 20%% discount\n");
      printf("how many jeans you want\n");
      scanf("%d",&qty);
      amt=500 * qty;
      disc=amt*20/100;
      nb=amt-disc;
      printf("amt=%.2f\ndisc=%.2f\n,nb=%.2f\n",amt,disc,nb); */
      printf("DO YOU WANT TO BUY MORE [Y/N]\n");
      scanf("%s",&ch);
	    if(ch=='y' || ch=='Y')

      goto kids;

      else
      goto choices;
       case 2:
   shoes();
   /*
      printf("-------KIDS EXCLUSIVE(SHOES)--------\n");
      printf("each jeans cost 700 and we are giving 15%% discount\n");
      printf("how many jeans you want\n");
      scanf("%d",&qty);
      amt=700*qty;
      disc=amt*15/100;
      nb=amt-disc;
      printf("amt=%.2f\ndisc=%.2f\n,nb=%.2f\n",amt,disc,nb);   */
      printf("DO YOU WANT TO BUY MORE [Y/N]\n");
      scanf("%s",&ch);
	    if(ch=='y' || ch=='Y')

      goto kids;

      else
      goto choices;

  case 3:
   shirts();
     /* printf("-------KIDS EXCLUSIVE(SHIRTS)--------\n");
      printf("each jeans cost 400 and we are giving 10%% discount\n");
      printf("how many jeans you want\n");
      scanf("%d",&qty);
      amt=400*qty;
      disc=amt*10/100;
      nb=amt-disc;
      printf("amt=%.2f\ndisc=%.2f\n,nb=%.2f\n",amt,disc,nb);
     */ printf("DO YOU WANT TO BUY MORE [Y/N]\n");
      scanf("%s",&ch);
	    if(ch=='y' || ch=='Y')

      goto kids;

      else
      goto choices;
	 default:
      printf("you have choosen invalid case");
      }
      case 4:
      //textcolor("BLINK");
      printf("\n\n-----------------------DMART-----------------\n");
      printf("\r\nitem\t\qty\tprice\tdisc\tamt\n");
      puts("______________________________________________________");
      printf("\n%s\t%d\t%.2f\t%.2f\t%.2f\n",j,jq,ja,jd,jb);
      printf("\n%s\t%d\t%.2f\t%.2f\t%.2f\n",sh,shq,sha,shd,shb);
      printf("\n%s\t%d\t%.2f\t%.2f\t%.2f\n",s,sq,sa,sd,sb);
      tot=jb+shb+sb;
      printf("\n\n\n\t\t  GRAND TOTAL = %d",tot);
      printf("\n\n\r---------------thanks for shopping-------\n");
      printf("---------------visit again");
      break;

    case 5:
      exit(0);
    break;
    default:
    printf("no item\n");
    }

  getch();
}
void jeans()
{
 printf("-------MENS EXCLUSIVE(JEANS)--------\n");
      printf("each jeans cost 500 and we are giving 20%% discount\n");
      printf("how many jeans you want\n");
      scanf("%d",&qty);
      amt=500 * qty;
      disc=amt*20/100;
      nb=amt-disc;
      printf("amt=%.2f\ndisc=%.2f\n,nb=%.2f\n",amt,disc,nb);
       jq+=qty;
       ja+=amt;
       jd+=disc;
       jb=nb;
 }

 void shoes()
 {
	    printf("-------MENS EXCLUSIVE(SHOES)--------\n");
      printf("each jeans cost 700 and we are giving 15%% discount\n");
      printf("how many jeans you want\n");
      scanf("%d",&qty);
      amt=700*qty;
      disc=amt*15/100;
      nb=amt-disc;
      printf("amt=%.2f\ndisc=%.2f\n,nb=%.2f\n",amt,disc,nb);
      sq+=qty;
      sa+=amt;
      sd+=disc;
      sb+=nb;
 }
 void shirts()
 {
 printf("-------MENS EXCLUSIVE(SHIRTS)--------\n");
      printf("each jeans cost 400 and we are giving 10%% discount\n");
      printf("how many jeans you want\n");
      scanf("%d",&qty);
      amt=400*qty;
      disc=amt*10/100;
      nb=amt-disc;
      printf("amt=%.2f\ndisc=%.2f\n,nb=%.2f\n",amt,disc,nb);
       shq+=qty;
       sha+=amt;
       shd+=disc;
       shb+=nb;

 }

