void main()
{
	char a[20],b[20],c[20]={""},*p;
	int l1,l2,l,i,j;
	scanf("%s",a);
	scanf("%s",b);
	p=c;
	l1=strlen(a);
	l2=strlen(b);
	l=l1;
	if(l1!=l2)
	printf("NO");
	else
	{
		for(i=0;i<l;i++)
		{
			for(j=0;j<l;j++)
				if(a[i]==b[j])
					*(p+i)=a[i];
		}
		if(strcmp(a,c)==0)
			printf("YES");
		else
			printf("NO");
	}
}


	

