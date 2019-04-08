void main()
{
	char a[50]={'\0'},b[50]={'\0'};
	char *p,*p1,*p2;
	int k=0;
	scanf("%s%s",a,b);
	p=b;p1=a;
	for(;*p!='\0';p=p+1)
	{
		if(*p==*p1)
		{
			p2=p;
			for(;*p1!='\0';p1=p1+1,p2=p2+1)
			{
				if(*p1==*p2)
					continue;
				else
					break;
			}
			if(*p1=='\0')
			{
				printf("%d",k);break;
			}
			p1=a;
		}
		else
			k++;
	}
}