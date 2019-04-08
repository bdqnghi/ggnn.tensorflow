main()
{
	char a[100],b[100],c[100];
	int m,n,i,k,t,q;
	long j;
	for(i=0;i<100;i++)
		b[i]=0;
	scanf("%d %s %d",&m,a,&n);
	i=0;
	j=0;
         t=0;
         q=0;
         while(a[q]!=0)
         {
          t=t+(a[q]!='0');
          q++;
         }
    if(t!=0)
    {
	while(a[i]!=0)
	{
		if(a[i]<='9')
			k=a[i]-'0';
		else
		{
			if(a[i]<='Z')
				k=10+a[i]-'A';
			else
				k=10+a[i]-'a';
		}
		j=j*m+k;
		i++;
	}
	i=0;
	while(j!=0)
	{
		b[i]=j%n;
		j=j/n;
		i++;
	}
	for(j=0;j<=i-1;j++)
	{
		if(b[i-j-1]<=9)
			c[j]=b[i-j-1]+'0';
		else
			c[j]=b[i-j-1]-10+'A';
	}
	for(j=0;j<100;j++)
	{
		if(!((c[j]>='0'&&c[j]<='9')||(c[j]>='A'&&c[j]<='Z')))
			c[j]=0;
	}
	printf("%s\n",c);
    }
    else
    printf("0\n");
}

