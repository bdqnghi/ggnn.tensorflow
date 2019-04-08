void f(int n,int a[100])
{  if(n==0)  return ;
   else 
     {  int b[100]={0};
        int i;
        for(i=1;i<100;i++)
          {  b[i]=(2*a[i])/10;
             a[i]=(2*a[i])%10+b[i-1];
          }
        f(n-1,a);
     } 
}
             
int main()
{  int n;
   cin>>n;
   int a[100]={0};
   a[1]=1;
   f(n,a);
   int i;
   int t=0;
   for(i=99;i>=1;i--)
     {  if(a[i]!=0)  t=1;
        if(t==1)  cout<<a[i];
     }
   return 0;
}