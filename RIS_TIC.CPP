#include<iostream.h>
#include<conio.h>
//Using standard namespace

char num[10] = {'o','1','2','3','4','5','6','7','8','9'};
 /*
    Function to return status 1 for game over with a success,
   -1 for game in progress & 0 for game over & draw situation.
*/

int win()
{
    if (num[1] == num[2] && num[2] == num[3])

	return 1;
    else if (num[4] == num[5] && num[5] == num[6])

	return 1;
    else if (num[7] == num[8] && num[8] == num[9])

	return 1;
    else if (num[1] == num[4] && num[4] == num[7])

	return 1;
    else if (num[2] == num[5] && num[5] == num[8])

	return 1;
    else if (num[3] == num[6] && num[6] == num[9])

	return 1;
    else if (num[1] == num[5] && num[5] == num[9])

	return 1;
    else if (num[3] == num[5] && num[5] == num[7])

	return 1;
    else if (num[1] != '1' && num[2] != '2' && num[3] != '3'
		    && num[4] != '4' && num[5] != '5' && num[6] != '6'
		  && num[7] != '7' && num[8] != '8' && num[9] != '9')

	return 0;
    else
	return -1;
}



void game()     //Function to draw the player's game board along with there input
{
    clrscr();
    cout << "\n\n\tTic Tac Toe\n\n";

    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << num[1] << "  |  " << num[2] << "  |  " << num[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << num[4] << "  |  " << num[5] << "  |  " << num[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << num[7] << "  |  " << num[8] << "  |  " << num[9] << endl;

    cout << "     |     |     " << endl << endl;
}
 
void main()
{
    int player = 1,i,ch;

    char m;
    do
    {
        game();
        player=(player%2)?1:2;

        cout << "Player " << player << ", enter a number:  ";
        cin >> ch;

        m=(player == 1) ? 'X' : 'O';

        if (ch == 1 && num[1] == '1')

            num[1] = m;
        else if (ch == 2 && num[2] == '2')

            num[2] = m;
        else if (ch == 3 && num[3] == '3')

            num[3] = m;
        else if (ch == 4 && num[4] == '4')

            num[4] = m;
        else if (ch == 5 && num[5] == '5')

            num[5] = m;
        else if (ch == 6 && num[6] == '6')

            num[6] = m;
        else if (ch == 7 && num[7] == '7')

            num[7] = m;
        else if (ch == 8 && num[8] == '8')

            num[8] = m;
        else if (ch == 9 && num[9] == '9')

            num[9] = m;
        else
        {
            cout<<"Invalid move ";

            player--;
            cin.ignore();
            cin.get();
        }
        i=win();

        player++;
    }while(i==-1);
    game();
    if(i==1)

        cout<<"==>\aPlayer "<<--player<<" win ";
    else
        cout<<"==>\aGame draw";

    cin.ignore();
    cin.get();
   }
//Code ends here 
