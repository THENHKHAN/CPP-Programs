// For a Given amount of Money , Count minimum number of Notes required. Available notes are 100 , 50 , 20 ,10 ,5 , 2 ,1. 

#include<iostream>
#include<conio.h>

using namespace std ;

 void coutNotes ( int money )
   {
        int note ;
       cout << "\t Enter to which note you want to start with: ";
         cin >> note ;

         // defining switch statement for multiple notes choice.
cout << "\n";

    switch ( note )
    {
        default :
                 cout << "Please enter valid note" ;
                   break ;  /* when this default execute after cout break will terminate the switch and
                                     control will transfer to the statement after the switch statement
                                */
       case 100 :  // for counting number of 100 notes

                   note = money / note ;   // counting number of 100th notes. Quotient give the number.

                cout << " Number of 100 Note :   "  << note << endl;
                  money = money % 100 ; // or money %= note--> this will gives the remaining money.

                   /**  not Using break because may be total notes not completed for the money. so move to the
                        lower notes .
                  **/

       case 50 : // for counting number of 50 notes


                  note = money / 50 ;   // counting number of 100th notes. Quotient give the number.

                cout << " Number of 50 Note :   "  << note << endl;
                  money = money % 50 ; // or money %= note--> this will gives the remaining money.


       case 20 : // for counting number of 20 notes


                  note = money / 20 ;   // counting number of 100th notes. Quotient give the number.

                cout << " Number of 20 Note :   "  << note << endl;
                  money = money % 20 ; // or money %= note--> this will gives the remaining money.

       case 10 : // for counting number of 10 notes

             note = money / 10 ;   // counting number of 100th notes. Quotient give the number.

                cout << " Number of 10 Note :   "  << note << endl;
                  money = money % 10 ; // or money %= note--> this will gives the remaining money.


       case 5 :  // for counting number of 5 notes

                note = money / 5 ;   // counting number of 100th notes. Quotient give the number.

                cout << " Number of 5 Note :   "  << note << endl;
                  money = money % 5 ; // or money %= note--> this will gives the remaining money.


       case 2 : // for counting number of 2 notes

                  note = money / 2 ;   // counting number of 100th notes. Quotient give the number.

                    cout << " Number of 2 Note :   "  << note << endl;
                  money = money % 2 ; // or money %= note--> this will gives the remaining money.

       case 1 : // for counting number of 1 notes

               note = money / 1 ;   // counting number of 100th notes. Quotient give the number.

                cout << " Number of 1 Note :   "  << note << endl;
                  money = money % 1 ; // or money %= note--> this will gives the remaining money.


      } // end of switch statement.

   } // end of coutNotes function .



  int main ( )

  {  int money ;

    system ("color 0a") ;
     cout <<"\t Enter the amount:  " ;
        cin >> money ;
     coutNotes ( money ) ;

    getch ( ) ;
    return 0;
  }
