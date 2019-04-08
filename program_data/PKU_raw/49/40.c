void main()
{
	int i,j,p,m,b,c;
	char a[500];
	scanf("%s",&a);
	c=strlen(a);
	for(i=0;i<c;i++)
	{
		if(a[i]==a[i+1])
			printf("%c%c\n",a[i],a[i]);
	}
	for(p=3;p<c;)
	{
		for(i=0;i<c-p;i++)
		{
			b=0;
			for(m=0;m<p/2+1;m++)
			{
				if(a[i+m]==a[p-m+i])
				{b++;}
			}
			if(b==(p/2)+1)
			{
				for(j=i;j<=i+p;j++)
				{
					printf("%c",a[j]);
				}
				printf("\n");
			}
		}
		p+=2;
	}
}
