void main()
{
    char str[2000];
    int l,i,j,k,t,n,a[300]={0};
	gets(str);
	l=strlen(str);
	n=0;
	for(i=0;i<l;i++) if(str[i]==',') n++;
	j=-1;
	for(i=0;i<n;i++)
	{
		j++;
		k=j;
		while(str[j]!=',') j++;
		for(t=k;t<j;t++) a[i]+=(int)((str[t]-'0')*pow(10,j-t-1));
	}
	j++;
	for(t=j;t<l;t++) a[n]+=(int)((str[t]-'0')*pow(10,l-1-t));
    for(i=n;i>0;i--)
		for(j=0;j<i;j++)
			if(a[j]<a[j+1])
			{
				k=a[j+1];
				a[j+1]=a[j];
				a[j]=k;
			}
    t=1;
	for(i=1;i<=n;i++) if(a[i]==a[0]) t++;
	if (n==0||t==n+1) printf("No");
	else 
	{
		i=0;
		while(a[i]==a[0]) i++;
		printf("%d",a[i]);
	}
}

