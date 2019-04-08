int deal(char a[],int n,char b[],int m)
{
	char c;
	char az[100],bz[100];
	int i,j,t;
	for(j=0;j<100;j++)
		{
			az[j]='\0';
			bz[j]='\0';
		}
	for(i=0,j=0;i<n;i++)
	{
		if(a[i]==' '||a[i]=='\n') continue;
		else if(a[i]<='Z'&&a[i]>='A') {az[j]=a[i]+32;j++;}
		else {az[j]=a[i];j++;}
	}
	for(i=0;i<j;i++)
	{
		for(t=0;t<j-1-i;t++)
			if(az[t]>az[t+1])
		{
			c=az[t];
			az[t]=az[t+1];
			az[t+1]=c;
		}
	}
	for(i=0,j=0;i<n;i++)
	{
		if(b[i]==' ') continue;
		else if(b[i]<='Z'&&a[i]>='A') {bz[j]=b[i]+32;j++;}
		else {bz[j]=b[i];j++;}
	}
	for(i=0;i<j;i++)
	{
		for(t=0;t<j-1-i;t++)
			if(bz[t]>bz[t+1])
		{
			c=bz[t];
			bz[t]=bz[t+1];
			bz[t+1]=c;
		}
	}
	if(strcmp(az,bz)==0) return(1);
	else return(0);
}

void main()
{
	int la,lb;
	char a[100],b[100];
	scanf("%s%s",a,b);
	la=strlen(a);
	lb=strlen(b);
	if(la!=lb) printf("NO\n");
	else if(deal(a,la,b,lb)) printf("YES\n");
	else printf("NO\n");
}