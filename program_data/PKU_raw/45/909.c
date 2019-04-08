void main()
{
	char a[100],b[100];
	int i,p,q,m,j,k;
	scanf("%s" "%s",&a,&b);
	p=strlen(b);q=strlen(a);
	for(i=0;i<=p-1;i++)
	{
		if(b[i]==a[0])
			for(j=i+1,k=1;k<=q-1;j++,k++)
			{
				if(b[j]!=a[k]) break;
			}
			if(k==q)
			{
				printf("%d",i);break;
			}
	}
}