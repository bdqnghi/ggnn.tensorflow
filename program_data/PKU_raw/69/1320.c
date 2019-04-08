
int main()
{
	char a[300];
	char b[300];
	int c[300]={0};
	cin>>a;
	cin>>b;
	int lena,lenb;
	lena=strlen(a);
	lenb=strlen(b);
	int i,k1,k2,k;
	k1=lena-1;
	k2=lenb-1;
	k=0;
	for(i=299;i>=0;i--)
	{
		if(k1<0&&k2<0)
			break;
		if(k1>=0&&k2>=0)
			c[i]+=(a[k1]-'0')+(b[k2]-'0');
		if(k1>=0&&k2<0)
			c[i]+=a[k1]-'0';
		if(k1<0&&k2>=0)
			c[i]+=b[k2]-'0';
		if(c[i]>=10)
		{
			c[i]=c[i]%10;
			c[i-1]=1;
		}
		k1--;
		k2--;
		
	}
	k=-1;
	for(i=0;i<300;i++)
	{
		if(c[i]!=0)
		{
			k=i;
			break;
		}
	}
	if(k==-1)
		cout<<'0'<<endl;
	else
	{
		for(i=k;i<300;i++)
			cout<<c[i];
		cout<<endl;
	}
	return 0;
}