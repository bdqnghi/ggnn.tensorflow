int main()
{
    int i,j,n,p;
	char ch[max];

	gets(ch);
	p=1;

	n=strlen(ch);
	for(i=0;i<n;i++)
	{
	    while((ch[i]==' ')&&(i<=n))
			i++;
		j=i;
		while((ch[j]!=' ')&&(j<=n))
			j++;
		if(j>=n) j--;
		if(p)
		{
		    printf("%d",j-i);
			p=0;
		}
		else
			printf(",%d",j-i);
		i=j;
	}

	return 0;
}