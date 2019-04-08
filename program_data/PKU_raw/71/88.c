int min(int m1,int m2)
{
    if(m1<m2)
    {
             return m1;
    }
    else
    {return m2;}
} 
int max(int m1,int m2)
{
    if(m1>m2)
    {return m1;}
    else
    {return m2;}
}
int main()
{
    int n,i,b,j;
    scanf("%d",&n);
    int a[n],m1[n],m2[n];
    for(i=0;i<n;i++)
    {
    scanf("%d%d%d",&a[i],&m1[i],&m2[i]);
    }
    for(i=0;i<n;i++)
    {
         b=0; 
         if(a[i]%4!=0||(a[i]%100==0&&a[i]%400!=0))
         {
             for(j=min(m1[i],m2[i]);j<max(m1[i],m2[i]);j++)
             {
                  if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
                  {
                       b+=31; 
                  } 
                  else
                  {
                      if(j==2)
                      {
                               b+=28;
                      }
                      else
                      {
                          b+=30;
                      } 
                  } 
             } 
             b=b%7;
             if(b==0)
             {printf("YES\n");}
             else
             {printf("NO\n");} 
         }
         else
         {
             for(j=min(m1[i],m2[i]);j<max(m2[i],m1[i]);j++)
             {
                  if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
                  {
                       b+=31; 
                  } 
                  else
                  {
                      if(j==2)
                      {b+=29;}
                      else
                      {b+=30;} 
                  } 
             }
             b=b%7;
             if(b==0)
             {printf("YES\n");}
             else
             {printf("NO\n");} 
         } 
    }
    return 0; 
}