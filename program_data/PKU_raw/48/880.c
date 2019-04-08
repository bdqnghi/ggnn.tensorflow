int board[9][9]={0};
int temp[9][9]={0};
void spread();
void turn();
int main()
{
    int zhongxin;
    cin >> zhongxin;
    board[4][4] = zhongxin;
    int days;
    cin >> days;
    int i,j;
    for (i=1;i<=days;i++)
    {
        spread();
        turn();
    } 
    for (i=0;i<9;i++)
    {
        cout << board[i][0];
        for (j=1;j<9;j++)
        {
            cout << " " << board[i][j] ;
        }
        cout << endl;
    }
    return 0;
}

void spread()
{
     int i,j;
        for (i=0;i<9;i++)
        {
            for (j=0;j<9;j++)
            {
                temp[i][j]+=2*board[i][j];
                if (i>0)
                {
                        temp[i-1][j]+=board[i][j];
                }
                if (j>0)
                {
                        temp[i][j-1]+=board[i][j];
                }
                if (i<8)
                {
                        temp[i+1][j]+=board[i][j];
                }
                if (j<8)
                {
                        temp[i][j+1]+=board[i][j];
                }
                if (i<8&&j<8)
                {
                        temp[i+1][j+1]+=board[i][j];
                }
                if (i<8&&j>0)
                {
                        temp[i+1][j-1]+=board[i][j];
                }
                if (i>0&&j<8)
                {
                        temp[i-1][j+1]+=board[i][j];
                }
                if (i>0&&j>0)
                {
                        temp[i-1][j-1]+=board[i][j];
                }
            }
        } 
}   
void turn()
{
     int i,j;
     for (i=0;i<9;i++)
     {
         for (j=0;j<9;j++)
         {
             board[i][j] = temp[i][j];
         }
     }  
     memset(temp, 0, sizeof(temp));
}          