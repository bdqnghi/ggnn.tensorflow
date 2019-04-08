

int main()
{
   int row,col;
   cin>>row>>col;
   int a[1000][1000];
   int i,j;
   int m,n;
   for(i=1;i<=row;i++)
   {
       for(j=1;j<=col;j++)
       {
           cin>>a[i][j];
       }
   }
   int time=0;
   for(j=1;j<=col;j++)
   {
       m=1;n=j;
       while(1)
       {
           cout<<a[m][n];
           time=time+1;
           if(time<row*col)
           cout<<endl;
           n=n-1;
           m=m+1;
           if(n<1)
            break;
            if(m>row)
            break;
       }
   }
   for(i=2;i<=row;i++)
   {
         m=i;n=col;
       while(1)
       {
           cout<<a[m][n];
           time=time+1;
           if(time<row*col)
           cout<<endl;
           n=n-1;
           m=m+1;

            if(n<1)
            break;
            if(m>row)
            break;
       }
   }







    return 0;
}