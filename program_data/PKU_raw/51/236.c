struct word
{
	char b[6];
	int count;
}p[600],tmp;

int main()
{
	char a[600]={0},x[6];
	int n,len,sign=0,m=0;
	int i,j,k;
	scanf("%d",&n);
	scanf("%s",a);
	len=strlen(a);
	for(i=0;i<=len-n;i++)
	{
		for(j=0;j<6;j++)
		{
			x[j]='\0';
		}
		sign=0;
		for(j=0;j<n;j++)
		{	x[j]=a[i+j];}

		for(k=0;k<=m;k++)
		{
			if(strcmp(x,p[k].b)==0)
			{
				p[k].count++;
				sign=1;
				break;
			}
		}
			if(sign==0)
			{
				strcpy(p[m].b,x);
				p[m].count=1;
				m++;
				
			}
		
	}


	for(i=0;i<m;i++)
	{
		for(j=m-1;j>0;j--)
		{
			if(p[j].count>p[j-1].count)
			{
				tmp=p[j];
				p[j]=p[j-1];
				p[j-1]=tmp;
			}

		}
	}
	if(p[0].count<=1)
	{
		printf("NO\n");
	}
	else{

	printf("%d\n%s\n",p[0].count,p[0].b);
	for(i=1;i<m;i++)
	{
		if(p[i].count==p[i-1].count)
		{
			printf("%s\n",p[i].b);
		}
		else
			break;
	}
	}
	return 0;
}








				
	

