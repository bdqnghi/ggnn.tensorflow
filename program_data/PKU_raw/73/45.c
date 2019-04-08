int main()
{
    long int a[7][7];
    long int i,j,x=0,y=0,m,k;
    for (i=0;i<5;i++)
       for (j=0;j<5;j++) 
          cin>>a[i][j];
    for (i=0;i<5;i++)
        {
         x=i;y=0;m=a[i][0];
         for (j=1;j<5;j++)
            {
            if (m<a[i][j])
               {
               m=a[i][j];
               x=i;
               y=j;
               }
            
            }
         for (k=0;k<5;k++)
                 {
                 if (m>a[k][y])
                   break;
                 }
              if (k==5)
                    {
                    cout<<x+1<<" "<<y+1<<" "<<m;
                    i=5;j=5;
                    m=0;
                    }
    }
    if (m)
       cout<<"not found";
    return 0;
}
