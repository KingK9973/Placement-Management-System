//**************************************************************************
//                   HEADER FILE USED IN PROJECT
//**************************************************************************
#include<iostream.h>
#include<graphics.h>
#include<iomanip.h>
#include<process.h>
#include<fstream.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
//**************************************************************************
//                     FUNCTION DECLARATION
//**************************************************************************

void gph();
void pass();
void process();
void welcome();
void initial();
void searching();
void write();
void displa_all();
void displa_rec();
void modify_rec();
void delete_rec();
void main_menu();
void quiz();
void opt1();
void opt2();
void opt3();
void opt4();

//**************************************************************************
//            	     CLASSES USED IN PROGRAM
//**************************************************************************

class candidates
{
     char crn[10],an[10],bn[10],gn,fn[20],mn[20],st[5],ad[100],em[20],cn[10],m10[4],m12[4],mf[4];

  public:

     void insert();
     void modify();
     void show()
     {
	cout<<"\n\tCOLLEGE ROLL NO:: ";
	puts(crn);
	cout<<"\tFIRST NAME:: ";;
	puts(an);
	cout<<"\tLAST NAME:: ";
	puts(bn);
	cout<<"\tGENDER:: ";
	cout<<gn;
	cout<<"\tFATHER'S NAME:: ";
	puts(fn);
	cout<<"\tMOTHER'S NAME:: ";
	puts(mn);
	cout<<"\tSTREAM:: ";
	puts(st);
	cout<<"\tADDRESS:: ";
	puts(ad);
	cout<<"\tPERCENTAGE MARKS IN 10TH:: ";
	puts(m10);
	cout<<"\tPERCENTAGE MARKS IN +2:: ";
	puts(m12);
	cout<<"\tPERCENTAGE MARKS IN B.TECH:: ";
	puts(mf);
	cout<<"\tCONTACT NUMBER:: ";
	puts(cn);
	cout<<"\tE-MAIL:: ";
	puts(em);
     }



     char* retcrn()
     {
	return crn;
     }
    void report()
     {cout<<"\n\t"<<crn<<setw(20);
       cout<<an;cout<<setw(15);
       cout<<fn;cout<<setw(10);
       cout<<st;cout<<setw(10);
     }

};              //END OF THE CLASS.


void candidates::insert()
     {
	cout<<"\n\t\t\t\tENTRY OF NEW CANDIDATES";
	cout<<"\n\n\tCOLLEGE ROLL NO:: ";
	gets(crn);
	cout<<"\n\tFIRST NAME:: ";;
	gets(an);
	cout<<"\n\tLAST NAME:: ";
	gets(bn);
	cout<<"\n\tGENDER:: ";
	cin>>gn;
	cout<<"\n\tFATHER'S NAME:: ";
	gets(fn);
	cout<<"\n\tMOTHER'S NAME:: ";
	gets(mn);
	cout<<"\n\tSTREAM:: ";
	gets(st);
	cout<<"\n\tADDRESS:: ";
	gets(ad);
	cout<<"\n\tPERCENTAGE MARKS IN 10TH:: ";
	gets(m10);
	cout<<"\n\tPERCENTAGE MARKS IN +2:: ";
	gets(m12);
	cout<<"\n\tPERCENTAGE MARKS IN B.TECH:: ";
	gets(mf);
	z:
	cout<<"\n\tCONTACT NUMBER:: ";
	gets(cn);
	if(strlen(cn)!=10)
	{    cout<<"\nINVALID NUMBER\n";
	     goto z;
	}
	cout<<"\n\tE-MAIL:: ";
	gets(em);
     }

void candidates::modify()
     {
	cout<<"\n\tCOLLEGE ROLL NO:: ";
	puts(crn);
	cout<<"\n\tMODIFY COLLEGE ROLL NO:: ";
	gets(crn);
	cout<<"\n\tMODIFY FIRST NAME:: ";;
	gets(an);
	cout<<"\n\tMODIFY LAST NAME:: ";
	gets(bn);
	cout<<"\n\tMODIFY GENDER:: ";
	cin>>gn;
	cout<<"\n\tMODIFY FATHER'S NAME:: ";
	gets(fn);
	cout<<"\n\tMODIFY MOTHER'S NAME:: ";
	gets(mn);
	cout<<"\n\tMODIFY STREAM:: ";
	gets(st);
	cout<<"\n\tMODIFY ADDRESS:: ";
	gets(ad);
	cout<<"\n\tMODIFY PERCENTAGE MARKS IN 10TH:: ";
	gets(m10);
	cout<<"\n\tMODIFY PERCENTAGE MARKS IN +2:: ";
	gets(m12);
	cout<<"\n\tMODIFY PERCENTAGE MARKS IN:: ";
	gets(mf);
	z:
	cout<<"\n\tMODIFY CONTACT NUMBER:: ";
	gets(cn);
	if(strlen(cn)!=10)
	{    cout<<"\nINVALID NUMBER\n";
	     goto z;
	}
	cout<<"\n\tMODIFY E-MAIL:: ";
	gets(em);
     }
//**************************************************************************
//                    FUNCTION TO DETECT GRAPHICS
//**************************************************************************

void gph()
{
int gdriver,gmode,errorcode;
gdriver=DETECT, gmode, errorcode;
initgraph(&gdriver,& gmode,"c://tc//bgi");
errorcode = graphresult();
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
   }
}
//**************************************************************************
//                    FUNCTION TO PRINT WELCOME
//**************************************************************************

void welcome()
{
gph();
initial();
closegraph();
}

void initial()
{
for(int i=2;i<6;i++)
 {
sound(50*i);
cleardevice();
settextstyle(4,0,i-1);
setcolor(4);
outtextxy(200-20*i,100,"PLACEMENT MANAGEMENT");
delay(300);
}

for(i=6;i>2;i--)
 {
sound(50*i);
cleardevice();
settextstyle(4,0,i-1);
//setcolor(2);
outtextxy(200-20*i,100,"PLACEMENT MANAGEMENT");
delay(300);
nosound();
 }
for(int j=0;j<6;j++)
 {
sound(100*j);
cleardevice();
settextstyle(1,0,j);
setcolor(j);
outtextxy(300-10*j,250,"created by");
delay(350);
 }
for(j=6;j>0;j--)
 {
sound(100*j);
cleardevice();
settextstyle(1,0,j);
setcolor(j);
outtextxy(300-10*j,250,"created by");
delay(400);
nosound();
 }
for(int k=0;k<5;k++)
 {
sound(20*k);
cleardevice();
settextstyle(7,0,k);
setcolor(k+2);
outtextxy(250-10*k,380,"Karandeep");
delay(500);
nosound();
 }
for(int l=6;l<12;l++)
 {
sound(50*l);
cleardevice();
settextstyle(4,0,2);
setcolor(l);
outtextxy(200,100,"PLACEMENT MANAGEMENT");
settextstyle(1,0,2);
setcolor(l+1);
outtextxy(300,250,"created by");
settextstyle(7,0,2);
setcolor(l+2);
outtextxy(250,380,"Karandeep");
delay(500);
nosound();
 }
cleardevice();
settextstyle(7,0,2);
setcolor(RED);
outtextxy(140,200,"Enter any key to enter the program");
getch();
}

//**************************************************************************
//    	                  SEARCHING
//**************************************************************************

void searching()
{
char c,d,a[5]={' ','0','1',' '};
int i,j,k,m,l,z=1;
char far* p;
p=(char far*)0xb0008000;
clrscr();
textcolor(GREEN);
gotoxy(30,12);
cprintf("Processing");
for(m=1;m<=5;m++)
{
textcolor(GREEN);
gotoxy(39+m,12);
cprintf(".");
delay(600);
}
clrscr();
while(z!=15)
	{
	for(i=0;i<160;i=i+6)
		{
		for(j=0;j<50;j++)
			{
			*(p+160*j+i+1)=GREEN;
			*(p+160*j+i)=a[random(5)];
			}
		}
	delay(90);
	for(k=0;k<10;k++)
		{
		for(i=0;i<160;i=i+6)
			{
			for(j=0;j<25;j++)
				{
				c=*(p+160*j+i);
				d=*(p+160*(j+1)+i);
				*(p+160*(j+1)+i)=c;
				c=d;
				}
			*(p+i)=c;
			}
		}
	z++;
	}
textcolor(YELLOW);
}

//**************************************************************************
//    	      GLOBAL DECLARATION FOR STREAM OBJECT & CLASS OBJECT
//**************************************************************************

fstream fp,fp1;
candidates cn;

//**************************************************************************
//                    FUNCTION TO WRITE IN FILE
//**************************************************************************

void write()
{
     char ch;
     fp.open("crecord.dat",ios::out|ios::app);
     do
     {
	clrscr();
	cn.insert();
	fp.write((char*)&cn,sizeof(candidates));
	cout<<"\n\nDO YOU WANT TO ADD MORE RECORDS ..(Y/N) ?";
	cin>>ch;
     }
     while(ch=='y'||ch=='Y');
     fp.close();
}

//**************************************************************************
//                FUNCTION TO SHOW ALL RECORD FROM FILE
//**************************************************************************

void displa_all()
{
	clrscr();
	fp.open("crecord.dat",ios::in);
	searching();
	clrscr();
	if(!fp)
	{
		cout<<"ERROR!!! FILE COULD NOT BE OPEN ";
		getch();
		return;
	}

	cout<<"\n\n\t\t\tCANDIDATE LIST\n";
	cout<<"=======================================================================\n";
	cout<<"\tROLL NO"<<setw(15)<<"Name"<<setw(15)<<"F NAME"<<setw(15)<<"STREAM\n";
	cout<<"=======================================================================\n";

	while(fp.read((char*)&cn,sizeof(candidates)))
	{
		cn.report();
	}

	fp.close();
	getch();
}


//**************************************************************************
//            FUNCTION TO READ SPECIFIC RECORD FROM FILE
//**************************************************************************


void displa_rec()
{
     char n[10],ch;
     do
     {
     clrscr();
     cout<<"\n\n\tPLEASE ENTER THE COLLEGE ROLL NUMBER ";
     gets(n);
     searching();
     clrscr();
     cout<<"\nCANDIDATE DETAILS\n";
     int flag=0;
     fp.open("crecord.dat",ios::in);
     while(fp.read((char*)&cn,sizeof(candidates)))
     {
	if(strcmpi(cn.retcrn(),n)==0)
	{
	   cn.show();
	   flag=1;
	}
     }
     fp.close();
     if(flag==0)
     cout<<"\n\nRECORD DOES NOT EXIST.";
     cout<<"\n\nDO YOU WANT TO SEARCH MORE RECORDS ..(Y/N) ?";
     cin>>ch;
     }
     while(ch=='y'||ch=='Y');
     getch();
}

//**************************************************************************
//         FUNCTION TO MODIFY RECORD OF CANDIDATE IN FILE
//**************************************************************************


void modify_rec()
{
     char n[10],ch,c1;
     int found=0;
     do
     {
     clrscr();
     cout<<"\n\n\tMODIFY CANDIDATE REOCORD.... ";
     cout<<"\n\n\tENTER THE COLLEGE ROLL NUMBER OF CANDIDATE.";
     cin>>n;
     searching();
     clrscr();
     fp.open("crecord.dat",ios::in|ios::out);
     while(fp.read((char*)&cn,sizeof(candidates)) && found==0)
     {
	if(strcmpi(cn.retcrn(),n)==0)
	{
	   cn.show();
	   cout<<"\nDo you want to modify this record (y/n): ";
	   cin>>c1;
	   if(c1=='y'||c1=='Y')
	   {
		clrscr();
		cout<<"\nENTER THE NEW DETAILS OF CANDIDATE"<<endl;
		cn.modify();
		int pos=-1*sizeof(cn);
		fp.seekp(pos,ios::cur);
		fp.write((char*)&cn,sizeof(candidates));
		searching();
		clrscr();
		cout<<"\n\n\t RECORD MODIFIED";
		found=1;
	   }
	   else
		return;
	}
     }
     fp.close();
     if(found==0)
     cout<<"\n\n RECORD NOT FOUND ";
     cout<<"\n\nDO YOU WANT TO MODIFIY MORE RECORDS ..(Y/N) ?";
     cin>>ch;
     }
     while(ch=='y'||ch=='Y');
     getch();
}

//**************************************************************************
//       FUNCTION TO DELETE RECORD OF CANDIDATE FROM FILE
//**************************************************************************

void delete_rec()
{
     char n[10],ch;
     int flag=0;
     do
     {
     clrscr();
     cout<<"\n\n\n\tDELETE CANDIDATE RECORD";
     cout<<"\n\nENTER THE COLLEGE ROLL NUMBER OF THE CANDIDATE YOU WANT TO DELETE: ";
     cin>>n;
     searching();
     clrscr();
     fp.open("crecord.dat",ios::in|ios::out);
     fstream fp2;
     fp2.open("crecord1.dat",ios::out);
     fp.seekg(0,ios::beg);
     while(fp.read((char*)&cn,sizeof(candidates)))
     {
	if(strcmpi(cn.retcrn(),n)!=0)
	fp2.write((char*)&cn,sizeof(candidates));
	else
	flag=1;
     }
     fp2.close();
     fp.close();
     remove("crecord.dat");
     rename("crecord1.dat","crecord.dat");
     if(flag==1)
     cout<<"\n\n\tRECORD DELETED";
     else
     cout<<"\n\nRECORD NOT FOUND";
     cout<<"\n\nDO YOU WANT TO DELETE MORE RECORDS ..(Y/N) ?";
     cin>>ch;
     }
     while(ch=='y'||ch=='Y');
     getch();
}

//**************************************************************************
//                        FUNCTION FOR QUIZ
//**************************************************************************

void quiz()
{
int n;char t;
do
{
clrscr();
textcolor(YELLOW+BLINK);
textbackground(GREEN);
gotoxy(10,3);
cprintf("WELCOME TO APTITUDE TEST ZONE");
textcolor(YELLOW);
textbackground(BLACK);
gotoxy(10,8);
cprintf("PRESS 1. GENERAL KNOWLEGE TEST ");
gotoxy(10,10);
cprintf("PRESS 2. NUMERICAL ABILITY TEST\n");
gotoxy(10,12);
cprintf("PRESS 3. ENGLISH QUIZ ");
gotoxy(10,14);
cprintf("PRESS 4. C++ QUIZ ");
gotoxy(10,16);
cprintf("PRESS 5. RETURN TO THE MAIN MENU ");
gotoxy(10,18);
cprintf("NOW ENTER CHOICE ");
cin>>n;
switch(n)
{
  case 1:           opt1();            break;
  case 2:           opt2();            break;
  case 3:           opt3();            break;
  case 4:           opt4();            break;
  case 5:           return;
  default:          clrscr();          cout<<"\n\n\nNO TEST EXISTS ";
}
cout<<"\n\nDo you want to give the test again (y/n) ?";
cin>>t;
}
while(t=='y'||t=='Y');
if(t!='y'||t!='Y')
{
return;
}
}

//**************************************************************************
//                      FUNCTION FOR QUIZ-OPTION 1
//**************************************************************************

void opt1()
{
  clrscr();
  int x;
  x=0;
  char ch[100],ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10;
  textcolor(YELLOW);
  cprintf("\n\n\n		Guest Enter Your Name\n\n");
  cin>>ch;
  clrscr();
  textcolor(YELLOW+BLINK);
  cprintf("		\n\nWelcome  ");
  cout<<"         \n"<<ch;
  textcolor(YELLOW);
  cprintf("    \n\n Welcome to QUIZ SHOW   All the Best !!!!\n ");
  cout<<"  \n\n Enter answer in form of  'a'  ,  'b'  and  'c'   only.";
  clrscr();
  cout<<" \n\n       Saka Era was founded by ? \n \n a.  Pulakesin-II  b.  Kanishka c.  Harsha     ";
  cin>>ch1;
  if(ch1=='b'||ch1=='B')
  {
     x=x+10;
     cout<<" \n \n Good Job. Your score is-> "<<x;
  }
  else
  {
  cout<<"\n \n Sorry wrong answer.";
  cout<<"\n\n Right option is 'b'";
  }
  getch();
  clrscr();
  cout<<"   \n\n  The capital city of the Pallavas was  ?  \n\n a.  Nepal  b. Kanchipuram  c. Madurai      ";
  cin>>ch2;
  if(ch2=='b'||ch2=='B')
  {
     x=x+10;
     cout<<"\n\n Good Job.Your score is ->"<<x;
  }
  else
  {
  cout<<"\n\nSorry wrong answer.";
  cout<<"\n\n Right option is 'b'";
  }
  getch();
  clrscr();
  cout<<"   \n\n  What is called as ' THE LAND OF RISING SUN'?  \n \n a.  Chicago  b.  Japan  c. Tibet     ";
  cin>>ch3;
  if(ch3=='b'||ch3=='B')
  {
     x=x+10;
     cout<<"\n \n Good Job.Your score is-> "<<x;
  }
  else
  {
  cout<<"\n\n Sorry wrong answer.";
  cout<<"\n\n Right option is 'b'";
  }
  getch();
  clrscr();
  cout<<"   \n\n Computer follows a simple principle called GIGO which means: ?";
  cout<<" \n\n   a.  Garbage in garbage out  b.  Garbage input good output  c.  Good input good output";
  cin>>ch4;
  if(ch4=='a'||ch4=='A')
  {
     x=x+10;
     cout<<"\n\n Your score is-> "<<x;
  }
  else
  {
  cout<<"\n\n Sorry wrong answer.";
  cout<<"\n\n Right option is 'a'";
  }
  getch();
  clrscr();
  cout<<"   \n\n  Name the process of production of energy in the Sun?\n\n  a.  Radioactivity b. Nuclear fission c. Nuclear fusion    ";
  cin>>ch5;
  if(ch5=='c'||ch5=='C')
  {
     x=x+10;
     cout<<"\n \nYour score is-> "<<x;
  }
  else
  {
  cout<<"\n\nSorry wrong answer.";
  cout<<"\n\n Right option is 'c'";
  }
  getch();
  clrscr();
  cout<<"	\n\n Who invented the ball-point pen: ?   \n\n a. Lazzlo Biro  b.  Curie c. Newton    ";
  cin>>ch6;
  if(ch6=='a'||ch6=='A')
  {
     x=x+10;
     cout<<"\n\nYour score is-> "<<x;
  }
  else
  {
  cout<<"\n\n Sorry wrong answer.";
  cout<<"\n\n Right option is 'a'";
  }
  getch();
  clrscr();
  cout<<" \n\n  Who recently created 15 sixes record in ODI series? \n\n a. Shane Watson  b. M.S.Dhoni c. Herschelle Gibbs    ";
  cin>>ch7;
  if(ch7=='a'||ch7=='A')
  {
     x=x+10;
     cout<<"\n\n Your score is-> "<<x;
  }
  else
  {
  cout<<"\n\n Sorry wrong answer.";
  cout<<"\n\n Right option is 'a'";
  }
  getch();
  clrscr();
  cout<<"   \n\n  What is called as ' THE LAND OF WHITE ELEPHANTS'?  \n\n a.  Bangladesh  b.Thailand  c.India    ";
  cin>>ch8;
  if(ch8=='b'||ch8=='B')
  {
     x=x+10;
     cout<<" \n\n Your score is-> "<<x;
  }
  else
  {
  cout<<"\n\nSorry wrong answer.";
  cout<<"\n\n Right option is 'b'";
  }
  getch();
  clrscr();
  cout<<"\n\n  Which of the following is not correctly matched? \n\n  a. Bhangra-Punjab b. Bihu-Nagaland  c. Garba-Gujarat     ";
  cin>>ch9;
  if(ch9=='b'||ch9=='B')
  {
     x=x+10;
     cout<<"\n\n Your score is-> "<<x;
  }
  else
  {
  cout<<"\n\nSorry wrong answer.";
  cout<<"\n\n Right option is 'b'";
  }
  getch();
  clrscr();
  cout<<"     \n\n   The metal constituent of chlorophyll is ? \n \n   a.  Potassium  b. Iron c. Magnesium     ";
  cin>>ch10;
  if(ch10=='c'||ch10=='C')
  {
     x=x+10;
     cout<<"\n\n Your score is-> "<<x;
  }
  else
  {
  cout<<"\n\nSorry wrong answer.";
  cout<<"\n\n Right option is 'c'";
  }
  getch();
  clrscr();
  if(x==100)
  cout<<"\n\n  No cheating...... You have done this earlier also.\n ";
  if(x==90)
  cout<<"\n \n You are extremely intelligent Your Score is 90";
  if(x==80)
  cout<<"\n \n You are intelligent Your Score is 80";
  if(50==x||x==70||x==60)
  cout<<"\n \n You are average     Your Score is \n"<<x<<"\n \nBetter luck next time\n ";
  else if(x<=40)
  cout<<"\n\n No use........ Not even 5 questions right\n\n";
}

//**************************************************************************
//                       FUNCTION FOR QUIZ-OPTION 2
//**************************************************************************

void opt2()
{
  clrscr();
  int x=0;
  char ch1[100],ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10,ch11;
  textcolor(YELLOW);
  cprintf("\n\n\n		Guest Enter Your Name\n\n");
  cin>>ch1;
  clrscr();
  textcolor(YELLOW+BLINK);
  cprintf("		\n\nWelcome  ");
  cout<<"         \n"<<ch1;
  textcolor(YELLOW);
  cprintf("    \n\n Welcome to QUIZ SHOW   All the Best. May you come out with flying colors.\n ");
  cout<<"  \n\n Enter answer in form of  'a'  ,  'b'  and  'c'   only.";
  clrscr();
  cout<<"\n\n\t\tQuestion 1:\nIf r=5z then 15z=3y, then r=?\n\n" ;
  cout<<"\n\t(a)y\n\t(b)2y\n\t(c)5y\n\t(d)10y\n";
  cin>>ch2;
  if(ch2=='a'||ch2=='A')
  {
     x=x+10;
     cout<<"\n\nGood job. Your score is "<<x;
  }
  else
  {
  cout<<"\n\nSorry wrong answer.";
  cout<<"\n\n Right option is 'a'";
  }
  getch();
  clrscr();
  cout<<"\n\n\t\tQuestion 2:\nWhat is 35% of a number if 12 is 15% of a number?\n\n" ;
  cout<<"\n\n\t(a)5\n\t(b)12\n\t(c)28\n\t(d)33\n";
  cin>>ch3;
  if(ch3=='c'||ch3=='C')
  {
     x=x+10;
     cout<<"\n\nGood job. Your score is "<<x;
  }
  else
  {
  cout<<"\n\nSorry wrong choice.";
  cout<<"\n\n Right option is 'c'";
  }
  getch();
  clrscr();
  cout<<"\n\n\t\tQuestion 3:\nIf 8x+5x+2x+4x=114, then 5x+3=?\n\n";
  cout<<"\n\n\t(a)12\n\t(b)25\n\t(c)33\n\t(d)47\n";
  cin>>ch4;
  if(ch4=='c'||ch4=='C')
  {
     x=x+10;
     cout<<"\n\nGood going. Your score is "<<x;
  }
  else
  {
  cout<<"\n\nOops. You went wrong. Good Luck for the next question.";
  cout<<"\n\n Right option is 'c'";
  }
  getch();
  clrscr();
  cout<<"\n\n\t\tQuestion 4:\nThe sum of ages of 5 children born at the intervals of 3 years each is 50 years. What is the age of the youngest child?\n\n";
  cout<<"\n\n\t(a)4 yrs\n\t(b)8 yrs\n\t(c)10 yrs\n\t(d)None of these.\n";
  cin>>ch5;
  if(ch5=='a'||ch5=='A')
  {
     x=x+10;
     cout<<"\n\nYour score is "<<x<<" Congrats. :)";
  }
  else
  {
  cout<<"\n\nLooks like you went wrong somewhere. Wrong answer!";
  cout<<"\n\n Right option is 'a'";
  }
  getch();
  clrscr();
  cout<<"\n\n\t\tQuestion 5:\nA vendor bought toffees at 6 for a rupee. How many a rupee must he sell to gain a profit of 20%?\n\n";
  cout<<"\n\n\t(a)3\n\t(b)4\n\t(c)5\n\t(d)6\n";
  cin>>ch6;
  if(ch6=='c'||ch6=='C')
  {
     x=x+10;
     cout<<"\n\nCongo. Your score is "<<x;
  }
  else
  {
  cout<<"\n\nYou are wrong.";
  cout<<"\n\n Right option is 'c'";
  }
  getch();
  clrscr();
  cout<<"\n\n\t\tQuestion 6:\nA is thrice as good as B and finishes a job in 60 days less than B. Working together they can do it in?\n\n";
  cout<<"\n\n\t(a)20 days\n\t(b)22.5 days\n\t(c)25 days\n\t(d)30 days\n";
  cin>>ch7;
  if(ch7=='b'||ch7=='B')
  {
     x=x+10;
     cout<<"\n\nYou are right. Your score is "<<x;
  }
  else
  {
  cout<<"\n\nSomething went wrong. Sorry. Wrong choice.";
  cout<<"\n\n Right option is 'b'";
  }
  getch();
  clrscr();
  cout<<"\n\n\t\tQuestion 7:\nA person crosses a 600m long street in 5 minutes. What is his speed in km per hour?\n\n";
  cout<<"\n\n\t(a)3.6\n\t(b)7.2\n\t(c)8.4\n\t(d)10\n";
  cin>>ch8;
  if(ch8=='b'||ch8=='B')
  {
     x=x+10;
     cout<<"\n\nYou are right!"  ;
  }
  else
  {
  cout<<"\n\nWrong answer";
  cout<<"\n\n Right option is 'b'";
  }
  getch();
  clrscr();
  cout<<"\n\n\t\tQuestion 8:\nA father said to his son,'I was as old as you are at the present at the time of your birth'. If the father's age is 38 years now, the son's age 5 years back was?\n\n";
  cout<<"\n\n\t(a)14 yrs\n\t(b)19 yrs\n\t(c)33 yrs\n\t(d)38 yrs\n";
  cin>>ch9;
  if(ch9=='a'||ch9=='A')
  {
     x=x+10;
     cout<<"\n\nWhoa! You are right! Good going.";
  }
  else
  {
  cout<<"\n\nOops. Wrong answer";
  cout<<"\n\n Right option is 'a'";
  }
  getch();
  clrscr();
  cout<<"\n\n\tQuestion 9:\nWhich of the following is not a prime no.?\n\n";
  cout<<"\n\n\t(a)31\n\t(b)61\n\t(c)71\n\t(d)91\n";
  cin>>ch10;
  if(ch10=='d'||ch10=='D')
  {
     x=x+10;
     cout<<"\n\nGood.Right answer.";
  }
  else
  {
  cout<<"\n\nWrong answer";
  cout<<"\n\n Right option is 'd'";
  }
  getch();
  clrscr();
  cout<<"\n\n\t\tQuestion 10:\nIt was Sunday on Jan 1, 2006. What was the day of the week Jan 1, 2010?";
  cout<<"\n\n\t(a)Sunday\n\t(b)Saturday\n\t(c)Friday\n\t(d)Wednesday\n";
  cin>>ch11;
  if(ch11=='c'||ch11=='C')
  {
     x=x+10;
     cout<<"\n\nWell done. Your score is"<<x;
  }
  else
  {
  cout<<"\n\nWrong answer";
  cout<<"\n\n Right option is 'c'";
  }
  getch();
  clrscr();
  switch(x)
  {
  case 100 : cout<<"Great if done on the first chance.Score 100. \n\nBut you are a cheater if you are repeating";   break;
  case 90 : cout<<"You are extremely intelligent. Score=90";break;
  case 80: cout<<"You are very intelligent. You have a score of 80"; break;
  case 70:
  case 60:
  case 50:
  case 40:
  cout<<"You are just an average student with a score of "<<x; break;
  case 30:
  case 20:
  case 10:
  case 0:
  cout<<"Not even 4 questions correct. No use!";
  default: cout<<"Wrong";
  }
}

//**************************************************************************
//                       FUNCTION FOR QUIZ-OPTION 3
//**************************************************************************

void opt3()
{
  clrscr();
  int x;
  x=0;
  char ch1[100],ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10,ch11;
  textcolor(YELLOW);
  cprintf("\n\n\n          Guest enter your name\n\n");
  cin>>ch1;
  clrscr();
  textcolor(YELLOW+BLINK);
  cprintf("              \n\n welcome");
  cout<<"               \n"<<ch1;
  textcolor(YELLOW);
  cprintf("   \n\n welcome to English quiz show  ALL THE BEST !!!\n");
  cout<<" \n\n enter the answer in form of 'a' , 'b', 'c'and 'd'only.";
  cout<<"\n\n  study hard,________you will fail the test? \n \n a.if b.or c.unless d.and.";
  cin>>ch2;
  if(ch2=='b'||ch2=='B')
  {
     x=x+10;
     cout<<"\n \n Good job.your score is->"<<x;
  }
  else
  {
  cout<<"\n \n sorry wrong answer.";
  cout<<"\n\n Right option is 'b'";
  }
  getch();
  clrscr();
  cout<<"\n \n  our baseball team____________nine players? \n \n a. has b. had c. had d. is.";
  cin>>ch3;
  if(ch3=='a'||ch3=='A')
  {
     x=x+10;
     cout<<"\n \n good job. your choice is ->"<<x;
  }
  else
  {
  cout<<"\n \n sorry wrong answer.";
  cout<<"\n\n Right option is 'a'";
  }
  getch();
  clrscr();
  cout<<"\n \n Ask him_____________he likes it? \n \n a.if b.that c.though .";
  cin>>ch4;
  if(ch4=='a'||ch4=='A')
  {
     x=x+10;
     cout<<" \n \n your score is -> "<<x;
  }
  else
  {
  cout<<" \n \n sorry wrong answer.";
  cout<<"\n\n Right option is 'a'";
  }
  getch();
  clrscr();
  cout<<" \n \n I___________that woman very well? \n \n a. know b. and knowing.";
  cin>>ch5;
  if(ch5== 'a'||ch5=='A')
  {
     x=x+10;
     cout<<" \n\n your score is-> "<<x;
  }
  else
  {
  cout<<" \n \n sorry wrong answer.";
  cout<<"\n\n Right option is 'a'";
  }
  getch();
  clrscr();
  cout<<" \n \n to understand it is one thing,to teach it is quite ________? \n \n a.other b. the other c. another d. the another.";
  cin>>ch6;
  if(ch6=='c'||ch6=='C')
  {
     x=x+10;
     cout<< "\n \n your score is -> "<<x;
  }
  else
  {
  cout<<"\n \n sorry wrong answer.";
  cout<<"\n\n Right option is 'c'";
  }
  getch();
  clrscr();
  cout<<" \n \n I'd like to make________with you? \n \n a. friend b.the friend c. a friend d. friends.";
  cin>>ch7;
  if(ch7=='d'||ch7=='D')
  {
     x=x+10;
     cout<<"\n \n your score is ->"<<x;
  }
  else
  {
  cout<<"\n \n sory wrong answer.";
  cout<<"\n\n Right option is 'd'";
  }
  getch();
  clrscr();
  cout<< "\n \n My younger brother has just_________a letter from his girlfriend? \n \n a. receive b. received c. receiving d.to receive.";
  cin>>ch8;
  if(ch8=='b'||ch8=='A')
  {
     x=x+10;
     cout<< " \n \n your score is -> "<<x;
  }
  else
  {
  cout<<" \n \n sorry wrong answer.";
  cout<<"\n\n Right option is 'a'";
  }
  getch();
  clrscr();
  cout<<" \n \n _____________those men are handsome? \n \n a. all b. every c.everyone.";
  cin>>ch9;
  if(ch9=='a'||ch9=='A')
  {
     x=x+10;
     cout<<" \n \n your score is ->"<<x;
  }
  else
  {
  cout<<" \n \n sorry wrong answer.";
  cout<<"\n\n Right option is 'a'";
  }
  getch();
  clrscr();
  cout<< "\n \n My house is as _____________as your house? \n \n a. bigger b.big c. biggest c. the biggest.";
  cin>>ch10;
  if(ch10=='b'||ch10=='B')
  {
     x=x+10;
     cout<< "\n \n your score is -> "<<x;
  }
  else
  {
  cout<<" \n \n sorry wrong answer.";
  cout<<"\n\n Right option is 'b'";
  }
  getch();
  clrscr();
  cout<<" \n \n would you mind _____________the window? \n \n a.to close b.close c.closing.";
  cin>>ch11;
  if(ch11=='c'||ch11=='C')
  {
     x=x+10;
     cout<<" \n \n your score is ->"<<x;
  }
  else
  {
  cout<<"\n \n sorry wrong answer.";
  cout<<"\n\n Right option is 'c'";
  }
  getch();
  clrscr();
  if(x==100)
  cout<<"\n \n no cheating ......you have done this earlier also \n";
  if(x==90)
  cout<<" \n \n you are extremely intelligent your score is 90 \n";
  if(x==80)
  cout<<"you are intelligent your score is 80 \n";
  if(50==x||x==70||x==60)
  cout<<" \n \n you are average your score is \n" <<x<<" \n \n Better luck next time \n";
  else if(x<=40)
  cout<< "\n\n No use........Not even 5 questions right \n \n";
}

//**************************************************************************
//                       FUNCTION FOR QUIZ-OPTION 4
//**************************************************************************

void opt4()
{
  clrscr();
  int x=0;
  char ch1[100],ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10,ch11;
  textcolor(YELLOW);
  cprintf("\n\n\n		Guest Enter Your Name\n\n");
  cin>>ch1;
  clrscr();
  textcolor(YELLOW+BLINK);
  cprintf("		\n\nWelcome  ");
  cout<<"         \n"<<ch1;
  textcolor(YELLOW);
  cprintf("    \n\n Welcome to QUIZ SHOW   All the Best. May you come out with flying colors.\n ");
  cout<<"  \n\n Enter answer in form of  'a'  ,  'b'  and  'c'   only.";
  clrscr();
  cout<<"\n\n\t\tQuestion 1:A class is ___ datatype.\n\n\n" ;
  cout<<"\n\t(a)Abstract\n\t(b)Derived\n\t(c)User-Define\n\t(d)All of these\n";
  cin>>ch2;
  if(ch2=='a'||ch2=='A')
  {
     x=x+10;
     cout<<"\n\nGood job. Your score is "<<x;
  }
  else
  {
  cout<<"\n\nSorry wrong answer.";
  cout<<"\n\n Right option is 'a'";
  }
  getch();
  clrscr();
  cout<<"\n\n\t\tQuestion 2:An object is ___\n\n\n" ;
  cout<<"\n\n\t(a)A variable of class datatype\n\t(b)Same as class\n\t(c)just like a global variable\n\t(d)Collections of data member & member function\n";
  cin>>ch3;
  if(ch3=='a'||ch3=='A')
  {
     x=x+10;
     cout<<"\n\nGood job. Your score is "<<x;
  }
  else
  {
  cout<<"\n\nSorry wrong choice.";
  cout<<"\n\n Right option is 'a'";
  }
  getch();
  clrscr();
  cout<<"\n\n\t\tQuestion 3:What are cin & cout?\n\n";
  cout<<"\n\n\t(a)pointers\n\t(b)functions\n\t(c)operator\n\t(d)stream object\n";
  cin>>ch4;
  if(ch4=='d'||ch4=='D')
  {
     x=x+10;
     cout<<"\n\nGood going. Your score is "<<x;
  }
  else
  {
  cout<<"\n\nOops. You went wrong. Good Luck for the next question.";
  cout<<"\n\n Right option is 'd'";
  }
  getch();
  clrscr();
  cout<<"\n\n\t\tQuestion 4:Which header file must be include for cin & cout?\n\n";
  cout<<"\n\n\t(a)stdio.h\n\t(b)conio.h\n\t(c)iostream.h\n\t(d)None of these.\n";
  cin>>ch5;
  if(ch5=='c'||ch5=='C')
  {
  x=x+10;
  cout<<"\n\nYour score is "<<x<<" Congrats. :)";
  }
  else
  {
  cout<<"\n\nLooks like you went wrong somewhere. Wrong answer!";
  cout<<"\n\n Right option is 'c'";
  }
  getch();
  clrscr();
  cout<<"\n\n\t\tQuestion 5:Ability of an operator to take different forms is known as ___\n\n";
  cout<<"\n\n\t(a)polymorphism\n\t(b)encapsulation\n\t(c)overloding\n\t(d)inheritane\n";
  cin>>ch6;
  if(ch6=='a'||ch6=='A')
  {
     x=x+10;
     cout<<"\n\nCongo. Your score is "<<x;
  }
  else
  {
  cout<<"\n\nYou are wrong.";
  cout<<"\n\n Right option is 'a'";
  }
  getch();
  clrscr();
  cout<<"\n\n\t\tQuestion 6:Which is an eantry controlled loop\n\n";
  cout<<"\n\n\t(a)do-while loop\n\t(b)while loop\n\t(c)for loop\n\t(d)both b & c\n";
  cin>>ch7;
  if(ch7=='d'||ch7=='D')
  {
     x=x+10;
     cout<<"\n\nYou are right. Your score is "<<x;
  }
  else
  {
  cout<<"\n\nSomething went wrong. Sorry. Wrong choice.";
  cout<<"\n\n Right option is 'd'";
  }
  getch();
  clrscr();
  cout<<"\n\n\t\tQuestion 7:for(int i=0;i<=10;i++);\n What is the value of i in this loop?\n\n";
  cout<<"\n\n\t(a)some garbage value\n\t(b)it will give compilation error.\n\t(c)11\n\t(d)10\n";
  cin>>ch8;
  if(ch8=='c'||ch8=='C')
  {
     x=x+10;
     cout<<"\n\nYou are right!"  ;
  }
  else
  {
  cout<<"\n\nWrong answer";
  cout<<"\n\n Right option is 'c'";
  }
  getch();
  clrscr();
  cout<<"\n\n\t\tQuestion 8:what is the header file of exit(0); ?\n\n";
  cout<<"\n\n\t(a)process.h\n\t(b)stdlib.h\n\t(c)dos.h\n\t(d)both a & b\n";
  cin>>ch9;
  if(ch9=='d'||ch9=='D')
  {
     x=x+10;
     cout<<"\n\nWhoa! You are right! Good going.";
  }
  else
  {
  cout<<"\n\nOops. Wrong answer";
  cout<<"\n\n Right option is 'd'";
  }
  getch();
  clrscr();
  cout<<"\n\n\tQuestion 9:What is the header file for sound?\n\n";
  cout<<"\n\n\t(a)dos.h\n\t(b)graphics.h\n\t(c)process.h\n\t(d)alloc.h\n";
  cin>>ch10;
  if(ch10=='a'||ch10=='A')
  {
     x=x+10;
     cout<<"\n\nGood.Right answer.";
  }
  else
  {
  cout<<"\n\nWrong answer";
  cout<<"\n\n Right option is 'a'";
  }
  getch();
  clrscr();
  cout<<"\n\n\t\tQuestion 10:What is the ASCII code for K ? \n";
  cout<<"\n\n\t(a)107\n\t(b)75\n\t(c)79\n\t(d)109\n";
  cin>>ch11;
  if(ch11=='b'||ch11=='B')
  {
     x=x+10;
     cout<<"\n\nWell done. Your score is"<<x;
  }
  else
  {
  cout<<"\n\nWrong answer";
  cout<<"\n\n Right option is 'b'";
  }
  getch();
  clrscr();
  switch(x)
  {
  case 100 : cout<<"Great if done on the first chance.Score 100. \n\nBut you are a cheater if you are repeating";   break;
  case 90 : cout<<"You are extremely intelligent. Score=90";break;
  case 80: cout<<"You are very intelligent. You have a score of 80"; break;
  case 70:
  case 60:
  case 50:
  case 40:
  cout<<"You are just an average student with a score of "<<x; break;
  case 30:
  case 20:
  case 10:
  case 0:
  cout<<"Not even 4 questions correct. No use!";
  default: cout<<"Wrong";
  }
}

//**************************************************************************
//                       FUNCTION FOR MAIN MENU
//**************************************************************************
void main_menu()
{
char no;
do
{
clrscr();
textcolor(YELLOW+BLINK);
textbackground(CYAN);
gotoxy(30,4);
cprintf(" MAIN MENU ");
textcolor(YELLOW);
textbackground(BLACK);
gotoxy(20,6);
cprintf("01. INSERT PORTFOLIO OF CANDIDATES.");
gotoxy(20,8);
cprintf("02. MODIFY RECORDS OF CANDIDATES.");
gotoxy(20,10);
cprintf("03. VIEW RECORDS OF ALL CANDIDATES");
gotoxy(20,12);
cprintf("04. VIEW RECORDS OF SPECIFIC CANDIDATES");
gotoxy(20,14);
cprintf("05. DELETE PORTFOLIO (RECORDS) OF CANDIDATES.");
gotoxy(20,16);
cprintf("06. APTITUDE TEST (QUIZ).");
gotoxy(20,18);
cprintf("07. LOGOUT (EXIT) FROM YOUR ACCOUNT.");
gotoxy(20,20);
cprintf("Please Select Your Option (1-7) ");
no=getch();
switch(no)
{
case '1':         clrscr();       write();      	  break;
case '2':	  clrscr();       modify_rec();           break;
case '3':         clrscr();       displa_all();           break;
case '4':         clrscr();       displa_rec();           break;
case '5':	  clrscr();       delete_rec();           break;
case '6':	  clrscr();       quiz();                 break;
case '7':	  exit(0);
default :       cout<<"\a";
}
}
while(no!='7');
}

//**************************************************************************
//                      FUNCTION FOR PROCESSING
//**************************************************************************

void process()
{ int x,y;
gph();
cleardevice();
x=getmaxx()/2;
y=getmaxy()/2;
settextstyle(TRIPLEX_FONT, HORIZ_DIR, 4);
setbkcolor(rand());
setcolor(RED);
outtextxy(230,150,"PROCESSING");
setcolor(rand());
for(int i=5;i<8;i++)
{
circle(x,y,i);
delay(200);
} setcolor(rand());
for(int j=10;j<13;j++)
{
circle(x,y,j);
delay(200);
} setcolor(rand());
for(int k=14;k<17;k++)
{
circle(x,y,k);
delay(200);
}
setcolor(rand());
for(int l=18;l<21;l++)
{
circle(x,y,l);
delay(200);
}
setcolor(rand());
for(int m=22;m<25;m++)
{
circle(x,y,m);
delay(200);
}
setcolor(rand());
for(int n=26;n<29;n++)
{
circle(x,y,n);
delay(200);
}
closegraph();
}
//**************************************************************************
//                      FUNCTION FOR ID & PASSWORD
//**************************************************************************

void pass()
{
 int tri=0;
 while(1)
 {
 char user[6],pass[6];
 clrscr();
 textcolor(YELLOW);
 gotoxy(25,10);
 cprintf("User name     ");
 cin>>user;
 gotoxy(25,12);
 cprintf("Password      ");

 for(int l=0;l<4;l++)
 {
  pass[l]=getch();
  cout<<"*";
 }
 process();
 pass[5]=getch();
 int a;
 a=strcmp(user,"admin");
 if(pass[0]=='p'&&pass[1]=='a'&&pass[2]=='s' && pass[3]=='s'&&a==0)
 break;
 else
 {
 gotoxy(35,20);
 cprintf("Invalid user name or password!");
 sound(300);
 delay(500);
 nosound();
 getch();
 }
 tri++;
  if(tri>2)
  {
   clrscr();
   gotoxy(35,15);
   cprintf("Access denied !");
   getch();
   exit(0);
  }
 }
}
//**************************************************************************
//            	     THE MAIN FUNCTION OF PROGRAM
//**************************************************************************

void main()
{
clrscr();
welcome();
pass();
main_menu();
getch();
}

//**************************************************************************
//    			END OF PROJECT
//**************************************************************************