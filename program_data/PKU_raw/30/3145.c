int main()
{
int n,i,s=0;
cin>>n;
for(i=1;i<=n;i++)
{
 if(i%7!=0)
{
 if(i!=17&&i!=27&&i!=37&&i!=47&&i!=57&&i!=67&&i!=71&&i!=72&&i!=73&&i!=74&&i!=75&&i!=76&&i!=78&&i!=79&&i!=87&&i!=97)
	 s=s+i*i;
 else s=s+0;
 }
 else s=s+0;
 }
 cout<<s<<endl;
 return 0;
}