int main()
{
 int n,i,j,k,l;
 char a[501]={0},b[501][7]={0};
 int c[501]={0},min=0;
 cin>>n;
 cin>>a;
 l=strlen(a);
 for(i=0;i<=l-n;i++)
 for(j=0;j<n;j++)
   b[i][j]=a[i+j];
 for(i=0;i<=l-n;i++)
  {c[i]=1;
   for(j=1;j<=l-n-i;j++)
   {if(strcmp(b[i],b[i+j])==0)
      {c[i]++;}}}
min=c[0];
 for(i=0;i<=l-n;i++)
  if(c[i]>min)
   min=c[i];
if(min==1)
 cout<<"NO"<<endl;
else {
cout<<min<<endl;
 for(i=0;i<=l-n;i++)
  if(c[i]==min)
   cout<<b[i]<<endl;}
 return 0;
}


