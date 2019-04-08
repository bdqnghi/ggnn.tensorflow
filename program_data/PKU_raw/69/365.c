// ?????
// ????wayne
// ?????12.30



int main()
{
	char a[250],b[250];
	int a1[250],b1[250],c[260],i,j=0,max;
	for(i=0;i<250;i++)
	{
		a1[i]=0;
		b1[i]=0;
		c[i]=0;
	}
	for(i=250;i<260;i++)
		c[i]=0;
	cin.getline(a,250);
	cin.getline(b,250);
	if(strlen(a)>=strlen(b))
		max=strlen(a);
	else
		max=strlen(b);
	for(i=strlen(a)-1,j=0;i>=0;i--,j++)
		a1[j]=a[i]-'0';
	for(i=strlen(b)-1,j=0;i>=0;i--,j++)
		b1[j]=b[i]-'0';
	for(i=0;i<max;i++)
	{
		c[i]+=a1[i]+b1[i];
		if(c[i]>=10)
		{
			c[i+1]++;
			c[i]-=10;
		}
	}
	while(c[i]==0&&i>0)
		i--;
	for(;i>=0;i--)
		cout<<c[i];
	cout<<endl;
	


	return 0;
}

