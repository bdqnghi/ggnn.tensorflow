
int pow(int n)//??10?n???
{
       int a=1,i=0;
       for(i=0;i<n;i++)
       a=a*10;
       return a;
}

int reverse(int n)//??????
{
    int b=0,k=0,i,j,a[10];
      if(n<0)
      {
             n=-n;
             k=1;
      }
      for(i=0;i<10;i++)
      {
             a[i]=n/pow(9-i);
             n=n%pow(9-i);
      }
      for(j=0;a[j]==0;j++);
      for(i=9;i>=j;i--)
             b=b*10+a[i];
     if(k==1) return -b;
        else return b;
}



int main()
{
       int i,n,b;
      for(i=0;i<6;i++)//?????????????????????
    {
           cin>>n;
         b=reverse(n);
        cout<<b<<endl;
    }
    return 0;
}
