//********************************
//*????????????   **
//*?????? 1200012827 **
//*???2012.11.24  **
//********************************
int board[100][100];
void Subduction(int);          //???? 
void Turn(int); 
int n;              //???? 
int sum;
int main()
{
    int i;
    cin >> n;
    for (i = 0;i <= n-1;i++)
    {
        sum = 0;
        int j,k;
        for (j = 0;j <= n-1;j++)               //???? 
        {
            for (k = 0;k <= n-1;k++)
            {
                cin >> board[j][k];
            }
        }
       
        Subduction(n);                     //?N????????? 
    }        return 0;
}

void Subduction(int m)
{
     if (m == 1)                                    //???????? 
     {
         cout << sum << endl;
     }
     else
     {
     int rowmin[100];
     int colmin[100];
     int p,q;
     for (p = 0; p <= m-1; p++)                   //????? 
     {
         rowmin[p] = board[p][0];
         for (q = 0; q <= m-1; q++)
         {
             if (board[p][q]<rowmin[p])
             {
                 rowmin[p] = board[p][q];
             }
         }
     }
     
     for (p = 0; p <= m-1; p++)                  //??? 
     {
         for (q = 0; q <= m-1; q++)
         {
             board[p][q] -= rowmin[p];
         }
     }
     for (q = 0; q <= m-1; q++)                 //????? 
     {
         colmin[q] = board[0][q];
         for (p = 0; p <= m-1; p++)
         {
             if (board[p][q] < colmin[q])
             {
                 colmin[q] = board[p][q];
             }
         }
     }
     
     for (q = 0;q <= m-1; q++)                       //??? 
     {
         for (p = 0; p <= m-1; p++)
         {
             board[p][q] -= colmin[q];
         }
     }
     sum += board[1][1];                          //?? 
     Turn(m);
     Subduction(m-1);
     }
}


void Turn(int m)                                 //?? 
{
     int p,q;
     for (q = 1; q <= m-2; q++)                       //????????????? 
     {
         board[0][q] = board[0][q+1];
     }
     for (p = 1; p <= m-2; p++)                       //?????????????
     {
         board[p][0] = board[p+1][0];
     } 
     for (p = 1; p <= m-2; p++)                        //????????? 
     {
         for (q = 1; q <=m-2; q++)
         {
             board[p][q] = board[p+1][q+1];
         }
     }
}
     
     
                                         
             
     
     
        