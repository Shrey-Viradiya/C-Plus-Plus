#include "iostream"
using namespace std;

void dashes(){
    cout << "-----------------------------------------------"<<endl;
}

void display_board(char i[9]){
    dashes();
    cout << "TICK-TACK-TOE!!\n";
    dashes();
    cout <<"\n\n\t"<< i[0] << "\t|\t" << i[1] << "\t|\t" << i[2] << endl;
    dashes();
    cout <<"\t"<< i[3] << "\t|\t" << i[4] << "\t|\t" << i[5]<< endl;
    dashes();
    cout <<"\t"<< i[6] << "\t|\t" << i[7] << "\t|\t" << i[8]<< "\n\n" << endl;
}

char input(char i[9]){
    bool temp = true;
    char location;
    while (temp == true){
        cout<<"Enter the location you want to mark: ";
        cin >> location;
        int j;
        for(j = 0 ; j < 9 ; j++){
            if( i[j] == location){
                temp = false;
                system("CLS");
                break;
            }
            else{
                temp = true;
            }
        }
    }
    return location;
}

bool win(char i[9]){
    int j;
    for ( j = 0 ; j < 3 ; j++){
        if ( (i[j] == i[j+3] && (i[j+3] == i[j+6]))){
            return true;
        }
    }
    
    if((i[0] == i[1] && (i[1] == i[2]))){
        return true;
    }

    if((i[3] == i[4] && (i[4] == i[5]))){
        return true;
    }

    if((i[6] == i[7] && (i[7] == i[9]))){
        return true;
    }

    if((i[0] == i[4] && (i[4] == i[8]))){
        return true;
    }
    
    else if (((i[2] == i[4] && (i[4] == i[6]))))
    {
        return true;
    }
    
    else{
        return false;
    }
    
}

int main(){
    char board[] = {'7','8','9','4','5','6','1','2','3'};
    int turn;
    char player_turn[] = {'X','O','X','O','X','O','X','O','X'};
    bool check_win , loop {true};
    turn = 0;

    display_board(board);

    while (loop == true)
    {
        
        
        cout<<"\nTurn #" << (turn +1) << ": " << player_turn[turn] <<endl;

        char location;
        location = input(board);

        int j;

        for(j = 0 ; j < 9 ; j++){
            if( board[j] == location){
                board[j] = player_turn[turn] ;
                break;
            }
        }

        display_board(board);
        check_win = win(board);

        if (check_win == true){
            cout << "Player " << player_turn[j] << " wins!!" <<endl;
            break;
        }
        else{
            turn++;
        }

        if (turn > 8 ){
            cout << "Game Tie";
            loop = false;
        }

    }    
    

    return 0;
    
}
