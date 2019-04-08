int main()
{
    int a,b,i,l,t=0,x;
	long m=0;
	char n[2][100];
	scanf("%d %s %d",&a,n[0],&b);
	l=strlen(n[0]);
	if (a<=10)
	{
		for(i=0;i<l;i++)
		{
			m=m*a+n[0][i]-'0';
		}
	}
	else
	{
        for(i=0;i<l;i++)
		{
			if((n[0][i]>='0')&&(n[0][i]<='9'))
				m=m*a+n[0][i]-'0';
		    if((n[0][i]>='A')&&(n[0][i]<='Z'))
                m=m*a+n[0][i]-'A'+10;
            if((n[0][i]>='a')&&(n[0][i]<='z'))
                m=m*a+n[0][i]-'a'+10;
		}
	}
	x=m;
	while(x>=b)
	{
		x=x/b;
		t++;
	}
	for(i=t;i>=0;i--)
	{
		if(m%b>=0&&m%b<10)
		{
		    n[1][i]=m%b+'0';
           	m=(m-n[1][i]+'0')/b;
		}
		else if(m%b>=10&&m%b<36)
		{
            n[1][i]=m%b-10+'A';
	       	m=(m-n[1][i]-10+'A')/b;
		}
	}
    for(i=0;i<=t;i++)
	    printf("%c",n[1][i]);
	return 0;
}


