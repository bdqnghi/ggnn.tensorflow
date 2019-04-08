int main()
{
	int a,b,c,d,e,i,j;
	char z[21];
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		scanf("%s",z);
		b=isalpha(z[0]);
		j=strlen(z);
		c=1;
		if((b==0)&&(z[0]!='_'))
		{
			printf("no\n");
			continue;
		}
		for(d=1;d<j;d++)
		{
			e=isalnum(z[d]);
			if((e==0)&&(z[d]!='_'))
			{
				c=0;
				break;
			}
		}
		if(c)
		{
			printf("yes\n");
		}
		else
		{
			printf("no\n");
		}
	}
	return 0;
}