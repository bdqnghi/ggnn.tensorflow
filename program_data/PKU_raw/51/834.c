struct zifu
{
	int tou;
	int num;
	char e[5];
};
struct chuan
{
	int num;
	char e[5];
};
int main()
{
	int n,c,i,j,k=0,t=0,q=0,w=0,m=0,d,s=0,max;
	char a[500];
	struct zifu zi[1000],temp;
	struct chuan b[1000],p;
	scanf("%d",&n);
	scanf("\n");
	for(i=0;i<500;i++)
	{
		scanf("%c",&a[i]);
		if(a[i]=='\n')
		{
			a[i]='\0';
			break;
		}
	}
	c=strlen(a);
	for(i=0;i<1000;i++)
	{
		zi[i].num=0;
		zi[i].tou=0;
	}
	temp.num=0;
	for(i=0;i<=c-n;i++)
	{
		k=0;
		for(j=i;j<i+n;j++)
		{
			b[i].e[k]=a[j];
			k++;
		}
		b[i].num=i;
		b[i].e[k]='\0';
	}	
	for(j=1;j<=c-n;j++)
	{
		for(i=0;i<=c-n-1;i++)
		{
			if(strcmp(b[i].e,b[i+1].e)>0)
				{
					p=b[i];
				b[i]=b[i+1];
				b[i+1]=p;
				}
		}
	}
	for(i=0;i<=c-n-1;i++)
	{
		m=0;
		
		for(d=0;d<n;d++)
		{
			if(	b[i+1].e[d]==b[i].e[d])
				m++;
		}
			if(m==n)
		{
			for(j=0;j<n;j++)
			zi[t].e[j]=b[i].e[j];
			if(s==0)
			{
				zi[t].tou=b[i].num;
				s++;
			}
			zi[t].num++;
			w++;
		}	
		else
		{	t++;
		s=0;
		}
	}
	if(w==0)
		printf("NO");
	else
	{
	temp=zi[0];
	for(i=0;i<=t-1;i++)
	{
		if(zi[i].num>temp.num)
		{
			temp=zi[i];
			q=i;
		}
	}
	max=temp.num+1;

	printf("%d\n",max);
	for(j=1;j<=t;j++)
	{
		for(i=0;i<=t-1;i++)
		{
			if(zi[i].tou>zi[i+1].tou)
				{
					temp=zi[i];
				zi[i]=zi[i+1];
				zi[i+1]=temp;
				}
		}
	}
	for(i=0;i<=t;i++)
	{
		if(zi[i].num==max-1)
		{
			for(j=0;j<n;j++)
			{
				printf("%c",zi[i].e[j]);
			}
			printf("\n");
		}	
	}
	}
	return 0;
}