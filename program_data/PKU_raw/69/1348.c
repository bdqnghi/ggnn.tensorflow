int max(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}
int main()
{
	char a[300],b[300],t;
	int i,flag=0,aa,bb;
	memset(a,0,300);
	memset(b,0,300);
	cin.getline(a,300);
	cin.getline(b,300);
	aa=strlen(a);
	bb=strlen(b);
	if(aa==1&&bb==1&&a[0]=='0'&&b[0]=='0')
	{
		cout<<"0";
		return 0;
	}
	for(i=aa;i<=max(aa,bb);i++)
	{
		a[i]='0';
	}
	for(i=bb;i<=max(aa,bb);i++)
	{
		b[i]='0';
	}
	for(i=0;i<aa/2;i++)
	{
		t=a[aa-i-1];
		a[aa-i-1]=a[i];
		a[i]=t;
	}
	for(i=0;i<bb/2;i++)
	{
		t=b[bb-i-1];
		b[bb-i-1]=b[i];
		b[i]=t;
	}
	for(i=0;i<=max(aa,bb)+1;i++)
	{
		a[i]=a[i]+b[i]-'0';
		if(a[i]>'9')
		{
			a[i]=(char)(a[i]-10);
			a[i+1]+=1;
		}
	}
	
	for(i=max(aa,bb)+1;i>=0;i--)
	{
		if(flag==0&&a[i]>=49&&a[i]<=57)
		{
			cout<<a[i];
			flag=1;
		}
		else if(flag==1)
		{
			cout<<a[i];
		}
	}
	return 0;
}
