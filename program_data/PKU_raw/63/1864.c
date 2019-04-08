/**
*@file 1.cpp
*@author ???
*@date 2013-11-06
*@description ????
*/


int main()                                       
{
    int a[110][110], b[110][110], c[110][110], x1, y1, x2, y2;
    int i, j, p;
    cin >> x1 >> y1;
    for(i=1; i<=x1; i++)
    {
        for(j=1; j<=y1; j++)
        {
            cin >> a[i][j];
        }
    }
    cin >> x2 >> y2;
    for(i=1; i<=x2; i++)
    {
        for(j=1; j<=y2; j++)
        {
            cin >> b[i][j];
        }
    }
    for(i=1; i<=x1; i++)
       { for(j=1; j<=y2; j++)
           { for(p=1; p<=x2; p++)
               { c[i][j]+=a[i][p]*b[p][j];}
           }
        }
     for(i=1; i<=x1; i++)
     { 
         for(j=1; j<y2; j++)
         {
             printf("%d ",c[i][j]);
             
          }
             printf("%d\n",c[i][y2]);
     }
     return 0;
}
 