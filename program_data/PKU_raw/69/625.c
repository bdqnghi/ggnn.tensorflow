int main()
{
	int l1,l2,i,j=0, c[251],d[252];char a[251],b[251];                                       //????????????
	memset(a,0,sizeof(a));memset(b,0,sizeof(b));memset(c,0,sizeof(c));memset(d,0,sizeof(d)); //??????
	cin >> a >> b;                                                                           //?????
	l1=strlen(a);l2=strlen(b);                                                               //?????????????????
	for(i=l1-1;i>=0;i--)
		c[j++]=a[i]-'0';
	j=0;
	for(i=l2-1;i>=0;i--)
		d[j++]=b[i]-'0';
	for(i=0;i<250;i++)                                                                       //???
	{
		c[i]=c[i]+d[i];
		if(c[i]>=10)
		{
			c[i]=c[i]-10;
			c[i+1]=c[i+1]+1;
		}
	}
	i=250;
	while(c[i]==0&&i>0)                                                                      //???
		i--;
	for(j=i;j>=0;j--)
		cout <<c[j];
	cout << endl;
	return 0;
}
