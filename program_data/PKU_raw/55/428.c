void main()
{
	int a,b,i,j,t,k;
	char m[32],n[32];
	long middle,mult;
	middle=0;
	scanf("%d",&a);
	scanf("%s",m);
	scanf("%d",&b);
	i=strlen(m);
	for(j=0;j<=i-1;j++)
	{
		if(m[j]>='0'&&m[j]<='9')m[j]=m[j]-'0';
		if(m[j]>='a'&&m[j]<='z')m[j]=m[j]-'a'+10;
		if(m[j]>='A'&&m[j]<='Z')m[j]=m[j]-'A'+10;
	}
	for(j=0;j<=i-1;j++)
	{
		mult=1;
		for(t=i-1-j;t>=1;t--)
		{
			mult=mult*a;
		}
		middle=middle+m[j]*mult;
	}
if(middle==0)printf("0");
if(middle>0)
{	j=0;
	while(middle>0)
	{
		n[j]=middle%b;
		middle=middle/b;
		j++;
	}
	for(k=0;k<=j-1;k++)
	{
		if(n[k]<=9&&n[k]>=0)n[k]=n[k]+'0';
		else if(n[k]>=10)n[k]='A'-10+n[k];
	}
	for(k=j-1;k>=0;k--)
	{
		printf("%c",n[k]);
	}
}
}