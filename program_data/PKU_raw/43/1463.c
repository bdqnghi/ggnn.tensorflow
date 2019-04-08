int main()
{
    int i,m,j,sum;
    cin >> m;
    for(i=3;i<=m/2;i++)
   {
      sum=1;
        for(j=2;j<=(int)sqrt(i);j++)
        {
            if(i%j==0)
            {
             sum=sum*0;
            }
        }
        if(sum==1)
        {
          for(j=2;j<=(int)sqrt(m-i);j++)
          {
              if((m-i)%j==0)
              {
                  sum=sum*0;
              }
          }
        }
        if(sum==1)
        cout << i << " " << m-i << endl;
   }
return 0;
} 