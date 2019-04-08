void main ()
{
	int a,n,b,y[300],i,k,c;
    char x[1500];
	gets(x);
	n=strlen(x);
	for(i=0;i<300;i++) y[i]=0;
	k=0;
	for (i=0;i<n;i++)
	{
		if (x[i]>='0'&&x[i]<='9') 
		{c=x[i]-48;y[k]=y[k]*10+c;}
		else k=k+1;
	}
	a=-1;b=y[0];
	for(i=1;i<=k;i++)
	{
		if(y[i]>b)
		{
			a=b;b=y[i];
		}
		else if (y[i]>a&&y[i]<b)
			a=y[i];
	}
	if(a==-1)printf("No");
	else printf("%d",a);
}