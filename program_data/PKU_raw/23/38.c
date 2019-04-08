void main( )
{
	int i,j,sum=0;
	int p1[100],p2[100];
	char *str=(char *)malloc(101*sizeof(char));
	gets(str);
	char *p[100];
    for(i=0;i<100;i++)
		p[i]=(char *)malloc(sizeof(char)*100); 
	p1[0]=0;
	for(i=0;*(str+i)!='\0';i++)
	{if(*(str+i)==' ')
		{   p2[sum]=i-1;
		sum++;}
		else if(*(str+i-1)==' '&&*(str+i)!=' '&&*(str+i)!='\0')
			p1[sum]=i;
	}
	p2[sum]=i-1;
	sum++;
	for(i=0;i<sum;i++)
		for(j=p1[i];j<=p2[i];j++)
			p[i][(j-p1[i])]=*(str+j);
	for(i=0;i<sum;i++)
		p[i][(p2[i]-p1[i]+1)]='\0';
	for(i=sum-1;i>0;i--)
	{printf("%s",p[i]);
	printf(" ");}
	puts(p[0]);
}