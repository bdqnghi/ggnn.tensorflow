const int month[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},
{0,31,29,31,30,31,30,31,31,30,31,30,31}};
int main()
{
	int i,leap=0,y,m,d,ans=0;
	cin>>y>>m>>d;
	if ((y%4==0)&&(y%100!=0)||(y%400==0)) leap=1;
	for (i=1;i<m;i++) ans+=month[leap][i];
	ans+=d;
	cout<<ans<<endl;
	return 0;
}