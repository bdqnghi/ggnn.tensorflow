void main()
{
	int s=0,i,n;
	char *p;
	char a[10000];
	p=a;
	gets(p);
	n=strlen(p);
	for(i=0;i<n;i++)
	{
		if((*(p+i)!=' ')&&(*(p+i)!='\0'))s=s+1;
		if((*(p+i)==' ')&&(*(p+i)!='\0')){if(s>0)printf("%d,",s);s=0;}
		if(*(p+i)=='\0')break;
	}
	printf("%d",s);
}