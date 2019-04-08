int main()
{int n,i,j,b[100][81]={0},c[100]={0},l;
char a[100][81];
cin>>n;
cin.get();
for(i=0;i<n;i++)
 {cin.getline(a[i],81);
  c[i]=strlen(a[i]);
  for(j=0;j<c[i];j++)
  b[i][j]=a[i][j];
  
  l=1;
  if((b[i][0]>=65&&b[i][0]<=90)||(b[i][0]>=97&&b[i][0]<=122)||b[i][0]==95)
  {
   for(j=1;j<c[i];j++)
   {if((b[i][j]>=65&&b[i][j]<=90)||(b[i][j]>=97&&b[i][j]<=122)||(b[i][j]>=48&&b[i][j]<=57)||b[i][j]==95)
     l++;}
    if(l==c[i])
    cout<<"1"<<endl;
    else cout<<"0"<<endl;}
  else cout<<"0"<<endl;}
 return 0;
}

