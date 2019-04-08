void main()
{
	char a[300],temp;
	int i,j,l,t=0,k,flag=1,jmin;
	gets(a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		jmin=i;
		for(j=i+1;j<l;j++)
			if(a[j]<a[jmin]) jmin=j;
		temp=a[i];
		a[i]=a[jmin];
		a[jmin]=temp;
	}
	for(i=0;i<l;i++)
	{
		if(a[i]<='z'&&a[i]>='a')
		{
		flag=1;
		t=0;
		for(j=0;j<l;j++)               //?????????
			if(a[i]==a[j]) t++;
		for(k=i-1;k>=0;k--)            //?????????
			if(a[i]==a[k]) flag=0;
		if(flag==1) printf("%c=%d\n",a[i],t);
		}
	}
	if(t==0) printf("No");
}
