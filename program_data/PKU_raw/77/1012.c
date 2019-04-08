char d,e;
void sort(char *t,char *p,char *q,int i)
{
	int j,n;
	for(j=0;j<i;j++)
	{
		if(t[j]==e)
		{
			t[j]=0;
			*q=j;
			for(n=j;n>=0;n--)
			{
				if(t[n]==d)
				{
					t[n]=0;
					*p=n;break;
				}
			}
		break;
		}
	}
}
main()
{
	char a[100],b[50],c[50],*p,*q,*t;
	int i,j;
	p=b;q=c;t=a;
	for(i=0;i<100;i++)
	{
		scanf("%c",&a[i]);
		if(a[i]==10) break;
	}
	d=a[0];e=a[i-1];
	for(j=0;j<i/2;j++,p++,q++)
	{
		sort(t,p,q,i);
	}
	p=b;q=c;
	for(j=0;j<i/2;j++)
	{
		printf("%d %d\n",p[j],q[j]);
	}
	return 0;
}