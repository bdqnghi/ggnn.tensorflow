//*************************
//??:???? **
//??:??? 1300012991 **
//??:2013.11.11 **
//*************************

int main()
{
    int n, m, i, j, sum = 0; //sum??????, m????, n^2?????
    char sickman[101][101]; //sickman???????
 
    cin >> n; //?????
    memset (sickman, '#', sizeof(sickman)); //???????'#',?????
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            cin >> sickman[i][j]; //??????
          //  if( '\n' == sickman[i][j] )
            //    --j;
        }
 
	cin >> m; //????
      
    while(--m > 0) //???????????????????????????
    {
        for ( i = 0; i < n; i++)
            for ( j = 0; j < n; j++)
            {
                if (sickman[i][j] == '@') //??????
                {
                    if( i-1 >= 0 && sickman[i-1][j] == '.') //???????????= =,?????*
                        sickman[i-1][j] = '*';
                    if( i+1 < n  && sickman[i+1][j] == '.')
                        sickman[i+1][j] = '*';
                    if( j-1 >= 0  && sickman[i][j-1] == '.')
                        sickman[i][j-1] = '*';
                    if( j+1 < n  && sickman[i][j+1] == '.')
                        sickman[i][j+1] = '*';
                }
            }
 
        for( i = 0; i < n; i++)
            for( j = 0; j < n; j++)
                if(sickman[i][j] == '*') //*???@
                    sickman[i][j] = '@';
    }
 
    for( i = 0; i < n; i++)
        for( j = 0; j < n; j++)
                if(sickman[i][j] == '@') //@??????
                    ++sum;
	cout << sum; //???????
    return 0;
}