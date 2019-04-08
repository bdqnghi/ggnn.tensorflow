int main()
{
 char a[101][101];//??????
 int n,z=0;
 cin>>n;
 for(int i=0;i<=n-1;i++)
  {
   for(int s=0;s<=n-1;s++)
   {
           cin>>a[i][s];
     if(a[i][s]=='@')//??????????????@
      z=z+1;
   }
 }
 
 int m;
 cin>>m;
 for(int t=2;t<=m;t++)//????????????????????????
 {
   for(int i=0;i<=n-1;i++)
   {
   for(int s=0;s<=n-1;s++)
   {
    if(a[i][s]=='@' && i-1>=0 && a[i-1][s]=='.')
    {
     a[i-1][s]='%';
     z=z+1;//?z????????????
    }
    if(a[i][s]=='@' && i<=n-2 &&a[i+1][s]=='.')
    {
     a[i+1][s]='%';
     z=z+1;
    }
    if(a[i][s]=='@' && s>=1 && a[i][s-1]=='.')
    {
     a[i][s-1]='%';
     z=z+1;
    }
    if(a[i][s]=='@' && s<=n-2 && a[i][s+1]=='.')
    {
     a[i][s+1]='%';
     z=z+1;
    }
       
   }
   }
  for(int i=0;i<=n-1;i++)
   {
   for(int s=0;s<=n-1;s++) 
   {
	   if(a[i][s]=='%')
		   a[i][s]='@';
   }
  }
 }
cout<<z;
return 0;
}