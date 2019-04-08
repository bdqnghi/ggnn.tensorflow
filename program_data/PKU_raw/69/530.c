
int main()
{
	char a[260]={0},b[260]={0},c[260]={0};
	cin.getline(a,255);
	cin.getline(b,255);
	int a1[260]={0},b1[260]={0},c1[260]={0},i=0,na,nb;
	while(a[++i]!=0&&i<255)
		;
	na=i;
	while(i-->0)
		a1[251-na+i]=a[i]-'0';
	while(b[++i]!=0&&i<255)
		;
	nb=i;
	while(i-->0)
		b1[251-nb+i]=b[i]-'0';
	for(i=250;i>0;i--)
	{
		c1[i]+=a1[i]+b1[i];
		if(c1[i]>9)
		{
			c1[i-1]=c1[i]/10;
			c1[i]=c1[i]%10;
		}
	}
	for(i=0;c1[i]==0&&i<255;i++)
		;
	if(i==255)
		cout<<"0";
	for(;i<251;i++)
		cout<<c1[i];
	return 0;
}