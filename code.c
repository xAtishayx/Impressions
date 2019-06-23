#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <windows.h>
#include <time.h>
struct node
{
    char name[20];
    int enroll;
    int arr[5];
    int cost;
    int count;
    struct node *next;
};

typedef struct node node;
int f=1;
int stack[10];
int top=-1;
void delay(int);
void gotoxy(int,int);
void setColor(int);
void ClearConsoleToColors(int,int);
double credits(int);
int security();
void push(int);
int pop();
void hottest(int);
void display();


char password[12]="impressions";


void search()
{
    char n[20];
    printf("enter the name you want to search");
    scanf("%s",&n);
    FILE *p;
    char name[20];
    int enroll,cost,count;
    p=fopen("output.txt","r");
    while(!feof(p))
    {
        fscanf(p,"%s %d %d %d",&name,&enroll,&count,&cost);
        if(strcmp(n,name)==0)
        {
            setColor(16);
            printf("->->->->->Name is %s \n",name);
            printf("->->->->->enrollment number is %d \n",enroll);
            printf("->->->->->Participated in %d events\n",count);
            setColor(0);
            printf("->->->->->Cost due is %d \n",cost);


            fclose(p);
            return;
        }
    }
    printf("user name does not exist");
    fclose(p);
    return;

}


double credits(int sum)
{
    int s;
    s=sum-100;
    if(s<=0)
    {
        s=0;
    }
    return s;
}

void push(int i)
{
    top++;
    stack[top]=i;
}

int pop(int temp)
{
int r;
  r=stack[temp];
   return r;
}

void hottest(int f)
{
int hr,ch,max,c,temp;
max=0;
int i=1;
for(int pp=top;pp>=0;pp--)
{
    i=stack[pp];
    c=0;
    temp=top;
    while(temp>-1)
    {
        hr=pop(temp);
        if(i==hr)
        c++;
        if(c>max)
        {

        max=c;
        ch=i;
    }
    temp--;
    }
}



    switch(ch)
    {
        case 1:
        printf("Burger");
        break;
        case 2:
        printf("Pizza");
        break;
        case 3:
        printf("Belgian Waffles");
        break;
        case 4:
        printf("Ice cream");
        break;
        case 5:
        printf("Coffee");
        break;
        case 6:
        printf("Cold Drink");
        break;

    }


}


int security()
{
    setColor(15);
    char user[20];
	printf("enter the admin username :");
	scanf("%s",user);
	printf("enter your password:");
	char pass[20];
 int i;
 for(i=0;i<11;i++)
 {
     pass[i]=getch();
     printf("*");
 }
  pass[i]='\0';
	if(strcmp(pass,password)!=0)
	{
		printf("\n\nPassword is incorrect\n");
        return 0;
	}
	return 1;

}

int main()
{
    int cost[]={0,20,40,60,20,10,20};
    int reg=0;
    char c='y';
    char ch2='y';
int i=-1,j;
int s=0;
    ClearConsoleToColors(0,6);
    int check;
   check=security();
    if(check==0)
    {
        return 0;
    }
    int n1;
   ClearConsoleToColors(15,0);
   setColor(10);
   printf("\n\t\t\t\t\tWelcome  To  Impressions  2k19\n");

  delay(1000);

  FILE *fp;
  char mean[1000];
  fp=fopen("about.txt","r");



  gotoxy(36,4);
  setColor(13);
  printf("-----------About impressions-----------\n\n");

  printf("\n");
  fgets(mean,1000,fp);
  printf("%s",mean);
    fclose(fp);
delay(2000);
    node *n,*p,*head=NULL;
     int ch=1;
while(ch==1)
{
     system("cls");
     setColor(14);
     n=(node*)malloc(sizeof(node));
     printf("\n enter your name for registration\n ");
     scanf("%s",&n->name);
     printf("enter your enroll number");
     scanf("%d",&n->enroll);
     setColor(15);
      printf("\nCongratulations You Have Got 100 IMPRESSIONS COINS\n");
     n->next=NULL;
     n->count=0;

   printf("do you want to see the  details of all events & want to register PRESS 1\n ");
   scanf("%d",&n1);


  ClearConsoleToColors(15,4);


   char event1[1000],event2[1000],event3[1000],event4[1000],event5[1000];

if(n1==1)

 {
     printf("\n->->->->->->->->->->->->DETAILS OF ALL THE EVNETS ARE:\n");

     fp=fopen("about.txt","r");
     fgets(mean,1000,fp);
     setColor(0);
     printf("\n event 1:Jhankaar \n");

     delay(1000);
     setColor(15);
     fgets(event1,1000,fp);
     printf("%s",event1);

     setColor(0);
     printf("\n event 2:Photo Exhibition \n");

     delay(1000);
     setColor(15);
     fgets(event2,1000,fp);
     printf("%s",event2);

     setColor(0);
     printf("\nevent 3:Robo-En-Rio\n");

     delay(1000);
     setColor(15);
     fgets(event3,1000,fp);
     printf("%s",event3);

     setColor(0);

     printf("\nevent 4:Uno Dos Tres\n");

     delay(1000);
     setColor(15);
     fgets(event4,1000,fp);
     printf("%s",event4);

     setColor(0);
     printf("\nevent 5:BRIC-A-BRAC \n");

     delay(1000);
     setColor(15);
     fgets(event5,1000,fp);
     printf("%s",event5);

     fclose(fp);


  delay(2000);

   printf("\n........................enter your choice...................\n");
i=0;
ch2='y';

while(ch2=='y'||ch2=='Y')
{
    i++;
    setColor(6);
    printf("\n press 1 for taking part in event 1\n press 2 for taking part in event 2\n press 3 for taking part in event 3\n press 4 for taking part in event 4\n press 5 for taking part in event 5\n");
    scanf("%d",&n->arr[i]);
    if(n->arr[i]>5)
    {
        printf("WRONG CHOICE");
    }
    else
    {
    n->count++;
    for(j=0;j<i;j++)
    {
        if(n->arr[j]==n->arr[i])
        {
            setColor(0);
        printf("you have already taken part in entered event");
        i--;
        n->count--;
        }
    }
        printf(" \n Want to register in more events  : press Y \n");
    scanf("%s",&ch2);
   }


 }}


printf("\n->->->->->->Do You Want to add one pop up meal in your cart Press Y \n");
scanf("%s",&c);

if(c=='Y'||c=='y')
{
    FILE *fp1;
    fp1=fopen("food.txt","r");
    char food[100],food1[100],food2[100],food3[100],food4[100],food5[100];
    fgets(food,100,fp1);
  printf("%s",food);

  fgets(food1,100,fp1);
  printf("%s",food1);

  fgets(food2,100,fp1);
  printf("%s",food2);

  fgets(food3,100,fp1);
  printf("%s",food3);

  fgets(food4,100,fp1);
  printf("%s",food4);

  fgets(food5,100,fp1);
  printf("%s",food5);
    fclose(fp);

if(reg!=0)
{
 printf("----------Hottest meal is:");
 hottest(f);
}


 printf("\n........................enter your choice...................\n");
 scanf("%d",&f);

 reg++;

 push(f);


 for(int i=0;i<6;i++)
 if(i==f)
 {
 s=cost[i];
 }
}


    n->cost=40*(n->count)+s;
    n->cost=credits(n->cost);
    n->next=NULL;

     if(head==NULL)
     {
         head=n;
         p=n;

     }
     else
     {
         p=head;
         while(p->next!=NULL)
         p=p->next;

         p->next=n;

      }

     printf("\n.....................Enter 0 to exit OR 1 to add a new user..........................\n");
     scanf("%d",&ch);

FILE *f2;
f2=fopen("output.txt","a+");

fprintf(f2,"\n%s %d %d %d",n->name,n->enroll,n->count,n->cost);
fclose(f2);

}
printf("\n ..............................................................................................\n");
char ch3;
setColor(10);
printf("Do you want to search any registered user? Press Y\n");
    scanf("%s",&ch3);
while(ch3=='y'||ch3=='Y')
{
      search();
    printf("Do you want to search more registered users?? Press Y\n");
    scanf("%s",&ch3);


}
}




void delay(int number_of_seconds)
{
    int milli_seconds=number_of_seconds;
    clock_t start_time=clock();
    while(clock()<start_time+milli_seconds)
    {
        ;
    }

}

void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

void setColor(int ForgC)
{
    WORD wcolor;
    HANDLE hStdOut=GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    if(GetConsoleScreenBufferInfo(hStdOut,&csbi))
    {
        wcolor=(csbi.wAttributes &0xF0)+(ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut,wcolor);
    }

}

void ClearConsoleToColors(int ForgC, int BackC)
 {
 WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);
                                                     //Get the handle to the current output buffer...
 HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
                                                 //This is used to reset the carat/cursor to the top left.
 COORD coord = {0, 0};

   DWORD count;                                       //A return value... indicating how many chars were written

                                                //This is a structure containing all of the console info
                                                         // it is used here to find the size of the console.
 CONSOLE_SCREEN_BUFFER_INFO csbi;
                                                                  //Here we will set the current color
 SetConsoleTextAttribute(hStdOut, wColor);
 if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
 {
                                                                    //This fills the buffer with a given character (in this case 32=space).
      FillConsoleOutputCharacter(hStdOut, (TCHAR) 32, csbi.dwSize.X * csbi.dwSize.Y, coord, &count);

      FillConsoleOutputAttribute(hStdOut, csbi.wAttributes, csbi.dwSize.X * csbi.dwSize.Y, coord, &count );
                          //This will set our cursor position for the next print statement.
      SetConsoleCursorPosition(hStdOut, coord);
 }
 return;
}




