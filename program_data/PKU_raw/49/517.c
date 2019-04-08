char a[501];
int len;
int lookfor(int k)
{
	char *p=NULL,*q=NULL;
	int i,p1=1,j;
	for(i=0;i<=len-k;i++)
	{
		p=&a[i];p1=1;
		q=&a[i+k-1];
		while(p<q)
		{
			if(*p!=*q)
			{
				p1=0;break;
			}
			p++;q--;
		}
		if(p1==1)
		{
			for(j=0;j<=k-1;j++)
				cout<<a[j+i];
			cout<<endl;
		}
	}
	return 0;
}
int main()
{
	int i;
	cin>>a;
	len=strlen(a);
	for(i=2;i<=len;i++)
	lookfor(i);
	return 0;
}

