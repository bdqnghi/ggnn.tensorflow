char zhengshu[202]={0};
int numout[402]={0},numin1[402]={0},num[202]={0},lenout,len1,len2;
int main()
{
	int i,pd=0,bg,tw=0,nu;
	cin.getline(zhengshu,202);//????????????
	len1=strlen(zhengshu);
	for(i=0;i<len1;i++)numin1[i]=zhengshu[i]-48;
	tw=numin1[0];
	for(i=0;i<len1-1;i++)
	{
		nu=tw*10+numin1[i+1];
		numout[i]=nu/13;
		tw=nu%13;
	}
	bg=!numout[0];
	for (i=bg;i<len1-1;i++)cout<<numout[i];
	if(len1<=2&&numout[0]==0)cout<<0;
	cout<<endl;
	cout<<tw;
	return 0;
}