int main()
{
char st[1000][81]={{'\0'}};
int n,i=0,j,k=0,t,q=0;
cin>>n;
cin.get();
for(i = 0; i < n; i++)
{
cin.getline(st[i],81);
if((st[i][0]<'A'||(st[i][0]>'Z'&&st[i][0]<'a')||st[i][0]>'z')&&st[i][0]!='_')
{
cout<<"0"<<endl;
continue;
}
for(j=1;st[i][j]!='\0';j++)
{
if(st[i][j]<'A'||(st[i][j]>'Z'&&st[i][j]<'a')||st[i][j]>'z')
{
if(st[i][j]=='_'||(st[i][j]>='0'&&st[i][j]<='9'))
continue;
else
    k++;
}
}
if(k==0)
cout<<"1"<<endl;
else
cout<<"0"<<endl;
k=0;
}
return 0;
}