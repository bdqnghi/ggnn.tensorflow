int main()
{
	char a[100];
	char b[100];
	int i,j,len1,len2,flag;
	scanf("%s %s",a,b);
	len1=strlen(a);
	len2=strlen(b);
	char *p;
	p=&a[0];
	char *q;
	q=&b[0];
	for(i=0;i<len2;i++)
	{
		flag=0;
		if(b[i]==*p)
		{
			q=&b[i];
			for(j=0;j<len1;j++)
			{
				if(*(p+j)!=*(q+j))
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				printf("%d",i);
				break;
			}
		}
	}
	return 0;
}