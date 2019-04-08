int sdw1(char s1[],int a[])
{
    int len=strlen(s1);
    int i;
    for(i=0;i<len;i++)
    {
                      a[len-1-i]=s1[i]-'0';
    }
    return len;
}
int add(int a[],int b[],int c[],int la,int lb)
{
    int i;
    int len=(la>lb)?la:lb;
    for(i=0;i<len;i++)
    {
                  c[i]=a[i]+b[i];
    }
    for(i=0;i<len;i++)
    {
                      if(c[i]>=10)
                      {
                                  c[i+1]=c[i+1]+1;
                                  c[i]=c[i]%10;
                      }
    }
    return (c[len]!=0)?(len+1):len;
}
int main()
{
    char s1[300],s2[300];
    int a[300]={0};
    int b[300]={0};
    int c[300]={0};
    int i,la,lb,len,n=0;
    scanf("%s%s",s1,s2);
    la=sdw1(s1,a);
    lb=sdw1(s2,b);
    len=add(a,b,c,la,lb);
    for(i=len-1;i>0;i--)
    {
                        if(c[i]!=0)
                        {
                                   n=i;
                                   break;
                        }
    }
    for(i=n;i>-1;i--)
    {
                      printf("%d",c[i]);
    }
  
    return 0;
}

                                 
   

