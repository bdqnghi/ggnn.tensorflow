int main()
{
	char str[503];
	char str2[501][6]={'\0'};
	int a[503]={0};
	int *pt1=a;
	char *pt2=str,(*pt3)[6]=str2;
	int i,j,n,p,flag,t,k;
	scanf("%d",&n);
	scanf("%s",str);
	t=strlen(str)-n;
	for(i=0;i<=t;i++)
	{
		for(j=i,p=0;j<=i+n-1;j++)
		{
			*(*(pt3+i)+p)=*(pt2+j);
			p++;
		}
	}
	for(i=0;i<=t;i++)
	{
		for(j=i-1,flag=0;j>=0;j--)
		{
			if(strcmp(*(pt3+i),*(pt3+j))==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0||i==0)
		{
			for(j=i;j<=t;j++)
			{
				if(strcmp(*(pt3+i),*(pt3+j))==0)
				{
					(*(pt1+i))++;
				}
			}
		}
	}
	for(i=0,k=0;i<=t;i++)
	{
		if(*(pt1+i)>k)
		{
			k=*(pt1+i);
		}
	}
	if(k>1)
	{
		printf("%d\n",k);
		for(i=0;i<=t;i++)
		{
			if(*(pt1+i)==k)
			{
				printf("%s\n",*(pt3+i));
			}
		}
	}
	else if(k=1)
	{
		printf("NO");
	}
	return 0;
}
