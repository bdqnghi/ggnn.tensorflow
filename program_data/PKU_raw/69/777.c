int main()
{
	char a[250],b[250],c[251];
    int i,j,z;
    gets(a);gets(b);
    for(i=0;i<=250;i++)
    c[i]='0';
    i=strlen(a)-1;
    j=strlen(b)-1;
	if (i==0 && j==0) printf("%d\n",0);
    for(z=250;i>=0&&j>=0;i--,j--,z--)
	{
		c[z]=c[z]+a[i]-'0'+b[j]-'0';
        if(c[z]>'9')
		{
			c[z]=c[z]-10;
            c[z-1]++;
		}
	}
    if(i>=0)
    for(;i>=0;i--,z--)
	{
		c[z]=c[z]+a[i]-'0';
        if(c[z]>'9')
		{c[z]=c[z]-10;
        c[z-1]++;
		}
	}
    if(j>=0)
    for(;j>=0;j--,z--)
	{
		c[z]=c[z]+b[j]-'0';
        if(c[z]>'9')
		{
		c[z]=c[z]-10;
        c[z-1]++;
		}
	}
    for(i=0;i<=250;i++)
    {
		if(c[i]!='0')
        break;}
    

    for(;i<=250;i++)
		cout<<c[i];
    return 0;
}
