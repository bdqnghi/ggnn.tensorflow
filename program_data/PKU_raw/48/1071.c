/**
 *@file 2.cpp
 *@author ???
 *@date 2013-12-03
 *@description ????????
 */


int a[11][11]={0}, b[11][11]={0}, m, n;

void xi(int n)
{
    int i, j, p;
    if(n==0)
        a[5][5]=m;
    
    else
    {
        xi(n-1);
        p=0;
        for(i=1; i<=9; i++)
        {
            for(j=1; j<=9; j++)
            {
                if(a[i][j]!=0)
                {
                    p++;
                }
            }
        }
        p= sqrt(p)/2;
        for(i=5-p; i<=5+p; i++)
        {
            for(j=5-p; j<=5+p; j++)
            {
           
                b[i][j]=a[i][j];
                a[i][j]=a[i][j] * 2;
            }
        }
        for(i=5-p; i<=5+p; i++)
        {
            for(j=5-p; j<=5+p; j++)
            {
                a[i-1][j]+=b[i][j];
                a[i+1][j]+=b[i][j];
                a[i][j+1]+=b[i][j];
                a[i][j-1]+=b[i][j];
                a[i-1][j+1]+=b[i][j];
                a[i-1][j-1]+=b[i][j];
                a[i+1][j+1]+=b[i][j];
                a[i+1][j-1]+=b[i][j];
                
        
            }
        }
        
        
    }
    
    
    
}

int main()
{
    int i, j;
    cin >> m >> n;
    xi(n);
    for(i=1; i<=9; i++)
    {
        for(j=1; j<=9; j++)
        {
            cout << a[i][j];
            if(j<=8)
                cout << " ";
        }
        cout << endl;
    }
    return 0;
    
}