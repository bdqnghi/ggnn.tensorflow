int main()
{
	int a,i,m=0,n=0;
	char c;
	for(i=1;i>0;)
	{
		scanf("%d",&a);
		scanf("%c",&c);
		if(a>m)
		{
			n=m;
			m=a;
		}
		else if(a>n&&a<m) n=a;
		if (c=='\n') break;
	}
	if(n!=0) printf("%d",n);
	else printf("No");

	return 0;
}