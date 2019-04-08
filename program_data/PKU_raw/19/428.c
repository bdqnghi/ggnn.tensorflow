
void main()
{
	char str[20][20],a[20],b[20],*p1,*p2,*p[20];
    int i=0,j;
	for(i=0;i<20;i++)
		p[i]=str[i];
	i=0;
	while(1)
	{
		scanf("%s",str[i]);
		if(getchar()=='\n') break;
		i++;
	}
	scanf("%s%s",a,b);
	p1=a;p2=b;
	for(j=0;j<=i;j++)
		if(strcmp(p[j],p1)==0) p[j]=p2;
	
	for(j=0;j<=i;j++)
	{
		if (j==0)printf("%s",p[j]);
		else
			printf(" %s",p[j]);
	}
}