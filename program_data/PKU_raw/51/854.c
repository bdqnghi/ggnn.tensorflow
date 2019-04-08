void main()
{
	unsigned long int n,j,i,len,b[500]={0},a[501]={0},c=0,max=0,m[500]={0},t=0,g=0,z=0;
	char s[501]={'\0'};
	scanf("%d",&n);
	scanf("%s",s);
	len=strlen(s);
	for(i=0;i<=len-n;i++)
		for(j=0;j<n;j++)
		{a[i]=a[i]*100+s[j+i]-32;
		}
	for(i=0;i<len-n+1;i++)
	{for(j=0;j<len-n+1;j++)
	{if(a[i]==a[j])
			{b[i]++;
	}}}
	for(i=0;i<len-n+1;i++)
		if(b[i]>1)
			c=1;
	if(c==0)
		printf("NO");
         else{
	for(g=0;g<len-n+1;g++)
		if(b[g]>max)
		max=b[g];
		z=0;
    for(i=0;i<len-n+1;i++)
		{if(b[i]==max)
		 {z=0;
			for(j=0;j<t&&i!=m[j];j++)
			if(a[i]==a[m[j]])
				z=1;
		if(z==0)
		{m[t]=i;
		t++;}}
		}

	printf("%d\n",max);
	for(j=0;j<t;j++)
	{for(i=0;i<n;i++)
		printf("%c",s[i+m[j]]);
	printf("\n");}}
}