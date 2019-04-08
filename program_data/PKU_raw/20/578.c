int main()
{
	char str[100],sub[100],*p,*q;
	int i,n,k;
	while(scanf("%s %s",str,sub)!=EOF)
	{
		n=strlen(str);
		q=sub;
        k=0;
		for(i=1;i<n;i++)
		{if(str[i]>str[k])
				k=i;
		}
		for(p=str+n+2;p>str+k+3;p--)
		{
			*p=*(p-3);
		}
		*(str+k+1)=*q;
		*(str+k+2)=*(q+1);
		*(str+k+3)=*(q+2);
		for(p=str;p<str+n+3;p++)
		{	printf("%c",*p);}
		printf("\n");

	}
}