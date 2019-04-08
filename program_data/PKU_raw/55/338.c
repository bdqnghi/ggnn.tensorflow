void main()
{
	int x,y;
	scanf("%d",&x);
	char a[100];
	scanf("%s",a);
	scanf("%d",&y);
	int i,n=0;
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]>='0'&&a[i]<='9')
			n=n*x+a[i]-'0';
		else if(a[i]>='A'&&a[i]<='Z')
			n=n*x+a[i]-'A'+10;
		else if(a[i]>='a'&&a[i]<='z')
			n=n*x+a[i]-'a'+10;
	}
	int b[100];
	int j=0,k;
	if(n==0)
		printf("0");
	else while(n>0)
	{
		b[j]=n%y;
		j++;
		n=n/y;
	}
	for(k=j-1;k>=0;k--)
	{
		if(b[k]<10)
			printf("%d",b[k]);
		if(b[k]>=10)
			printf("%c",b[k]+55);
	}
}

