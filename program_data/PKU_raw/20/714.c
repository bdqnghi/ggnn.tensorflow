void main()
{
	char str[20],substr[20],t,last[20]={0};
	int i,k,l;
	for(;;)
	{
		if(scanf("%s%s",str,substr)==EOF) break;
		t=str[0];k=0;l=strlen(str);
		for(i=0;i<l;i++)
		{
			if(str[i]>t) {t=str[i];k=i;}
		}
		for(i=0;i<=k;i++)
			last[i]=str[i];
		for(i=k+1;i<=k+3;i++)
			last[i]=substr[i-k-1];
		for(i=k+4;i<l+3;i++)
			last[i]=str[i-3];
		last[l+3]=0;
		puts(last);
	}

}