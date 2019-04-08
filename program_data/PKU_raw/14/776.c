int x[100000],y[100000],z[100000],s[100000],b[100000];
int main(int argc, char* argv[])
{
	int n;
	scanf("%d",&n);
	int i,j,t,m1,m2;
	for(i=1;i<=n;i++)
	{
		scanf("%d%d%d",&x[i],&y[i],&z[i]);
		s[i]=y[i]+z[i];
		b[i]=s[i];
	}
    for(i=1;i<4;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(s[i]<s[j])
			{
				t=s[i];
                s[i]=s[j];
                s[j]=t;
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		if(s[1]==b[i])
		{
			m1=i;
			printf("%d %d\n",x[i],b[i]);
			break;
		}
	}
	for(i=1;i<=n;i++)
	{
		if(s[2]==b[i]&&i!=m1)
		{
			m2=i;
			printf("%d %d\n",x[i],b[i]);
			break;
		}
	}
	for(i=1;i<=n;i++)
	{
		if(s[3]==b[i]&&i!=m1&&i!=m2)
		{
			printf("%d %d\n",x[i],b[i]);
			break;
		}
	}
	return 0;
}

