
int main() 
{
	int i,j,n,k;
	char c;
	scanf("%d",&n);
	char **p=(char **)malloc(n*sizeof(char *));
	*p=(char *)malloc(100*sizeof(char));
	gets(*p);
	for(i=0;i<n;i++)
	{
		*(p+i)=(char *)malloc(100*sizeof(char));
		gets(*(p+i));
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<strlen(*(p+i));j++)
		{
			k=1;
			c=*(*(p+i)+j);
			if(j==0)
				if((c<'a'||c>'z')&&(c<'A'||c>'Z')&&c!='_')
				{
					k=0;break;
				}
			if(j!=0)
				if((c<'a'||c>'z') && (c<'A'||c>'Z')&& c!='_' && (c<'0'||c>'9'))
				{
				k=0;break;
				}
		}
		printf("%d\n",k);
	}
	
	
	
	
	return 0;

}