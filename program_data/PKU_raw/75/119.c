int main()
{
	int i,a[1000],b[1000],num=0,l,j=0,c[1000]={0},max=0;
	char m[10000],n[10000],t[100];
	cin>>m>>n;
	l=strlen(m);
	for(i=0;i<=l;i++)
	{
		if(m[i]==','||m[i]=='\0')
		{
			num++;
			t[j]='\0';
			j=0;
			a[num]=atoi(t);
		}
		else
		{
			t[j]=m[i];
			j++;
		}
	}
	num=0;
	j=0;
	l=strlen(n);
	for(i=0;i<=l;i++)
	{
		if(n[i]==','||n[i]=='\0')
		{
			num++;
			t[j]='\0';
			j=0;
			b[num]=atoi(t);
		}
		else
		{
			t[j]=n[i];
			j++;
		}
	}
	cout<<num<<" ";
	for(i=0;i<1000;i++)
	{
		for(j=1;j<=num;j++)
		{
			if(i>=a[j]&&i<b[j])
				c[i]++;
		}
		if(max<c[i])
			max=c[i];
	}
	cout<<max;
	return 0;
}

