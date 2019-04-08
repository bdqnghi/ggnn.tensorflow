void main()
{
	char a[251],b[251],t='0';
	int c[252]={0},d[252]={0},l,l1,l2,i,x=0,l0=0;
	gets(a);
	gets(b);
	l1=strlen(a);
	l2=strlen(b);
	if(l1>l2)
	{
		l=l1;
		for(i=l2;i<l;i++) b[i]='0';
		for(i=l2-1;i>=0;i--)
		{
			t=b[i];b[i]=b[l-l2+i];b[l-l2+i]=t;
		}
	}
	else if(l1<l2)
	{
		l=l2;
		for(i=l1;i<l;i++) a[i]='0';
		for(i=l1-1;i>=0;i--)
		{
			t=a[i];a[i]=a[l-l1+i];a[l-l1+i]=t;
		}
	}
	else l=l1;
	if(l==1) {x=a[0]+b[0]-96;printf("%d",x);}
	else
	{
		for(i=l-1;i>0;i--)
		{
			c[i]=a[i]+b[i]-96+c[i];
			if(c[i]>9)
			{
				c[i]=c[i]-10;
				c[i-1]=c[i-1]+1;
			}
		}
	c[0]=c[0]+a[0]+b[0]-96;
	if(c[0]>9)
	{
		c[0]=c[0]-10;c[l]=1;
	}
	if(c[l])
	{
		printf("%d",c[l]);
		for(i=1;i<=l;i++) printf("%d",c[i-1]);
	}
	else
	{
		l0=l;
		for(i=1;i<=l;i++)
			if(c[i-1]==0) l0--;else break;
		if(l0<l)
		{
			for(i=l;i>l-l0;i--) d[l-i]=c[i-1];
			for(i=l0;i>=1;i--) printf("%d",d[i-1]);
		}
		else for(i=1;i<=l;i++) printf("%d",c[i-1]);
	}
	}
	printf("\n");
}


			