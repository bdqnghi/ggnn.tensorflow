void main()
{
	char str[300];
	int i,n,let[130]={0},a,m=0;
	gets(str);
	n=strlen(str);
	for(i=0;i<n;i++)
		if(str[i]>96&&str[i]<123)
		{
			a=str[i];
			let[a]++;
			m++;
		}
		for(i=97;i<123;i++)
			if(let[i]>0)
		printf("%c=%d\n",i,let[i]);
			if(m==0)
				printf("No");
}