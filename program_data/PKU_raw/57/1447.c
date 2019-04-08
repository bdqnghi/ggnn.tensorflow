int main()
{
	char *p,a[100];
	int n,l;
	scanf("%d",&n);
	for(int j=0;j<n;j++)
	{
	scanf("%s",a);
		p=a;
		l=strlen(a);
		if(strcmp("er",(p+l-2))==0){*(p+l-2)='\0';puts(p);}
		if(strcmp("ly",(p+l-2))==0){*(p+l-2)='\0';puts(p);}
		if(strcmp("ing",(p+l-3))==0){*(p+l-3)='\0';puts(p);}
	}

	return 0;
}

