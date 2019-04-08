/*?????? (5*5)??????????????????????? 
?????????????????????????????????“not found”? 
*/

int max(int a,int b,int c,int d,int e)
{
    int t=a;
    if (b>t) t=b;
    if (c>t) t=c;
    if (d>t) t=d;
    if (e>t) t=e;
    return t;
}
int min(int a,int b,int c,int d,int e)
{
    int t=a;
    if (b<t) t=b;
    if (c<t) t=c;
    if (d<t) t=d;
    if (e<t) t=e;
    return t;
}
    
int main()
{
     //  printf ("%d\n",max(3,5,7,2,4));
     //  printf ("%d\n",min(3,5,7,2,4));
    int a[5][5],i,j,check=0;
    for (i=0;i<5;i++)
       for (j=0;j<5;j++)
          scanf ("%d",&a[i][j]);
          
    for (i=0;i<5;i++)
    {
       for (j=0;j<5;j++)
       {
           if (a[i][j]==max(a[i][0],a[i][1],a[i][2],a[i][3],a[i][4]) && a[i][j]==min(a[0][j],a[1][j],a[2][j],a[3][j],a[4][j]))
           {
               printf ("%d %d %d\n",i+1,j+1,a[i][j]);
               check=1;
           }
       }
    }
    if (check==0) printf ("not found");
    return 0;
}
