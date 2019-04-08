int main()
{
	int i,n,t,k;
    char m;
	char s[300],a[1],b[1];
	gets(s);
	n=strlen(s);
	for(k=0;k<n-2;k++)
	{
		for(i=1;i<n-k;i++)
		{   
			a[0]=s[i];
b[0]=s[i-1];
			if(strcmp(a,b)<0)
			{ m=s[i];s[i]=s[i-1];s[i-1]=m;}
		}
	}

	t=1;m=s[0];
	for(i=1;i<n;i++)
	{ 
		if(s[i]==s[i-1])   {m=s[i];t=t+1;}
		else if(s[i]!=s[i-1])  
		{
			a[0]=m;
			if((a[0]>='A' && a[0] <= 'Z')||(a[0]>='a' && a[0] <='z'))
			{printf("%c=%d\n",m,t);k=0;}
			m=s[i];
			t=1;
		}
	}
	if((a[0]>='A' && a[0] <= 'Z')||(a[0]>='a' && a[0] <='z')) {printf("%c=%d\n",m,t);k=0;}
		if(k!=0) printf("No");
		return 0;
	}


