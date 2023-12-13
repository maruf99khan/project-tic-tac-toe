//ios_base::sync_with_stdio(false);
#define call() cin.tie(NULL);
  #include<bits/stdc++.h>
#define vi vector<int>
#define vc vector<char>
#define vl vector<long long>
#define vs vector<string>
#define si set<int>

#define pb push_back
#define B begin()
#define E end()
#define sm INT_MIN
#define lm INT_MAX
#define S size()
#define si set<int>
#define sz(x) (x).begin(),(x).end()
#define ll long long
#define ld long double
#define ff first
#define ss second
#define mp make_pair

#define rep(i,n) for(int i=0;i<n;i++)
//#define int long long
using namespace std;


void sprime( vi& a){
int n=100000;
int prime[100000]={0};

for(int i=2;i*i<=n;i++){
    if(prime[i]==0){
        for(int j=i*i;j<=n;j+=i){
            prime[j]=1;
        }
    }
}
for(int i=2;i<=n;i++){
    if(prime[i]==0){
       a.pb(i);
    }
}
}
const ll n=1000000;
bool aa[n];
void ssprime( ){
///bool a[n];
aa[1]=true;

for(ll i=2;i*i<=n;i++){
    if(aa[i]==0){
        for(ll j=i*i;j<=n;j+=i){
            aa[j]=1;
        }
    }
}

}

bool cmp(pair<int,int>a,pair<int,int>b){
if(a.first!=b.first){
    if(a.first>b.first){
        return true;
    }
    else{
        return false;
    }

}
else{
    if(a.second<b.second){
        return true;
    }
    else
        return false;
}

}






void print(auto a)
{
    for(auto i : a)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}





bool change(pair<int,int>a,pair<int,int>b){
if(a.ss>b.ss)
    return true;
return false;

}








///Start from here

bool istrue(ll a ,ll b){
if((a&b)>(a^b))
    return true;
return false;

}


class TicTacToe
{
private:
    char board[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char current_turn = 'X';
    bool playing = true;
    int state = 0;
    int input;

public:
    void print_board();
    int play_move(int index, char tt);
    int check_win(char tt);
    void start();
};

int main()
{
    TicTacToe game;
    game.start();
    return 0;
}

void TicTacToe :: start()
{
    while (playing == true)
    {
        ///cout<<endl;
        print_board();

        cout << "Play your move " << current_turn << endl;
        cin >> input;
        if (play_move(input, current_turn) == 0)
        {
            cout << "Box already occupied" << endl;
            continue;
        };
        state = check_win(current_turn);
        if (state == 1)
        {
           // cout<<endl;
            print_board();
            //cout<<endl;
            cout << current_turn << " wins the game!" << endl;
            break;
        }
        else if (state == 2)
        {
            print_board();
            cout << "Draw!" << endl;
            break;
        };
        current_turn = (current_turn == 'X') ? 'O' : 'X';
    };
};

void TicTacToe :: print_board()
{
    cout<<endl;
    for (int i = 0; i < 9; i++)
    {
        if (i == 1 || i == 2 || i == 4 || i == 5 || i == 7 || i == 8)
        {
            cout << " | ";
        }
        cout << board[i];
        if (i == 2 || i == 5)
        {
            cout << endl;
            cout << "---------" << endl;
        }
    }
    cout << endl;
    cout << endl;
};

int TicTacToe :: play_move(int index, char tt)
{
    if (index >= 0 && index < 9)
    {
        if (board[index] == ' ')
        {
            board[index] = tt;
            return 1;
        }
    }
    return 0;
};

/*
   0 1 2
   3 4 5
   6 7 8
*/
int TicTacToe ::check_win(char tt)
{
    if (
        // Horizontal checks
        (board[0] == tt && board[1] == tt && board[2] == tt) ||
        (board[3] == tt && board[4] == tt && board[5] == tt) ||
        (board[6] == tt && board[7] == tt && board[8] == tt) ||
        // Vertical Checks
        (board[0] == tt && board[3] == tt && board[6] == tt) ||
        (board[1] == tt && board[4] == tt && board[7] == tt) ||
        (board[2] == tt && board[5] == tt && board[8] == tt) ||
        // Diagonal Checks
        (board[0] == tt && board[4] == tt && board[8] == tt) ||
        (board[2] == tt && board[4] == tt && board[6] == tt))
    {
        return 1;
    }
    else
    {
        bool draw = true;
        for (int i = 0; i < 9; i++)
        {
            if (board[i] == ' ')
            {
                draw = false;
                break;
            }
        }
        if (draw == true)
        {
            return 2;
        }
    }
    return 0;
};
