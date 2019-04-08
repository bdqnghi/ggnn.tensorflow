
void main()
{
	int i,j,k,l;
	char a[50],b[50];
	for(i=0;;i++)
	{a[i]=getchar();
	if(a[i]==' ')break;
	}
	gets(b);
	j=strlen(b);
	for(k=0;k<=j-i;k++)
	{
		for(l=0;a[l]==b[k];l++,k++)
		{
			if(l==i-1)
			{
				printf("%d\n",k-i+1);break;
			}
		}
		if(l==i-1)break;
	}
}
