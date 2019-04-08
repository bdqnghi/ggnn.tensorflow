char a[300],b[300];
char x[300],y[300];
int he[300],l;
int main()
{
	int i,j;
	cin>>a>>b;
	if (strlen(a)==1&&strlen(b)==1&&a[0]=='0'&&b[0]=='0') cout<<"0"<<endl;
	else
	{
		memset(he,0,sizeof(he));
		memset(x,'0',sizeof(x));
		memset(y,'0',sizeof(y));
		for (i=0;i<strlen(a);i++)
		{
			x[strlen(a)-i-1]=a[i];
		}
		for (i=0;i<strlen(b);i++)
		{
			y[strlen(b)-i-1]=b[i];
		}
		if (strlen(a)>strlen(b))
		{
			l=strlen(a);
			for (i=strlen(b);i<strlen(a);i++)
			{
				y[i]='0';
			}
		}
		else
		{
			l=strlen(b);
			for (i=strlen(a);i<strlen(b);i++)
			{
				x[i]='0';
			}
		}
		for (i=0;i<l;i++)
		{
			he[i]=he[i]+((int)x[i]-48)+((int)y[i]-48);
			if (he[i]>=10)
			{
				he[i+1]++;
				he[i]=he[i]%10;
			}
		}
		for (i=299;i>=0;i--)
		{
			if (he[i]!=0) break;
		}
		for (j=i;j>=0;j--)
			cout<<he[j];
		cout<<endl;
	}
	return 0;
}