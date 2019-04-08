void rank(char *i);

void rank(char *i)
{
	for(;*i!='\0';i++)
	{
		int n,k=0;
		char t;
		for(n=1;*(i+n)!='\0';n++)
		{
			if(*(i+k)>*(i+n))k=n;
		}
		if(k!=0)
		{
			t=*i;*i=*(i+k);*(i+k)=t;
		}
	}
}

void main()
{
	char a[100],b[100],*i,*j;
	int flag=0;
	scanf("%s%s",a,b);
	i=&a[0];j=&b[0];
	rank(i);rank(j);
	for(i=&a[0],j=&b[0];*i!='\0';i++,j++)
	{
		if(*i!=*j)
		{
			printf("NO");
			flag=1;
			break;
		}
	}
	if(flag==0)printf("YES");
}