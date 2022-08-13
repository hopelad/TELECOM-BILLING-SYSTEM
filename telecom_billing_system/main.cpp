//LIBRARIES
 #include<iostream>
 #include<conio.h>
 #include<fstream>
 #include<math.h>
 #include<string.h>
 #include<stdio.h>
 #include<windows.h>
 #include<iomanip>
 #include<stdlib.h>
 #include<time.h>

 using namespace std;

//FUNCTION FOR THE AXIS (GOTOXY)

 void gotoxy(int x, int y)
 {
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
//FUNCTIONZ TO CLEAR CONSOLE WINDOWZ

void clearWindow()
{
     int i,j;
     for(i=15; i<65; i++)
     {
           for(j=0; j<25; j++)
           {
                gotoxy(i,j);
                cout<<" ";
           }
     }
    return;
}

void clearWindowz()
{
     int i,j;
     for(i=1; i<80; i++)
     {
           for(j=0; j<25; j++)
           {
                 gotoxy(i,j);
                 printf(" ");
           }
     }
     return;
}

//MAIN CLASS

  class Tele
  {
        public:
               char fname[12], lname[12],gender[10],passw[30];
               float bill;
               int accNo,phno;
        private:
                int i;
        public:
        Tele()
        {
            fname[0]='\0';//default constructor to initialize empty character array
            lname[0]='\0';
            gender[0]='\0';
            bill=0.00;
            accNo=0;
            phno=0;
        }
        // ADMIN FUNCTION
        char openAcc()
        {
             clearWindow();
             int i;
             srand(time(NULL));
             accNo = rand() % 100 + 10;

             //Design section to get in box everything when opening account

             gotoxy(15,3); printf("\xC9"); // Left upper corner
             for(i=1;i<=48;i++) printf("\xCD"); // Upper horizontal line
             gotoxy(64,3); printf("\xBB"); // Right upper corner
             gotoxy(15,24); printf("\xC8"); // Lower left corner
             for(i=1;i<=48;i++) printf("\xCD"); // Lower horizontal line
             gotoxy(64,24); printf("\xBC"); // Lower right corner
             for(i=1;i<21;i++){ gotoxy(15,i+3); printf("\xBA");}// Left vertical
             for(i=1;i<21;i++){ gotoxy(64,i+3); printf("\xBA");}// Right vertical
             gotoxy(25,1); cout<<" <<< TELECOM BILLING SYSTEM >>>";
             gotoxy(19,4); cout<<" ADD RECORD ";
             gotoxy(18,7); cout<<" FIRST NAME : ";
             gotoxy(18,9); cout<<" LAST NAME : ";
             gotoxy(18,11); cout<<" GENDER  : ";
             gotoxy(18,13); cout<<" PHONE NUMBER  :";
             gotoxy(18,15); cout<<" BILL   : ";
             gotoxy(18,17); cout<<" ACCOUNT NUMBER : ";
             gotoxy(32,19); cout<<" * NOTE ";
             gotoxy(25,21); cout<<" USE UNDERSCORE FOR SPACES... ";
             gotoxy(36,7); cin>>fname;
             gotoxy(36,9); cin>>lname;
             gotoxy(36,11); cin>>gender;
             gotoxy(36,13); cin>>phno;
             gotoxy(36,15); cin>>bill;
             gotoxy(36,17); cout<<accNo;
             gotoxy(25,21); cout<<" ACCOUNT OPENED SUCCESSFULLY!";
             _getch();
        }

        void viewAcc1()
        {
             gotoxy(18,9); cout<<" FIRST NAME : ";
             gotoxy(18,11);cout<<" OTHER NAME : ";
             gotoxy(18,13);cout<<" PHONE NUMBER :";
             gotoxy(18,15);cout<<" GENDER :";
             gotoxy(18,17);cout<<" BILL  :";

             // SMALL ACCOUNT NUMBER BOX

             gotoxy(31,5); printf("%c",218); // Left Upper Corner
             gotoxy(48,5); printf("%c",191); // Right Upper Corner
             gotoxy(31,7); printf("%c",192); // Left Lower Corner
             gotoxy(48,7); printf("%c",217); // Right Lower Corner
             for(i=1;i<=16;i++) { gotoxy(31+i,5); printf("%c",196);}// Upper Horizontal
             for(i=1;i<=16;i++) { gotoxy(31+i,7); printf("%c",196);}// Lower Horizontal
             for(i=1;i<=1;i++) { gotoxy(30+i,6); printf("%c",179);}// Left Vertical
             for(i=1;i<=1;i++) { gotoxy(48,5+i); printf("%c",179);}// Right Vertical
             gotoxy(32,9);  cout<<fname;
             gotoxy(32,11); cout<<lname;
             gotoxy(32,13); cout<<phno;
             gotoxy(32,15); cout<<gender;
             gotoxy(32,17); cout<<bill;
             gotoxy(33,19); cout<<" STATUS ";
             gotoxy(32,6);  cout<<" ACCOUNT NO: ";
             gotoxy(44,6);  cout<<accNo;
        }

        void viewAllAcc()
        {
             int i, n;
             gotoxy(1,3); printf("\xC9"); // Upper left corner
             for(i=1;i<=76;i++) printf("\xCD"); // Upper left right horizontal
             gotoxy(78,3); printf("\xBB"); // Upper right corner
             gotoxy(1,24); printf("\xC8"); // Lower left corner
             for(i=1;i<=76;i++) printf("\xCD"); // Lower left right horizontal
             gotoxy(78,24); printf("\xBC"); // Lower right corner
             for(i=1;i<21;i++){ gotoxy(1,i+3); printf("\xBA");}// Left vertical
             for(i=1;i<21;i++){ gotoxy(78,i+3); printf("\xBA");}// Right vertical
            gotoxy(25,1); cout<<" <<< TELECOM BILLING SYSTEM >>>";
            gotoxy(5,4);  cout<<" VIEW ALL ACCOUNTS ";
            gotoxy(32,20); cout<<" STATUS ";
            for(i=1;i<=70;i++) { gotoxy(4+i,7); printf("%c",196); }
            gotoxy(4,6); cout<<" ACC_NO ";
            gotoxy(13,6); cout<<" FIRST_NAME ";
            gotoxy(26,6); cout<<" LAST_NAME ";
            gotoxy(37,6); cout<<" GENDER ";
            gotoxy(49,6); cout<<"PHONE NUMBER";
            gotoxy(65,6); cout<<" BILL";
            gotoxy(20,22); cout<<" PRESS ENTER TO GO BACK TO MAIN MENU... ";
            }

        void delviewAcc()
        {
             gotoxy(18,7);  cout<<" FIRST NAME : ";
             gotoxy(18,9);  cout<<" OTHER NAME : ";
             gotoxy(18,11); cout<<" GENDER : ";
             gotoxy(18,13); cout<<" PHONE NUMBER : ";
             gotoxy(18,15); cout<<" BILL : ";
             gotoxy(32,7);  cout<<fname;
             gotoxy(32,9);  cout<<lname;
             gotoxy(33,11); cout<<gender;
             gotoxy(40,13); cout<<accNo;
             gotoxy(52,15); cout<<bill;
             gotoxy(28,19); cout<<" **STATUS**";
             gotoxy(19,21); cout<<" DELETE THIS RECORD? [Y/N] : ";
        }

        void adminMenuGraphic()
        {
             gotoxy(16,5); printf("\xC9"); // Upper left corner
             for(i=1;i<=47;i++) printf("\xCD"); // Upper left right horizontal
             gotoxy(64,5); printf("\xBB"); // Upper right corner
             gotoxy(16,23); printf("\xC8"); // Lower left corner
             for(i=1;i<=47;i++) printf("\xCD"); // Lower left right horizontal
             gotoxy(64,23); printf("\xBC"); // Lower right corner
             for(i=1;i<18;i++){ gotoxy(16,i+5); printf("\xBA");}// Left vertical
             for(i=1;i<18;i++){ gotoxy(64,i+5); printf("\xBA");}// Right vertical
             gotoxy(16,19); printf("\xCC"); // Left inside lower corner
             for(i=1;i<=47;i++) printf("\xCD"); // Inside lower left right horizontal
             gotoxy(64,19); printf("\xB9"); // Right inside lower corner

        }

        void deleteRecordGraphic()
        {
             gotoxy(15,3); printf("\xC9"); // Upper left corner
             for(i=1;i<=48;i++) printf("\xCD"); // Upper left right horizontal
             gotoxy(64,3); printf("\xBB"); // Upper right corner
             gotoxy(15,24); printf("\xC8"); // Lower left corner
             for(i=1;i<=48;i++) printf("\xCD"); // Lower left right horizontal
             gotoxy(64,24); printf("\xBC"); // Lower right corner
             for(i=1;i<21;i++){ gotoxy(15,i+3); printf("\xBA"); } // Left vertical
             for(i=1;i<21;i++){ gotoxy(64,i+3); printf("\xBA"); }// Right vertical
             for(i=1;i<=44;i++) { gotoxy(17+i,4); printf("%c",196); } // Upper Horizontal
             for(i=1;i<=44;i++) { gotoxy(17+i,19); printf("%c",196); } // Middle horizontal
        }

        void displayRecordGraphic()
        {
             gotoxy(15,3); printf("\xC9"); // Upper left corner
             for(i=1;i<=48;i++) printf("\xCD"); // Upper left right horizontal
             gotoxy(64,3); printf("\xBB"); // Upper right corner
             gotoxy(15,24); printf("\xC8"); // Lower left corner
             for(i=1;i<=48;i++) printf("\xCD"); // Lower left right horizontal
             gotoxy(64,24); printf("\xBC"); // Lower right corner
             for(i=1;i<21;i++){ gotoxy(15,i+3); printf("\xBA"); } // Left vertical
             for(i=1;i<21;i++){ gotoxy(64,i+3); printf("\xBA"); }// Right vertical
             for(i=1;i<=44;i++) { gotoxy(17+i,4); printf("%c",196); } // Upper Horizontal
             for(i=1;i<=44;i++) { gotoxy(17+i,19); printf("%c",196); } // Middle horizontal
             for(i=1;i<=44;i++) { gotoxy(17+i,4); printf("%c",196); } // Upper Horizontal
             for(i=1;i<=44;i++) { gotoxy(17+i,19); printf("%c",196); } // Middle horizontal
        }

        void adminLoginGraphic()
        {
             gotoxy(20,3); printf("\xC9"); // Upper left corner
             for(i=1;i<=40;i++) printf("\xCD"); // Upper left right horizontal
             gotoxy(61,3); printf("\xBB"); // Upper right corner
             gotoxy(20,22); printf("\xC8"); // Lower left corner
             for(i=1;i<=40;i++) printf("\xCD"); // Lower left right horizontal
             gotoxy(61,22); printf("\xBC"); // Lower right corner
             for(i=1;i<19;i++) { gotoxy(20,i+3); printf("\xBA"); } // Left vertical
             for(i=1;i<19;i++) { gotoxy(61,i+3); printf("\xBA"); } // Right vertical
             gotoxy(20,7); printf("\xCC"); // Left inside upper corner
             for(i=1;i<=40;i++) printf("\xCD"); // Inside upper left right horizontal
             gotoxy(20,17); printf("\xCC"); // Left inside lower corner
             for(i=1;i<=40;i++) printf("\xCD"); // Inside lower left right horizontal
             gotoxy(61,7); printf("\xB9"); // Right inside upper corner
             gotoxy(61,17); printf("\xB9"); // Right inside lower corner
        }

        //TO box of main manu(sartting)

        void progressBarGraphic()
        {
             gotoxy(25,1); cout<<"<<< TELECOM BILLING SYSTEM >>>";
             gotoxy(8,3); printf("\xC9"); // Upper left corner
             for(i=1;i<=61;i++) printf("\xCD"); // Upper left right horizontal
             gotoxy(70,3); printf("\xBB"); // Upper right corner
             gotoxy(8,22); printf("\xC8"); // Lower left corner
             for(i=1;i<=61;i++) printf("\xCD");// Lower left right horizontal
             gotoxy(70,22); printf("\xBC"); // Lower right corner
             for(i=1;i<19;i++){ gotoxy(8,i+3); printf("\xBA"); } // Left vertical
             for(i=1;i<19;i++){ gotoxy(70,i+3); printf("\xBA"); }// Right vertical
             gotoxy(8,17); printf("\xCC"); // Left inside lower corner
             for(i=1;i<=61;i++) printf("\xCD"); // Inside lower left right horizontal
             gotoxy(70,17); printf("\xB9"); // Right inside lower corner
             gotoxy(35,17); cout<<" LOADING ";
        }

        void aboutProgrammerGraphic()
        {
             gotoxy(20,3); printf("\xC9"); // Upper left corner
             for(i=1;i<=40;i++) printf("\xCD"); // Upper left right horizontal
             gotoxy(61,3); printf("\xBB"); // Upper right corner
             gotoxy(20,22); printf("\xC8"); // Lower left corner
             for(i=1;i<=40;i++) printf("\xCD"); // Lower left right horizontal
             gotoxy(61,22); printf("\xBC"); // Lower right corner
             for(i=1;i<19;i++) { gotoxy(20,i+3); printf("\xBA"); } // Left vertical
             for(i=1;i<19;i++) { gotoxy(61,i+3); printf("\xBA"); } // Right vertical
             gotoxy(25,10); printf("\xC9"); // Upper left corner
             for(i=1;i<=30;i++) printf("\xCD"); // Upper left right horizontal
             gotoxy(55,10); printf("\xBB"); // Upper right corner
             gotoxy(25,14); printf("\xC8"); // Lower left corner
             for(i=1;i<=30;i++) printf("\xCD"); // Lower left right horizontal
             gotoxy(55,14); printf("\xBC"); // Lower right corner
             for(i=1;i<4;i++){ gotoxy(25,i+10); printf("\xBA"); } // Left vertical
             for(i=1;i<4;i++){ gotoxy(55,i+10); printf("\xBA"); } // Right vertical
        }

        void mainMenuGraphic()
        {
             gotoxy(21,5); cout<<"\xC9"; // Upper left corner
             for(i=1;i<=38;i++) cout<<"\xCD"; // Upper left right horizontal
             gotoxy(60,5); cout<<"\xBB"; // Upper right corner
             gotoxy(21,23); cout<<"\xC8"; // Lower left corner
             for(i=1;i<=38;i++) cout<<"\xCD"; // Lower left right horizontal
             gotoxy(60,23); cout<<"\xBC"; // Lower right corner
             for(i=1;i<18;i++){ gotoxy(21,i+5); cout<<"\xBA"; } // Left vertical
             for(i=1;i<18;i++){ gotoxy(60,i+5); cout<<"\xBA"; }// Right vertical
             gotoxy(21,19); cout<<"\xCC"; // Left inside lower corner
             for(i=1;i<=38;i++) cout<<"\xCD"; // Inside lower left right horizontal
             gotoxy(60,19); cout<<"\xB9"; // Right inside lower corner
        }

        void modifyRecordGraphic()
        {
             int i, n;
             clearWindow();
             gotoxy(1,3); printf("\xC9"); // Upper left corner
             for(i=1;i<=76;i++) printf("\xCD"); // Upper left right horizontal
             gotoxy(78,3); printf("\xBB"); // Upper right corner
             gotoxy(1,24); printf("\xC8"); // Lower left corner
             for(i=1;i<=76;i++) printf("\xCD"); // Lower left right horizontal
             gotoxy(78,24); printf("\xBC"); // Lower right corner
             for(i=1;i<21;i++){ gotoxy(1,i+3); printf("\xBA"); } // Left vertical
             for(i=1;i<21;i++){ gotoxy(78,i+3); printf("\xBA"); }// Right vertical
             for(i=1;i<=72;i++) { gotoxy(3+i,4); printf("%c",196); } // Upper Horizontal
             for(i=1;i<=72;i++) { gotoxy(3+i,23); printf("%c",196); } // Lower Horizontal
             gotoxy(32,6); printf("%c",192); // Left Lower Corner
             gotoxy(47,6); printf("%c",217); // Right Lower Corner
             for(i=1;i<=14;i++) { gotoxy(32+i,6); printf("%c",196); } // Lower Horizontal
             for(i=1;i<=1;i++) { gotoxy(32,4+i); printf("%c",179); } // Left Vertical
             for(i=1;i<=1;i++) { gotoxy(47,4+i); printf("%c",179); } // Right Vertical
             for(i=1;i<=12;i++) { gotoxy(40,8+i); printf("%c",179); } // Cutting Vertical
             gotoxy(25,1); cout<<"<<< TELECOM BILLING SYSTEM >>>";
             gotoxy(12,4); cout<<" CURRENT ";
             gotoxy(57,4); cout<<" UPDATED ";
             gotoxy(33,3); cout<<" EDIT RECORD ";
             gotoxy(33,5); cout<<" ACC NO: ";
        }

        void modifyRecordDetail()
        {
             gotoxy(4,9);   cout<<" FIRST NAME : ";
             gotoxy(4,11);  cout<<" LAST NAME : ";
             gotoxy(4,13);  cout<<" GENDER : ";
             gotoxy(4,15);  cout<<" PHONE NUMBER : ";
             gotoxy(4,17);  cout<<" BILL : ";
             gotoxy(18,9);  cout<<fname;
             gotoxy(18,11); cout<<lname;
             gotoxy(18,13); cout<<gender;
             gotoxy(18,15); cout<<phno;
             gotoxy(18,17); cout<<bill;
             gotoxy(41,9);  cout<<" FIRST NAME : ";
             gotoxy(41,11); cout<<" OTHER NAME : ";
             gotoxy(41,13); cout<<" GENDER  : ";
             gotoxy(41,15); cout<<" PHONE NUMBER : ";
             gotoxy(41,17); cout<<" UPDATED AMOUNT : ";
             gotoxy(55,9);  cin>>fname;
             gotoxy(55,11); cin>>lname;
             gotoxy(56,13); cin>>gender;
             gotoxy(63,15); cin>>phno;
             gotoxy(67,17); cin>>bill;

        }

        void aboutprogram()
        {
             int i, n;
             system("CLS");
             gotoxy(1,3); printf("\xC9"); // Upper left corner
             for(i=1;i<=76;i++) printf("\xCD"); // Upper left to right horizontal line
             gotoxy(78,3); printf("\xBB"); // Upper right corner
             gotoxy(1,24); printf("\xC8"); // Lower left corner
             for(i=1;i<=76;i++) printf("\xCD"); // Lower left to right horizontal line
             gotoxy(78,24); printf("\xBC"); // Lower right corner
             for(i=1;i<21;i++){ gotoxy(1,i+3); printf("\xBA"); } // Left vertical line
             for(i=1;i<21;i++){ gotoxy(78,i+3); printf("\xBA"); }// Right vertical line

             gotoxy(25,1); cout<<"<<< TELECOM BILLING SYSTEM >>>";
             gotoxy(5,4);  cout<<" ====== ABOUT PROGRAM =================================";
             gotoxy(4,5);  cout<<"   ____________________________________________________________________";
             gotoxy(4,6);  cout<<" TELECOM BILLING SYSTEM IS A BASIC DESIGN OF THE GENERAL TELECOM SYSTEMS  ";
             gotoxy(4,7);  cout<<" IT CONSISTS OF TWO MODES : ADMINS MODE & USER MODE";
             gotoxy(4,8);  cout<<"=> ADMIN MODE IS FOR THE OFFICE WHERE THE ADMIN CAN ADD , DISPLAY ,SEARCH,";
             gotoxy(4,9);  cout<<" MODIFY AND DELETE THE TELECOM BILL RECORDS.";
             gotoxy(4,10); cout<<" ** ADMIN IS PROTECTED BY USERNAME AND PASSWORD COMFIRMISSION ** ";
             gotoxy(4,11); cout<<" AS ADMIN TO ACCESS IT ADMIN SHOULD HAVE USERNAME & PASSWORD ";
             gotoxy(4,12); cout<<"=> IN USER MODE THE USER CAN ACCESS THEIR ACCOUNT BY THEIR  ACCOUNT NO.";
             gotoxy(4,13); cout<<" THEY HAVE THE RIGHTS TO VIEW THEIR CURRENT STATUS OF ACCOUNT";
             gotoxy(4,14); cout<<" AND PAY THEIR BILL";
             gotoxy(4,15); cout<<" ON THE SIDE NOTE:- A LITTLE BIT OF GRAPHICS HAS BEEN ADDED FOR EASIER USE";
             gotoxy(4,17); cout<<" ";
             gotoxy(5,19); cout<<" ====================STATUS=============================";
             gotoxy(18,21); cout<<" PRESS ANY KEY TO GO BACK TO THE MAIN MENU.. ";
             _getch();
            }

        int retAccNo()
        {
            return accNo;
        }
        int returnbill()
        {
            return bill;
        }


        void paid(int x)
        {
             bill-=x;
        }

        char ret_fname()
        {
            return fname[12];
        }

        int ret_phno()
        {
            return phno;
        }

        char ret_lname()
        {
            return lname[12];
        }

        char ret_passw()
        {
            return passw[30];
        }

        char ret_gender()
        {
            return gender[10];
        }
  };

//CLASS OBJECTS DECLARATION AND FILE STREAM OBJECTS

   Tele telecom;
   ifstream infile;
   ofstream outfile;
   fstream file;

void write_pass()
{
    int i;
    outfile.open("file.txt",ios::out | ios::app | ios::binary);
    if(!outfile)
    {
       MessageBox(0,"ERROR! FILE COULD NOT BE CREATED!","Warning",0);
    }
    else
    {
       fflush(stdin);
        outfile.write((char*)&telecom, sizeof(telecom));

       fflush(stdin);
    }
    outfile.close();
}

// FUNCTION - BALANCE CHECK

   void balanceCheck(int n)
   {
        int amt, i;
        bool found=false;
        char ch;
        do
        {
        clearWindow();
        telecom.displayRecordGraphic();
        gotoxy(25,1); cout<<"<<< TELECOM BILLING SYSTEM >>>";
        gotoxy(19,4);  cout<<" BALANCE CHECK ";
        fflush(stdin);
        infile.open("file.txt",ios::in|ios::binary);
        infile.read((char*)&telecom, sizeof(telecom));
        if(!infile.is_open())
        {
        MessageBox(0," FILE COULD NOT BE OPENED! \n OR DOES NOT EXIST!","Error",0);
        _getch();
        return;
        }
        while(!infile.eof())
        {
        if(telecom.retAccNo()==n)
        {
        gotoxy(31,5); printf("%c",218); // Left Upper Corner
        gotoxy(48,5); printf("%c",191); // Right Upper Corner
        gotoxy(31,7); printf("%c",192); // Left Lower Corner
        gotoxy(48,7); printf("%c",217); // Right Lower Corner
        for(i=1;i<=16;i++){ gotoxy(31+i,5); printf("%c",196);}// Upper Horizontal
        for(i=1;i<=16;i++){ gotoxy(31+i,7); printf("%c",196);}// Lower Horizontal
        for(i=1;i<=1;i++){ gotoxy(30+i,6); printf("%c",179);}// Left Vertical
        for(i=1;i<=1;i++){ gotoxy(48,5+i); printf("%c",179);}// Right Vertical
        gotoxy(33,19); cout<<" STATUS ";
        gotoxy(32,6);  cout<<" ACCOUNT NO: ";
        gotoxy(44,6);  cout<<telecom.retAccNo();
        gotoxy(18,9);  cout<<" NAME : "<<telecom.fname<<"\t"<<telecom.lname;
        gotoxy(18,11);  cout<<" PHONE No :"<<telecom.ret_phno();
        gotoxy(18,25);  cout<<" GENDER :"<<telecom.gender;

        gotoxy(18,13); cout<<" YOUR ACCOUNT BALANCE : "<<telecom.returnbill();
        gotoxy(18,15); cout<<" THANK YOU SO MUCH "<<telecom.fname<<" FOR USING";
        gotoxy(18,17); cout<<" OUR TELECOM BILLING SYSTEM!!";
        _getch();
        gotoxy(18,21); cout<<"WANT TO CHECK MORE ACCOUNT BALANCE? [Y/N]:";
        gotoxy(60,21); cin>>ch;
        found=true;
        break;
        }
        }
        if(telecom.retAccNo()!=n)
        {
        gotoxy(18,21); cout<<" SORRY! ACCOUNT NUMBER " <<n<<" DOES NOT EXIST!";
        _getch();
        gotoxy(18,21); cout<<"DO U WISH TO RE-TYPE YO ACCOUNT NO? [Y/N]:";
        gotoxy(60,21); cin>>ch;
        }
       infile.close();
        }while(ch=='y' || ch=='Y');
        gotoxy(18,21); cout<<" PLEASE PRESS ENTER TO GO BACK TO MAIN MENU";
        _getch();
  return;
  }

// FUNCTION - WITHDRAW AMOUNT

   void paybill(int n)
   {
        int amt;
        char ch;
        bool found=false;
        do
        {
        clearWindow();
        telecom.deleteRecordGraphic();
        gotoxy(25,1); cout<<"<<< TELECOM BILLING SYSTEM >>>";
        gotoxy(19,4); cout<<" PAYMENT AMOUNT ";
        fflush(stdin);
        file.open("file.txt",ios::in|ios::binary|ios::app|ios::out);

        if(!file.is_open())
        {
        MessageBox(0," FILE COULD NOT BE OPENED! \n OR DOES NOT EXIST!","Error",0);
        _getch();
        return ;
        }
        file.seekg(0);
        while(!file.eof())
        {
        if(telecom.retAccNo()==n)
        {
        telecom.viewAcc1();
        gotoxy(18,21); cout<<" ENTER AMOUNT TO PAY : ";
        gotoxy(46,21); cin>>amt;
        int bal=telecom.returnbill()-amt;
        if(amt>telecom.returnbill())
        {
            gotoxy(18,21); cout<<" SORRY! YOUR BILL IS LOWER THAN THE AMOUNT!";
            _getch();
            gotoxy(18,21); cout<<"DO U WISH TO ENTER THE AMOUNT AGAIN? [Y/N]:";
            gotoxy(60,21); cin>>ch;
            break;
        }
        if(amt<=telecom.returnbill())
        {
            telecom.paid(amt);
            file.seekg(-sizeof(telecom),ios::cur);
            file.write((char *)&telecom, sizeof(telecom));
            gotoxy(18,21); cout<<" AMOUNT "<<amt<<" PAID SUCCESSFULLY!";
            _getch();
            gotoxy(18,21); cout<<"DO YOU WISH TO CLEAR MORE OF THE BILL? [Y/N]:";
            gotoxy(60,21); cin>>ch;
            break;
        }}
        }
        if(telecom.retAccNo()!=n)
        {
        gotoxy(18,21); cout<<" SORRY! ACCOUNT NUMBER " <<n<<" DOES NOT EXIST!";
        _getch();
        gotoxy(18,21); cout<<"DO U WANT TO RE-TYPE YO ACCOUNT NO? [Y/N]:";
        gotoxy(60,21); cin>>ch;
        }
        infile.close();
        }while(ch=='y' || ch=='Y');
        gotoxy(18,21); cout<<" PLEASE PRESS ENTER TO GO BACK TO MAIN MENU";
        _getch();
  return;
  }

// FUNCTION MAIN BANKER MENU
  void userMenu(int n)
  {
       int i, ch;
           do
           {
           system("CLS");
           system("color 07");
           telecom.adminMenuGraphic();
           gotoxy(25,3); cout<<"<<< TELECOM BILLING SYSTEM >>>";
           gotoxy(18,8);  cout<<"[1] ABOUT US";
           gotoxy(18,10); cout<<"[2] PAYBILL";
           gotoxy(18,12); cout<<"[3] BALANCE CHECK";
           gotoxy(18,14); cout<<"[4] EXIT ";
           gotoxy(18,16); cout<<"---------------------------";
           gotoxy(19,21); cout<<"SELECT FROM [1-4] : ";
           gotoxy(39,21); cin>>ch;

       switch(ch)
       {
                 case 1: telecom.aboutprogram();
                 break;
                 case 2: paybill(n);
                 break;
                 case 3: balanceCheck(n);
                 break;
                 default: gotoxy(19,21); cout<<" WELL DONE YOUR SYSTEM ABOUT EXIT...!";
                _getch();
                gotoxy(19,21); cout<<" PLEASE PRESS ENTER TO GO BACK TO MAIN MENU!";
               _getch();
                 exit(0);
                 }}
           while(n!=4);
  }

//   FUNCTION - BANKER LOGIN

   void userLogin()
   {
        int i, j, k, n;
        bool found=false;
        char ch;
        do
        {
        clearWindow();
        telecom.adminLoginGraphic();
        gotoxy(30,5); cout<<"<<< TELECOM BILLING SYSTEM >>>";
        gotoxy(30,12); cout<<"Account No:           ";
        gotoxy(33,17); cout<<" STATUS ";
        gotoxy(41,12); cin>>n;
        infile.open("file.txt",ios::in|ios::app|ios::binary);
        if(!infile.is_open())
        {
        MessageBox(0," FILE COULD NOT BE OPENED! \n OR DOES NOT EXIST!","Error",0);
        _getch();
        return;
        }
        while(infile.read((char*)&telecom,sizeof(telecom)))
        {
        if(telecom.retAccNo()==n)
        {
            for(j=1;j<=1;j++)
            {
                if(j==1)
                {
                    gotoxy(25,21);
                    printf("Loading USER Menu Please Wait...");
                }
            for(k=22;k<60;k++)
            {
                gotoxy(k,20);
                printf(" ");
            }
        for(k=22;k<60;k++)
        {
            gotoxy(k,20);
            putch(10000);
            Sleep(50);
        }
        }
        userMenu(n);
        return;
        }
        found = true;
        }
        if(telecom.retAccNo()!=n){
        gotoxy(21,20); cout<<" SORRY ACCOUNT NUMBER "<<n<<" DOESNT EXIST";
        _getch();
        gotoxy(21,20); cout<<" DO YOU WANT TO TRY RE-ENTERIN? [Y/N]: ";
        gotoxy(59,20); cin>>ch;
        }
        infile.close();
        }
        while(ch=='y' || ch=='Y');
        gotoxy(21,20); cout<<" PRESS ENTER TO GO BACK TO THE MAIN MENU";
        _getch();
        return;
   }
// FUNCTION TO WRITE RECORDZ TO FILE
    void addRecord()
    {
       char ch;
       do
       {
       clearWindow();
       outfile.open("file.txt",ios::out|ios::app|ios::binary);
       if(!outfile)
       {
       MessageBox(0,"ERROR! FILE COULD NOT BE CREATED!","Warning",0);
       }
       else
       {
       fflush(stdin);
       telecom.openAcc();
       outfile.write((char*)&telecom,sizeof(telecom));
       gotoxy(18,21); cout<<" DO U WISH TO OPEN MORE ACCOUNT? [Y/N]: ";
       gotoxy(59,21); cin>>ch;
       fflush(stdin);
       }
       outfile.close();
       }
       while(ch=='y' || ch=='Y');
       gotoxy(18,21); cout<<" PLEASE PRESS ENTER TO GO BACK TO MAIN MENU";
       _getch();
       return;
}

//FUNCTION TO SEARCH AND SHOW A SPECIFIC RECORD

    void displayRecord()
    {
       char ch;
       int n, isFound = 0;
         do
        {
         clearWindow();
         telecom.displayRecordGraphic();
         gotoxy(31,1);  cout<<" TELECOM BILLING SYSTEM.";
         gotoxy(19,4);  cout<<" VIEW RECORD ";
         gotoxy(18,21); cout<<" ENTER ACCOUNT NUMBER : ";
         gotoxy(42,21); cin>>n;
         fflush(stdin);
         infile.open("file.txt",ios::app|ios::in);
         if(!infile.is_open())
         {
         MessageBox(0," FILE COULD NOT BE OPENED! \n OR DOES NOT EXIST!","Error",0);
         _getch();
         return;
         }
         while(infile.read((char*)&telecom,sizeof(telecom)))
         {
         if(telecom.retAccNo()==n){
         telecom.viewAcc1();
         gotoxy(18,21); cout<<"DO YOU WANT TO CHECK MORE ACCOUNT? [Y/N]: ";
         gotoxy(60,21); cin>>ch;
         isFound = 1;
         break;
         }
         }
         if(telecom.retAccNo()!=n)
         {
         gotoxy(19,21); cout<<"SORRY! THE ACCOUNT NUMBER DOESN'T EXIST!";
         _getch();
         gotoxy(18,21); cout<<"DO YOU WANT TO CHECK MORE ACCOUNT? [Y/N]: ";
         gotoxy(60,21); cin>>ch;
         }
         infile.close();
         }
         while(ch=='y' || ch=='Y');
         gotoxy(18,21); cout<<" PLEASE PRESS ENTER TO GO BACK TO MAIN MENU";
         _getch();
         return;
    }

//FUNCTION TO DISPLAY ALL ACCOUNTZ

  void displayAllRecord(int j=8)
  {
       clearWindow();
       infile.open("file.txt",ios::in|ios::binary);
       if(!infile.is_open())
        {
       MessageBox(0," FILE COULD NOT BE OPENED! \n OR DOES NOT EXIST!","Error",0);
       _getch();
       return;
       }
       else
       {
       fflush(stdin);
       while(infile.read((char*)&telecom,sizeof(telecom))){
       telecom.viewAllAcc();
       gotoxy(6,j); cout<<telecom.accNo;
       gotoxy(14,j); cout<<telecom.fname;
       gotoxy(27,j); cout<<telecom.lname;
       gotoxy(39,j); cout<<telecom.gender;
       gotoxy(49,j); cout<<telecom.phno;
       gotoxy(66,j); cout<<telecom.bill;
       j++;
       }}
       infile.close();
       _getch();
       return;
  }

//             FUNCTION TO MODIFY RECORD IN FILE [DATABASE]

  void editRecord()
  {
       int n, isFound = 0;
       char ch;
       do{
       clearWindowz();
       telecom.modifyRecordGraphic();
       gotoxy(42,5); cin>>n;
       infile.open("file.txt",ios::in|ios::app|ios::binary);
       if(!infile.is_open())
       {
       MessageBox(0," FILE COULD NOT BE OPENED! \n OR DOES NOT EXIST!","Error",0);
       _getch();
       return;
       }
       while(infile.read((char*)&telecom,sizeof(telecom)))
        {
       if(telecom.retAccNo()==n)
       {
       fflush(stdin);
       telecom.modifyRecordDetail();
       file.seekg(-sizeof(telecom),ios::cur);
       file.write((char*)&telecom,sizeof(telecom));
       gotoxy(26,21); cout<<" ACCOUNT UPDATED SUCCESSFULLY!";
       _getch();
       gotoxy(17,21); cout<<"DO YOU WANT TO UPDATE MORE ACCOUNTZ? [Y/N]: ";
       gotoxy(61,21); cin>>ch;
       isFound = 1;
       break;
       }}
       if(telecom.retAccNo()!=n)
       {
       gotoxy(19,21); cout<<" SORRY! ACCOUNT NUMBER "<<n<<" DOESN'T EXIST!";
       _getch();
       gotoxy(18,21); cout<<" DO YOU WANT TO UPDATE MORE ACCOUNTZ? [Y/N]: ";
       gotoxy(63,21); cin>>ch;
       }
       infile.close();
       }
       while(ch=='y' || ch=='Y');
       gotoxy(16,21); cout<<" PLEASE PRESS ENTER KEY TO GO BACK TO THE MAIN MENU";
       _getch();
       return;
  }

// FUNCTION ERASE/ DELETE BANKER DATA FROM FILE [DATABASE]

  void deleteRecord()
  {
       int n;
       char ch;
       clearWindow();
       telecom.deleteRecordGraphic();
       gotoxy(25,1); cout<<"<<< TELECOM BILLING SYSTEM >>>";
       gotoxy(19,4);  cout<<" DELETE RECORD ";
       gotoxy(18,21); cout<<" ENTER ACCOUNT NUMBER : ";
       fflush(stdin);
       gotoxy(42,21); cin>>n;
       infile.open("file.txt",ios::in|ios::binary);
       if(!infile.is_open())
        {
       MessageBox(0," FILE COULD NOT BE OPENED! \n OR DOES NOT EXIST!","Error",0);
       _getch();
       return;
       }
       outfile.open("temp.txt",ios::out|ios::binary);
       while(infile.read((char*)&telecom,sizeof(telecom)))
       {
       if(telecom.retAccNo()!=n){
        outfile.write((char*)&telecom,sizeof(telecom));
       }}
       gotoxy(18,21); cout<<" ACCOUNT HAS BEEN DELETED SUCCESSFULLY !";
       _getch();
       infile.close();
       outfile.close();
       remove("file.txt");
       rename("TEMP.txt","file.txt");
       gotoxy(18,21); cout<<" PRESS ENTER KEY TO GO BACK TO THE MAIN MENU";
       _getch();
       return;
  }

//                      ADMINISTRATOR MENU GRAPHICZ

 void adminMenu()
 {
    int i, n;
    do {
    system("CLS");
    system("color 07");
    telecom.adminMenuGraphic();
    gotoxy(32,3); cout<<"<<< TELECOM BILLING SYSTEM >>>";
    gotoxy(18,7);  cout<<"[1] OPEN ACCOUNT";
    gotoxy(18,9);  cout<<"[2] VIEW SPEC. ACCOUNT";
    gotoxy(18,11); cout<<"[3] VIEW ALL ACCOUNT";
    gotoxy(18,13); cout<<"[4] MODIFY ACCOUNT";
    gotoxy(18,15); cout<<"[5] CLOSE ACCOUNT";
    gotoxy(18,17); cout<<"[6] LOG OUT";
    gotoxy(19,21); cout<<"SELECT FROM [1-6] : ";
    gotoxy(39,21); cin>>n;

    switch(n)
    {
              case 1: addRecord();
              break;
              case 2: displayRecord();
              break;
              case 3: displayAllRecord();
              break;
              case 4: editRecord();
              break;
              case 5: deleteRecord();
              break;
              default: gotoxy(19,21); cout<<" BYE BYE ADMIN HOPE TO SEE YOU AGAIN SOON!";
              _getch();
              gotoxy(19,21); cout<<" PLEASE PRESS ENTER TO GO BACK TO MAIN MENU!";
              _getch();
              }
    }
    while(n!=6);
}

// ADMINISTRATOR GRAPHIC

 void adminLogin()
 {
      string pass,adminname,temp,chk=("muller"),chk1=("abdi");
      int i, j, k,p,q;
      char ch,ch2;
      do{
          clearWindow();
          telecom.adminLoginGraphic();
          gotoxy(30,5);  cout<<"<<< TELECOM BILLING SYSTEM >>>";
          gotoxy(28,11); cout<<"USER NAME :             ";
          gotoxy(28,13); cout<<"PASSWORD  :             ";
          gotoxy(33,17); cout<<" STATUS ";
          gotoxy(40,11); cin>>adminname;
          gotoxy(40,13); cin>>pass;
          if((adminname==chk && pass=="12345")||(adminname==chk1 && pass=="3443"))
          {
          for(j=1;j<=1;j++){
          if(j==1){gotoxy(28,21);printf("Loading Admin Please Wait...");}
          for(k=22;k<60;k++){gotoxy(k,20);printf("º");}
          for(k=22;k<60;k++){gotoxy(k,20); putch(10000);
          Sleep(30);
          }
          }
          adminMenu();
          return;
          }
          else
          {
               gotoxy(23,20); cout<<"SORRY! WRONG  PASSWORD!";
               _getch();
               gotoxy(21,20); cout<<" DO YOU WANT TO TRY RE-ENTERIN? [Y/N]: ";
               gotoxy(59,20); cin>>ch;
          }
          }
          while(ch == 'y' || ch == 'Y');
          return;
}

//  FUNCTION ABOUT THE PROGRAMMER

 void aboutProgrammer()
 {
      int i, j, k;
      clearWindow();
      telecom.aboutProgrammerGraphic();
      gotoxy(25,5);     cout<<"<<< TELECOM BILLING SYSTEM >>>";
      gotoxy(30,8);      cout<<" << DESIGNERS >> ";
      gotoxy(26,11);    cout<<"  MULUBRAHAN LEGASE  3139 ";
      gotoxy(26,13);    cout<<"  ABDI  TEMESGEN     3132 ";
      gotoxy(22,17);    cout<<" STATUS : FROM COMPUTER ENGINEERING ";
      for(j=1;j<=1;j++)
      {
      if(j==1){gotoxy(30,21);printf("EXITING SYSTEM... BYE!!");}
      for(k=22;k<60;k++){gotoxy(k,20);printf("º");}
      for(k=22;k<60;k++){gotoxy(k,20); putch(10000);
      Sleep(50);
      }
      exit(0);
      }
 }
//  FUNCTION MAIN MENU [ADMINISTRATOR/ BANKER MENU]

  void mainMenu()
  {
       int i, j;
       system("CLS");
       system("color 0");
       telecom.mainMenuGraphic();
       do {
           gotoxy(25,8); cout<<" ** MAIN MENU **";
           for(i=1;i<=9;i++) { gotoxy(28+i,9); cout<<char(196); }// to print out underline for main menu
           gotoxy(23,11); cout<<"[1] CUSTOMER ";
           gotoxy(23,13); cout<<"[2] ADMINISTRATORS ";
           gotoxy(23,15); cout<<"[3] EXIT ";
           gotoxy(32,3);  cout<<"TELECOM BILLING SYSTEM.";
           gotoxy(24,21); cout<<"SELECT FROM [1-3] : ";
           gotoxy(44,21); cin>>j;
           switch(j){
                     case 1: userLogin();
                     break;
                     case 2: adminLogin();
                     break;
                     default: aboutProgrammer();
                     }
                     clearWindow();
                     telecom.mainMenuGraphic();
                     }
                     while(j>0 && j<=2);
}
// FUNCTION WELCOME SCREEN/ PROGRESS BAR

 void progressBar()
 {
    int i, j, k;
    system("CLS");
    system("color 07");
    telecom.progressBarGraphic();
    for(j=1;j<=3;j++){
    if(j==1){gotoxy(32,21);cout<<"Checking folders...";}
    if(j==2){gotoxy(32,21);cout<<"Checking files...";}
    if(j==3){gotoxy(32,21);cout<<"Loading System...";}
    for(k=10;k<69;k++){gotoxy(k,20);cout<<"º";}
    for(k=10;k<69;k++){gotoxy(k,20); putch(10000);
    Sleep(20);
    }}
    system("CLS");
    mainMenu();
    _getch();
 }

// MAIN FUNCTION

int main()
{
      SetConsoleTitle("<<< TELECOM BILLING SYSTEM >>>");
      progressBar();
}
