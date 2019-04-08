int a=0;

int main()
{
 for (int i=1;i<=6;i++)
 {cin>>a;
  if (a==0)cout<<0;
  else 
  {
  if (a<0){cout<<'-';a=-a;}
  
   int k=0;
   k=a%10;
   while (k==0){a=a/10;k=a%10;}
   while (a!=0){cout<<k;a=a/10;k=a%10;}
   }
   cout<<endl;
  }
return 0;
}
