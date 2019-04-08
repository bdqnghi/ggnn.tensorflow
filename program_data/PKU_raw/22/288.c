void main()
{
	char a[1500]={0};
	int b[300]={0},c[300]={0},s=1,i,n,p=0,t=0,j,x,z,m;
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]!=',')a[i]=a[i]-48;
		else {b[s]=i;s++;}
	}
	b[0]=-1;b[s]=n;
	for(i=0;i<=s;i++)
	{
		
		for(j=b[i]+1;j<=b[i+1]-1;j++)
			c[t]=c[t]*10+a[j];
		t++;
	}
	m=c[0];
	for(i=1;i<s;i++)
		if(c[i]>m)m=c[i];
		x=0;
		for(i=0;i<s;i++)
		{
			z=0;
			for(j=0;j<s;j++)
				if((c[j]!=m)&&(c[j]>c[i])){z=1;break;}
				if((z==0)&&(c[i]!=m)){printf("%d",c[i]);x=1;break;}
		}
		if(x==0)printf("No");
}

