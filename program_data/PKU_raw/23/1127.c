void main()
{
	char a[100];
	int s,l=1,k,j,h,i;
	gets(a);
	s=strlen(a);
	j=s;
	for(k=0;k<=s;k++)
	{
		if(a[k]==' ')
			l++;
	}
	if(l==1)printf("%s",a);
	else
	{
	for(i=1;i<=l-1;i++)
	{  
		k=j-1;
		while(a[k]!=' ')
			k--;
		//printf("%d",k);
		for(h=k+1;h<=j-1;h++)
			printf("%c",a[h]);
		printf(" ");
		j=k;
	}
	i=0;
	while(a[i]!=' ')
	{
		printf("%c",a[i]);
		i++;
	}
	}
}
