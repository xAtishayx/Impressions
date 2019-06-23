# Impressions
A unique concept of making full working website by using C language of our college fest 'Impressions' 

# List of Data Structure Used

•	Linked List- We used linked list to store n number of details of users without consuming extra storage space as in arrays.

•	Stack- Stack is used to create the algorithm of the hottest meal (meals which are in demand by users) which can be consumed by user.

•	Array- Used as a part in linked list node to store the choices given by the user.







# Functions Used
1.	void delay(int);- Delay function is used to suspend execution of a program for a particular time. Here unsigned int is the number of milliseconds (1 second = 1000 milliseconds). 

2.	void gotoxy(int,int);- gotoxy function places cursor at a desired location on screen i.e., we can change cursor position using gotoxy function. Where (x, y) is the position where we want to place the cursor.

3.	void setColor(int);- In Graphics each color is assigned a number. Total 16 colors are available. Strictly speaking number of available colors depends on current graphics mode and driver
 
4.	void ClearConsoleToColors(int,int);-It will clear the screen and change the console from one color code to another color code.

5.	double credits(int);- We have calculated the cost due on each user by subtracting 100 Impression coins from user . 
       Step1-Declare s
       Step2-s=sum-100
       Step3- if(s<=0),then s=0.
       Step4-return s
      Step5-End.

6.	int security();-Ask the Admin for username and password before registration of users

7.	void push(int);-It pushes elements in stack by increasing the value of top.

8.	int pop();-It return the elemnt by decreasing the value of top.

9.	void hottest(int);-It returns the meal which are in demand by the users by keeping check the most ordered meal by rhe user and if two or more meals are same then recent meal is hottest.
Step1- int hr,ch,max,c,temp;
Step2- Declare max=0; int i=1;
Step3- for(int pp=top;pp>=0;pp--)
Step4-  declare  i=stack[pp];c=0;temp=top;
Step5- Repeat step6 to Step 9 until (temp>-1)
Step6-  hr=pop(temp);
Step7-   if(i==hr) then c++;
Step8-   if(c>max) then max=c and ch=i;
Step9-temp--
Step 10 -end

10. void search();-It search the details(name , enrollment number, cost due and number of events participated by user) of user registered in the events. 
    Step1-Declare n[20];
    Step2-Print “enter the name you want to search"
    Step3-Declare FILE *p,char name[20],int enroll,cost,count.
   Step4-repeat step 5 to step 7  until end of file.
   Step5-fscanf(p,"%s %d %d %d",&name,&enroll,&count,&cost);
   Step6-if(strcmp(n,name)==0),then  setColor(16);
   Step7-Print name,enroll,count,cost.
   Step8-End.
