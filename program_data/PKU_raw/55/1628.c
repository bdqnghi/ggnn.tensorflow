int cifang(int u,int g)
{
 long int l=1;
 for(int i=1;i<=g;i++)
 {
  l=l*u;
 }
 return l;
}

int main()
{
 int n,m;
 long int sum=0;
 char a[1000];
 cin>>n;
 cin>>a;
 cin>>m;
 char c[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
 int s=strlen(a);
 for(int i=0;i<=s-1;i++)
 {
  if(a[i]>='0' && a[i]<='9')
  {
   int t=a[i]-'0';
   sum=sum+t * cifang(n,s-1-i);
  }
  else if(a[i]>='A' && a[i]<='Z')
  {
   int t=a[i]-'A'+10;
   sum=sum+t*cifang(n,s-1-i);
  }
  else if(a[i]>='a' && a[i]<='z')
  {
   int t=a[i]-'a'+10;
   sum=sum+t*cifang(n,s-1-i);
  }
 }
 int b[1000];
 int j;
 
 for(int d=0;d<=999;d++)
 {
  b[d]=sum%m;
  sum=(sum-b[d])/m;
  if(sum<m)
  {
   if (sum>0)
   {
    if(sum>10)
    
     cout<<c[sum-10];
    else
     cout<<sum;
    
    for(int f=d;f>=0;f--)
    {
     if(b[f]>=10)
     {
      cout<<c[b[f]-10];
     }
     else
     {
      cout<<b[f];
     }
    }
   break;
   }
   else
   {
    for(int f=d;f>=0;f--)
    {
     if(b[f]>=10)
     {
      cout<<c[b[f]-10];
     }
     else
     {
      cout<<b[f];
     }
    }
    break;
   }
  }
 }
 
 
 return 0;
}