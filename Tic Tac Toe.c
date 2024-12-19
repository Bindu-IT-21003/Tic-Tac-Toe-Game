#include<bits/stdc++.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
char square[10]={'0','1','2','3','4','5','6','7','8','9'};
void stack1();
int checkWin();
void drawBoard();
int main()
{

    int player=1,i,choice;
    char mark;
    stack<string>st;
    st.push("Bindu");//1st push Bindu in the stack
    st.push("Afsana");//Afsana is the top of stack

    do
    {
        drawBoard();
        player=(player%2)?1:2;
        cout<<"player"<<player<<",enter a number: ";
        cin>>choice;
        mark=(player==1)? 'X' :'0';
            if(choice==1&&square[1]=='1')
            square[1]=mark;
            else if(choice==2&&square[2]=='2')
            square[2]=mark;
          else  if(choice==3&&square[3]=='3')
            square[3]=mark;
            else if(choice==4&&square[4]=='4')
            square[4]=mark;
            else if(choice==5&&square[5]=='5')
            square[5]=mark;
            else if(choice==6&&square[6]=='6')
            square[6]=mark;
            else if(choice==7&&square[7]=='7')
            square[7]=mark;
            else if(choice==8&&square[8]=='8')
            square[8]=mark;
            else if(choice==9&&square[9]=='9')
            square[9]=mark;
            else
            {
                cout<<"Invalid move";
                player--;
                cin.ignore();
                cin.get();
            }
            i=checkWin();
            player++;
    }
    while(i==-1);
    drawBoard();
    if(i==1)
        {
         player--;//Acturat player find out who is win.
    if(player==2)//If player 2 is win then print the top of stack means Bob is print
    {
        cout<<st.top()<<" win"<<endl;;
    }
    else
    {
        st.pop();//here first pop the top means Bob is pop then Alice will remain and print alice
      cout<<st.top()<<" win"<<endl;
    }

    }

    else
        cout<<"==>Game draw";
    cin.ignore();
    cin.get();



   // return 0;
}
int checkWin()
{

    if(square[1]==square[2]&&square[2]==square[3])
        return 1;
    else if(square[4]==square[5]&&square[5]==square[6])
        return 1;
        else if(square[7]==square[8]&&square[8]==square[9])
        return 1;
        else if(square[1]==square[4]&&square[4]==square[7])
        return 1;
        else if(square[2]==square[5]&&square[5]==square[8])
        return 1;
        else if(square[3]==square[6]&&square[6]==square[9])
        return 1;
        else if(square[1]==square[5]&&square[5]==square[9])
        return 1;
        else if(square[3]==square[5]&&square[5]==square[7])
        return 1;
        else if(square[1]!='1'&&square[2]!='2'&&square[3]!='3'&&square[4]!='4'&&square[5]!='5'&&square[6]!='6'&&square[7]!='7'&&square[8]!='8'&&square[9]!='9')
            return 0;
        else
            return -1;
}
void drawBoard()
{

     system("cls");
    cout<<"\n\n\tTic Tac Toe\n\n";
    cout<<"player 1(X) - player 2(0)"<<endl<<endl;
    cout<<endl;
    cout<<"   |   |  "<<endl;
    cout<<" "<<square[1]<<" | "<<square[2]<<  " | "<<square[3]<<endl;
    cout<<"___|___|___"<<endl;
    cout<<"   |   |   "<<endl;
    cout<<" "<<square[4]<<" | "<<square[5]<<  " | "<<square[6]<<endl;
    cout<<"___|___|___"<<endl;
    cout<<"   |   |   "<<endl;
    cout<<" "<<square[7]<<" | "<<square[8]<<  " | "<<square[9]<<endl;
    cout<<"   |   |   "<<endl<<endl;
}