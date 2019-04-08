int main()
{
	char c;
	int i=0,jj,j[2000],ch[2000],t[2000],max=0;
	for(jj=0;jj<2000;jj++){j[jj]=0;ch[jj]=0;t[jj]=0;}
	while(1)
	{
		c=getchar();
		if(c=='\n'){i++;break;}
		else if(c>='0'&&c<='9')j[i]=j[i]*10+c-'0';
		else i++;
	}
	i=0;
	while(1)
	{
		c=getchar();
		if(c=='\n'){i++;break;}
		else if(c>='0'&&c<='9')ch[i]=ch[i]*10+c-'0';
		else i++;
	}
	printf("%d ",i);
	for(i--;i>=0;i--)
	{
		for(jj=j[i];jj<ch[i];jj++)t[jj]++;
	}
	for(i=0;i<2000;i++)if(t[i]>max)max=t[i];
	printf("%d",max);
	return 0;
}