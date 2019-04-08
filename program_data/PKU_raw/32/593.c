void main()
{
	char a[101],b[101];
	int i,j,t=0,A,B,k,n;
	scanf("%d",&n);
	for(k=1;k<=n;k++){t=0;
	scanf("%s",a);
	scanf("%s",b);
	for(i=0;i<=100;i++)
	{
		if(a[i]==0)break;
		else a[i]=a[i]-'0';
	}A=i-1;
	for(i=0;i<=100;i++)
	{
		if(b[i]==0)break;
		else b[i]=b[i]-'0';
	}B=i-1;
	for(i=B;i>=0;i--)
	{
		if(a[A-B+i]>=b[i])a[A-B+i]=a[A-B+i]-b[i];
		else {a[A-B+i]=a[A-B+i]-b[i]+10;a[A-B+i-1]=a[A-B+i-1]-1;}
	}
	for(j=0;j<=A;j++)
	{
		if(a[j]!=0)break;
		else t++;
	}

	if(t==0)for(i=0;i<=A;i++){if(i==A)printf("%d\n",a[i]);else printf("%d",a[i]);}
	else for(i=0;i<=A-t;i++){if(i==A-t)printf("%d\n",a[i+t]);else printf("%d",a[i]);}
	}
}