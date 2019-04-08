
void main()
{
	int judgep(int i);
	int judgeh(int i);
	int m,n,i,flag1,flag2,flag;
	scanf("%d%d",&m,&n);
	for (i=m,flag1=0,flag2=0,flag=0;i<n+1;i++)
	{
		flag1=judgep(i);
		flag2=judgeh(i);
		if (!flag1)
			continue;
		else if (flag1&&flag2&&(flag==0))
		{
			printf("%d",i);
			flag=1;
		}
		else if (flag1&&flag2&&flag)
			printf(",%d",i);
	}
	if (!flag)
		printf("no");
	printf("\n");
}

int judgep(int i)
{
	int j,flag,temp;
	for (j=2,flag=0;j<i;j++)
	{
		if (i%j==0)
		{
			flag=1;
			break;
		}
	}
	if (flag)
		temp=0;
	else
		temp=1;
	return(temp);
}

int judgeh(int i)
{
	int temp,s,t;
	t=i;
	s=0;
	while(i/10!=0)
	{
		s=(s+i%10)*10;
		i=i/10;
	}
	s=s+i;
	if (t==s)
		temp=1;
	else
		temp=0;
	return(temp);
}