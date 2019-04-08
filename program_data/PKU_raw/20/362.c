int main()
{
    char str[11],sub[4],*a,*b;
	int max,i,t,n;
	while(scanf("%s %s",str,sub)!=EOF)
	{
		max=0;
		a=str;b=sub;
		n=strlen(str);
		for(i=n-1;i>=0;i--)
		if(*(a+i)>=max)
		{
			t=i;
			max=*(a+i);
		}
		for(i=0;i<=t;i++)
			printf("%c",*(a+i));
		printf("%s",b);
		for(i=t+1;i<n;i++)
			printf("%c",*(a+i));
		printf("\n");
}
}