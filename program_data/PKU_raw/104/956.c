int main()
{
	int put(int );
	int min(int ,int );
	int a[10],b[10],a1[10],b1[10];
	int n1,n2,p=0,q=0,i,j=0;
	scanf("%d%d",&n1,&n2);
	for(i=0;;i++)
	{
		a[i]=n1;
		n1=put(n1);
		p++;
		if(n1==0)
			break;
	}
	for(i=0;;i++)
	{
		b[i]=n2;
		n2=put(n2);
		q++;
		if(n2==0)
			break;
	}
	for(i=p;i>0;i--)
	{
		a1[j]=a[i-1];
		j++;
	}
	j=0;
	for(i=q;i>0;i--)
	{
		b1[j]=b[i-1];
		j++;
	}
	for(i=0;i<min(p,q);i++)
	{
		if(a1[i]==b1[i]&&a1[i+1]!=b1[i+1])
		{
			printf("%d",a1[i]);
			break;
		}
	}
	return 0;
}

int put(int a)
{
	int m;
	if(a%2==0)
		m=a/2;
	else
		m=(a-1)/2;
	return m;
}

int min(int a,int b)
{
	int m;
	if(a<b)
		m=a;
	else
		m=b;
	return m;
}
