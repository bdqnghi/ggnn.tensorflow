void main()
{
	char c,str[3000];
	int i,j=0,k,n,a[300]={0};
	gets(str);
	n=strlen(str);
	for(i=0;i<n;i++){
		if(str[i]!=' ')
			a[j]++;
		if(str[i]==' ')
		{
			j++;
			for(k=i;k<n;k++)
				if(str[k]!=' ')
					break;
			i=k-1;
		}
	}
	for(i=0;i<=j;i++){
		if(i==j)
		printf("%d",a[i]);
		else
			printf("%d,",a[i]);
	}
}