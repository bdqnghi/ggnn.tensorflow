int max(int x1,int x2,int x3,int x4,int x5)
{
     if (x1<x2) x1=x2;
     if (x1<x3) x1=x3;
     if (x1<x4) x1=x4;
     if (x1<x5) x1=x5;
     return x1;
}
int min(int x1,int x2,int x3,int x4,int x5)
{
     if (x1>x2) x1=x2;
     if (x1>x3) x1=x3;
     if (x1>x4) x1=x4;
     if (x1>x5) x1=x5;
     return x1;
}
main ()
{ 
    int a[5][5];
    int i,j;
    for (i=0;i<5;i++)
       for (j=0;j<5;j++)
         {
            scanf ("%d",&a[i][j]);      
         }
    int m=0;   
    for (i=0;i<5;i++)
       for (j=0;j<5;j++)
        {
          int p=max (a[i][0],a[i][1],a[i][2],a[i][3],a[i][4]),q=min (a[0][j],a[1][j],a[2][j],a[3][j],a[4][j]);
          if (p==q&&p==a[i][j])
            {  
              printf ("%d %d %d",i+1,j+1,a[i][j]);
              m=1;
            } 
        }
    if (m==0)
        printf ("not found");    
} 
