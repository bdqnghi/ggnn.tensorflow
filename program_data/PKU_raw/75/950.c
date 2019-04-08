void main()
{
	char a[10000]={0},b[10000]={0};
	int n=1,t=0,r,k=0,alen,blen,j,i,atime[10000],btime[10000],time[1000];
	gets(a);
	gets(b);
	alen=strlen(a);
	blen=strlen(b);
	for(i=0;i<10000;i++)
	{
		atime[i]=0;
		btime[i]=0;}
for(i=0;i<1000;i++)
	{
		time[i]=0;
		}
	for(i=0;i<alen;i++)
	{
		if(a[i]==',')
		{
			k=k+1;
			n=n+1;
		}
		else
		{
		
			atime[k]=atime[k]*10+(a[i]-'0');
		}

	}
	k=0;
	for(i=0;i<blen;i++)
	{
		if(b[i]==',')
		{
			k=k+1;
		
		}
		else
		{
		
			btime[k]=btime[k]*10+(b[i]-'0');
		}

	}

	for(i=0;i<1000;i++)
	{
		for(j=0;j<k+1;j++)
		{
			if(atime[j]<=i&&btime[j]>i)
		time[i]=time[i]+1;
		}
	}
	for(i=0;i<1000;i++)
		for(j=i;j<999-i;j++)
			if(time[j]>time[j+1])
			{
				t=time[j];
				time[j]=time[j+1];
				time[j+1]=t;
			}
			printf("%d %d",n,time[999]);

}