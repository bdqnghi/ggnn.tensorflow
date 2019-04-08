int main()
{
	char s[501],a[250][6],m[6];
	int b[250],max=0,i,n,j,k;
	scanf("%d\n",&n);
    gets(s);
	for(i=0,k=0;;i++,k++)
	{
		for(j=0;j<n;j++)
		   m[j]=s[j+i];
		m[n]='\0';
		if(m[n-1]=='\0') break;
		for(j=0;j<k;j++)
		if(strcmp(a[j],m)==0) break;
		if(j!=k) 
		{b[j]++;
		k--;}
		else 
		{strcpy(a[k],m);
		b[k]=1;}
	}
	for(i=0;i<k;i++)
	{
		if(max<b[i]) max=b[i];
	}
	if(max==1) printf("NO\n");
	else
	{printf("%d\n",max);
	for(i=0;i<k;i++)
	{
		if(max==b[i])
			printf("%s\n",a[i]);
	}}
	return 0;
}
