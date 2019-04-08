int main()
{
	char a[251],b[251],c[252];
	int la,lb,i,m,tt;	

	scanf("%s%s",a,b);
	la= strlen(a);
	lb= strlen(b);
	m= la<lb?lb:la ;
	
    for (i=m-1;i>=0;i--)
	{
		if (m==la)
		{
			if (i>=la-lb)
				b[i]=b[i-la+lb];
			else b[i]='0';
		}
		else 
		{
			if (i>=lb-la)
				a[i]=a[i+la-lb];
			else a[i]='0';
		}
	}
//printf("%s\n%s\n",a,b);
	for (i=0; i<=m;i++)
		c[i]='0';

	for (i=m;i>=1;i--)
	{
		c[i]=a[i-1]+b[i-1]+c[i]-96;
		if (c[i]>57)
		{
			c[i]=c[i]-10;
			c[i-1]++;
		}
	}
    tt=0;
	for (i=0;i<=m;i++)
	{
		if (c[i]!='0')
			tt=1;
		if ((c[i]=='0') && (tt==0))
			continue;
		else 
			printf("%c",c[i]);
	}
	printf("\n");
	return 0;
}
