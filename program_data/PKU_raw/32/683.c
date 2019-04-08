/*
 * ????BigIntegerSubtraction.cpp
 * ?????????????
 * Created on: 2010-12-25
 * Author: ???
 */
int main()
{
	int n;
	char a[100],b[100];
	char d[100],e[100];
	int f[100];
	int i,j,k;
	int p,q;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	memset(f,0,sizeof(f));
	memset(d,0,sizeof(d));
	memset(e,0,sizeof(e));
	cin>>n;
	gets(a);
	for(k=1;k<=n;k++)
	{
		memset(a,0,sizeof(a));
			memset(b,0,sizeof(b));
			memset(f,0,sizeof(f));
			memset(d,0,sizeof(d));
			memset(e,0,sizeof(e));
		cin>>a;
		cin>>b;
		p=strlen(a);
		q=strlen(b);
		for(j=0;j<p;j++)
			d[j]=a[p-1-j];
		for(j=0;j<q;j++)
			e[j]=b[q-1-j];
		for(i=0;i<q;i++)
		{
			if(d[i]>=e[i])
               f[i]=d[i]-e[i];
			else
			{
				f[i]=10+d[i]-e[i];
				d[i+1]=d[i+1]-1;
			}

		}
		for(;i<p;i++)
			f[i]=d[i]-'0';
		for(i=99;i>=0;i--)
		{
			if(f[i]!=0)
				break;


		}
		for(;i>=0;i--)
			cout<<f[i];
        cout<<endl;


	}
	return 0;

}