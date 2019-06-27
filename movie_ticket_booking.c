/*This content is created by Bhavya Sri Yarlagadda,Bhavana Vutla,Keerthana Muddana*/

// Including the required libraries
#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <stdlib.h>
#include <dos.h>

//Function definitions

void movie();
void events();
void thisweekend();
void nextweekend();
void nowshowing();
void comingsoon();
void db();
void location();
void screen();
void transaction();

//Declaring the global variables

char sno[15],str[10],sname[20],arr[5];
int a,b,c,d,e,f,g,h,l,m,n,o,p,q,s,t,u,mon,year,w;
int gd=DETECT,gy,i,j,k,r,loc,cvv=0,otp,x,z;
int cost=0,adult=0,kid=0,couple=0,sp;

//Driver Code

void main()
{
int color=15;
initgraph(&gd,&gy,"c:\\TURBOC3\\bgi");
setbkcolor(8);                                //Setting the background color
cleardevice();
  while(!kbhit())
  {
    settextstyle(10,0,3);
    setcolor(random(color));
    outtextxy(180,170,"....C BOX OFFICE....");
    delay(250);
  }
clrscr();
printf("********************************************************************************");
printf("\n\n\t\t\tWELCOME TO C BOXOFFICE......\n\n");
printf("********************************************************************************");
for(x=200;x<=300;x+=20)
{
sound(x);
delay(25);
nosound();
}
//nosound();

// Chossing between movies or events

printf("1.Movies\t\t2.Events\n");
printf("\nEnter ur choice:");
scanf("%d",&a);
  switch(a)
      {
          case 1:movie();
                  break;
          case 2:events();
                  break;
      }

getch();
closegraph();
}



// Movie function

void movie()
  {
     printf("1.Now Showing\t\t2.Coming Soon\n");
     printf("\nEnter Category:");
     scanf("%d",&b);
     switch(b)
       {
	   case 1:nowshowing();
		  break;
	   case 2:comingsoon();
		  break;
	}
   }


// Nowshowing function  ---- Movie-->Now Showing

void nowshowing()
 {
   printf("\nThe movie list is..................");
   printf("\n1.GEETA GOVINDAM\t\t2.GUDACHARI\n");
   printf("Choose a movie:");
   scanf("%d",&c);
   if(c==1)     // Executes if GEETA GOVINDAM movie is chosen
      {
        printf("\n1.Book tickets\t\t2.Review\n");
        printf("Enter your option:");
        scanf("%d",&d); clrscr();
            if(d==1)   // Book Tickets
	             {
                  location();
                  printf("\n1.Theatre A\t\t2.Theatre B\n");
                  printf("Choose a theatre for GEETA GOVINDAM:\n");
                  scanf("%d",&e);
                      if(e==1)      //Theatre Selection ::: Movie-->Book Tickets-->Theatre A
                          {
                              printf("Choose A's show timings for GEETA GOVINDAM...\n");
                              printf("1.Morning\t\t2.Afternoon\n");
                              printf("Choose an option:");
                              scanf("%d",&f);
                                  if(f==1)           //movie 1--> theatre A--> morning
                                      {
	                                       printf("\nWELCOME TO GEETA GOVINDAM'S MORNING SHOW IN THEATRE A....");
	                                       clrscr();
	                                       screen();
	                                     }
                                  else               //Movie 1 -->Theatre A --> Afteroon
                                      {
                                          printf("\nWELCOME TO GEETA GOVINDAM'S AFTERNOON SHOW IN THEATRE A.....");
                                          clrscr();
                                          screen();
	                                     }
	                           }
                        else   // Movie 1 --> Theatre B
                            {
                              printf("\nChoose B's show timings for GEETA GOVINDAM\n");
                              printf("1.Morning\t\t2.Afternoon\n");
                              printf("Choose an option:");
                              scanf("%d",&f);
                                  if(f==1)  //Movie 1 --> Theatre B--> Morning
                                      {
                                          printf("\nWELCOME TO GEETA GOVINDAM'S MORNING SHOW IN THEATRE B....");
                                          clrscr();
                                          screen();
                                      }
                                  else    // Movie 1 --> Theatre B --> Afternoon
                                      {
                                          printf("\nWELCOME TO GEETA GOVINDAM'S AFTERNOON SHOW IN THEATRE B.....");
                                          clrscr();
                                          screen();
                                      }
                            }
                    }
          else  // Revie on Movie 1
            {
                printf("\n\tReview of GEETA GOVINDAM....\n");
                printf("    A 25-year-old man,Govind falls in love with Geetha. However,Geetha doesn't reciprocate his love as he comes across as a womenizer.Will he able to impress her?");
                settextstyle(5,0,4);
                setcolor(5);
                outtextxy(40,100,"Overall Rating:4.5");
            }
        }
    else  // Movie 2 is chosen
      {
        printf("\n1.Book tickets\t2.Review\n");
        printf("Enter your option:");
        scanf("%d",&d);
        clrscr();
        location();
            if(d==1)  // Movie 2 -->Book Tickets
              {
                  printf("\nChoose theatre for GUDACHARI:");
                  printf("\n1.A theatre\t\t2.B theatre");
                  printf("\nEnter your option:");
                  scanf("%d",&e);
                        if(e==1)   // Movie 2 --> Book Tickets --> Theatre A
                            {
                                printf("\nChoose A's show timings for GUDACHARI");
                                printf("\n1.Morning\t\t2.Afternoon\n");
                                printf("Choose an option:");
                                scanf("%d",&f);
                                          if(f==1)   // Morning Show in Theatre A
                                              { 
                                                  printf("\n\t\tWELCOME TO GUDACHARI'S MORNING SHOW IN THEATRE A....");
                                                  clrscr();
                                                  screen();
                                              }
                                          else
                                              {
                                                  printf("\n\t\tWELCOME TO GUDACHARI'S AFTERNOON SHOW IN THEATRE B.....");
                                                  clrscr();
                                                  screen();
                                              }
                            }
                        else   // Movie 2--> Book Tickets --> Theatre B
                            {
                                printf("\nChoose B's show timings for GUDACHARI\n");
                                printf("1.Morning\t\t2.Afternoon\n");
                                printf("Choose an option:");
                                scanf("%d",&f);
                                            if(f==1)
                                                {
                                                    printf("\n\t\tWELCOME TO GUDACHARI'S MORNING SHOW IN THEATRE A....");
                                                    clrscr();
                                                    screen();
                                                }
                                            else
                                                {
                                                    printf("\n\t\tWELCOME TO GUDACHARI'S AFTERNOON SHOW IN THEATRE B.....");
                                                    clrscr();
                                                    screen();
                                                }
                            
                          }
               }
      else     // Review Of Movie 2
        { 
                  settextstyle(12,0,8);
                  setcolor(RED);
                  printf("\t\t Review of GUDACHARI....\n");
                  printf("Arjun Kumar,a martyr's son and a trained agent from a program.\nIt is a journey to track down people who are responsible for framing him as the most wanted criminal");
                  settextstyle(5,0,4);
                  setcolor(5);
                  outtextxy(40,100,"Overall Rating:4");
          }
    }
  }





// Coming Soon Function

void comingsoon()
{
    printf("Coming soon movies are....\n");
    printf("1.Aravinda Sametha\t2. 2.0\n");
    printf("\nEnter ur choice:");
    scanf("%d",&t);
        if(t==1)
            {
                printf("\n\t\tMovie name: ARAVINDA SAMETHA\n\t\tRelease Date:10 October 2018\n\n");
                printf("\n\t\tBooking opens on  8 October 2018");
            }
        else
            {
                printf("\n\t\tMovie name: 2.0\n\t\tRelease Date:29 November 2018\n\n");
                printf("\n\t\tBooking opens on  27 November 2018");
            }
  }


 // Events Function
  
void events()
{
 printf("Events are...\n");
 printf("\n1.this weekend\t\t2.next weekend\n");
 printf("\n\nSelect ur option:");
 scanf("%d",&l);
      if(l==1)
            thisweekend();
      else
            nextweekend();
}


// This weekend Events Function

void thisweekend()
{
printf("\n\n1.Haailand resort\t\t2.Music live\n");
printf("Enter ur choice:");
scanf("%d",&m);
        if(m==1)
            {
                clrscr();
                printf("\n\t\tWELCOME TO HAAILAND RESORT......\n");
                printf("\n1.Book tickets\t\t2.Overview\n");
                printf("Enter ur choice:");
                scanf("%d",&n);
                      if(n==1)
                           {
                                printf("\nDate:\nSaturday\n15  September\n\nTime:6.00pm\n\n\t\tProceed....");
                                printf("\nSelect ur category...\n");
                                printf("\nAdults\n500/-\nEach ticket grants entry to 1 person....\n");
                                printf("\nKids\n300/-\nEach ticket grants entry to 1 person....\n");
                                printf("\nEnter number of adults and kids:");
                                scanf("%d%d",&adult,&kid);
                                settextstyle(5,0,7);
                                clrscr();
                                printf("\nYou have to pay:%d",(500*adult)+(300*kid));
                                transaction();
                            }
                        else
                            {
                                printf("\nHaailand grandly welcomes you to the fantastic event.....");
                                printf("\nDiscover an endless combination of thrilling rides,water park,");
                                printf("fantastic entertainment,delightful restaurants");
                              }  
            }
            else
              {       
                    clrscr();
                    printf("\n\t\tWELCOME TO LIVE MUSIC.......\n");
                    printf("1.Book tickets\t\t2.Overview\n");
                    printf("Enter ur choice:");
                    scanf("%d",&o);
                            if(o==1)
                                  {
                                      printf("\nDate:\nSaturday\n15  September\n\nTime:3.00pm\n\n\t\tProceed....");
                                      printf("\nSelect ur category...\n");
                                      printf("\nAdults\n600/-\nEach ticket grants entry to 1 person....\n");
                                      printf("\nKids\n500/-\nEach ticket grants entry to 1 person....\n");
                                      printf("\nEnter number of adults and kids:");
                                      scanf("%d%d",&adult,&kid);
                                      clrscr();
                                      printf("\nYou have to pay:%d",(600*adult)+(500*kid));
                                      transaction();

                                    }

                            else
                                {
                                  printf("\nLive music welcomes you....\n");
                                  printf("\nImmerse yourself in the world of music....ROCKZZZZZ");
                                }
                      }
        }


 // Next Week Events
        
void nextweekend()
{
printf("\n\n1.Cuba event\t\t2.TEDx event\n");
printf("\nEnter ur choice:");
scanf("%d",&p);
if(p==1)
{
    clrscr();
    printf("\n\t\tWELCOME TO CUBA EVENT......\n");
    printf("\n1.Book tickets\t\t2.Overview\n");
    printf("\nEnter ur choice:");
    scanf("%d",&q);
        if(q==1)
            {
                printf("\nDate:\nSaturday , 15 September\n\nTime:10.00pm\n\n\t\tProceed....");
                printf("\nOnly Couples are allowed...\n");
                printf("Wanna come...!\nBring your partner...\nDon't have one...\nFind one...");
                printf("\nCouple:  2000/-\nEach ticket grants entry to a couple....\n");
                printf("\t Location: Trendset mall\n5th floor\nVijayawada\nAndhra Pradesh");

                printf("\nEnter number of couples:");
                scanf("%d",&couple);
                clrscr();
                printf("\nYou have to pay:%d",(couple*2000)/*+(team*4500)*/);
                transaction();
              }
          else
              {
                printf("\nCuba welcomes you to the fantastic event.....");
                printf("Spend time with your loved ones....");
              }    
          }
    else
      {
            clrscr();
            printf("\n\t\tWELCOME TO TEDx EVENT.......\n");
            printf("1.Book tickets\t\t2.Overview\n");
            printf("\nEnter ur choice:");
            scanf("%d",&s);
                    if(s==1)
                        {
                          printf("\nDate:\nSaturday\n22 September\nTime:\n9.00am\n\n\t\tProceed....");
                          printf("\nSelect ur category...\n");
                          printf("\nAdults\n4000/-\nEach ticket grants entry to 1 person....\n");
                          printf("\tLocation:Vijayawada,Andhra Pradesh\n");
                          printf("\nEnter number of adults:");
                          scanf("%d",&adult);
                          clrscr();
                          printf("\n\nYou have to pay:%d",(adult*4000));
                          transaction();
                          }
                    else
                        {
                          printf("\nTEDx EVENT WELCOMES YOU....\n");
                          printf("Explore yourself....\nBuild your thinking...........");
                        }
          }
    }

 // Screen Function
    
void screen()
{
setbkcolor(3);
  
  for(j=0;j<3;j++)
      {
          for(i=0;i<9;i++)
              {
                  rectangle(50+(50*i),200+(50*j),100+(50*i),250+(50*j));
              }
      }

 rectangle(40,175,500,180);
 settextstyle(14,0,3);
 setcolor(14);
outtextxy(270,165,"Screen");
 settextstyle(14,1,3);
 setcolor(4);
 outtextxy(520,220,"Normal");
 settextstyle(14,0,3);
 setcolor(14);
 outtextxy(520,420,"Gold");
 settextstyle(2,0,5);
 outtextxy(75+(50*0),180,"1");
 outtextxy(75+(50*1),180,"2");
 outtextxy(75+(50*2),180,"3");
 outtextxy(75+(50*3),180,"4");
 outtextxy(75+(50*4),180,"5");
 outtextxy(75+(50*5),180,"6");
 outtextxy(75+(50*6),180,"7");
 outtextxy(75+(50*7),180,"8");
 outtextxy(75+(50*8),180,"9");
 outtextxy(30,225+(50*0),"1");
 outtextxy(30,225+(50*1),"2");
 outtextxy(30,225+(50*2),"3");
 outtextxy(30,225+(50*4),"4");
settextstyle(6,0,4);
setcolor(5);
setcolor(6);


  for(i=0;i<9;i++)
    {
      rectangle(50+(50*i),400,100+(50*i),450);
    }

do
{
printf("Enter row & column:");
scanf("%d %d",&r,&g);
setcolor(RED);
if(r==1)
{
 g=g-1;
 line(50+(50*g),200,100+(50*g),250);
 line(100+(50*g),200,50+(50*g),250);
 cost+=100;
}
else if(r==2)
{
   g=g-1;
 line(50+(50*g),250,100+(50*g),300);
 line(100+(50*g),250,50+(50*g),300);
 cost+=100;
}
else if(r==3)
{
 g=g-1;
 line(50+(50*g),300,100+(50*g),350);
 line(100+(50*g),300,50+(50*g),350);
 cost+=100;
}
else if(r==4)
{
 g=g-1;
 line(50+(50*g),400,100+(50*g),450);
 line(100+(50*g),400,50+(50*g),450);
 cost+=200;
}
else
  printf("Invalid\n ");
printf("Do u want to book another ticket.....(yes=1/no=2):");
scanf("%d",&h);
}
while(h==1);


//Snacks

 settextstyle(6,1,5);
 setcolor(5);
 clrscr();
 printf("SNACKS TIME:");
 printf("\n1.Coke      Cost:200");
 printf("\n2.Popcorn   Cost:300");
 printf("\n3.Combo     Cost:450");
 printf("\n4.No Snacks");
 printf("\n\nEnter your choice:");
 scanf("%d",&u);
 if(u==1)
    cost=cost+200;
 else if(u==2)
   cost+=300;
 else if(u==3)
   cost+=450;
 else if(u==4)
     ;
 else
   printf("Invalid option:");

 printf("You should pay:Rs.%d",cost);
 transaction();
}


// Transaction Function

void db()
{
clrscr();
printf("\n\t\t\t.......... TRANSACTION........");
printf("\nEnter name as it appears on your card :");
scanf("%s",&sname);
printf("\nEnter your card number:");
scanf("%s",&sno);
printf("\nEnter expiry date(month&year):\n");
scanf("%d %d",&mon,&year);

printf("\nEnter CVV:");
while(cvv<=3)
{
str[cvv]=getch();
sp=str[cvv];
if(sp==3)
  break;
else
  printf("*");
  cvv++;
}
str[cvv]='\0';
clrscr();
printf("\nEnter your OTP number:");
/*settextstyle(12,0,4);
setcolor(7);
for(z=30;z>=0;z--)
{
sprintf(arr,"%d",z);
outtextxy(50,40,arr);
delay(1000);
 if(z==0)
   break;
 cleardevice();
} */
scanf("%d",&otp);
settextstyle(2,0,7);
setcolor(2);
outtextxy(20,40,"YOUR TRANSACTION HAS BEEN DONE SUCCESSFULLY......");
outtextxy(20,60,"YOUR TICKET IS BOOKED");
outtextxy(20,100,"Enjoy the show......");
outtextxy(50,150,"Thank you... Visit again...");




delay(5000);
clrscr();
settextstyle(3,0,5);
setcolor(14);
outtextxy(10,getmaxy()/2,"ALERT!!!");
settextstyle(4,0,3);
outtextxy(10,(getmaxy()/2)+50,"You have a show in half an hour");

}

// Choosing Location

void location()
{
	printf("\nAvailable locations nearby....");
	printf("\n1.BENZCIRCLE\n2.BANK COLONY\n3.MACHAVARAM\n4.KANURU\n");
	printf("Enter your location:");
	scanf("%d",&loc);
	printf("\nThe available theatres are ....\n");
	if(loc==1)
	 {
	   printf("\nTheatre A is 3km from your location....");
	   printf("\nTheatre B is 7km from your location....");
    }
  else if(loc==2)
	 {
	   printf("\nTheatre A is 8km from your location....");
	   printf("\nTheatre B is 2km from your location....");
    }
  else if(loc==3)
    {
	   printf("\nTheatre A is 1km from your location....");
	   printf("\nTheatre B is 5km from your location....");
    }
	else if(loc==4)
	 {
	   printf("\nTheatre A is 6km from your location....");
	   printf("\nTheatre B is 12km from your location....");
	 }
	 else
	   printf("\nInvalid location.....");
  }

// Transaction Function

void transaction()
{
  printf("\n\n\n1.Debit card\t2.Credit card");
  printf("\nEnter your mode of transaction:");
  scanf("%d",&w);
  if(w==1)
    {
    printf("\t\tDEBIT CARD TRANSACTION");
    db();
    }
  else
  {
  printf("\t\tCREDIT CARD TRANSACTION");
  db();
  }

}
