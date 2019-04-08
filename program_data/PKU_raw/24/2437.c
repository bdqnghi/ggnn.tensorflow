int main()
{
	char a[200][20],c;
	int b[200],i=0,j=0,n,max,min,s,t;
	while((c=getchar())!=EOF)
	    {if(c==' '||c==',')
	{a[i][j]=0;b[i]=j;
	i++;j=0;}
		else a[i][j++]=c;}
    n=i;a[i][--j]=0;b[i]=j;
	
	s=t=0;max=min=b[0];
	for(i=1;i<=n;i++)
		if(b[i]>max){max=b[i];t=i;}
		else if(b[i]<min&&b[i]>0){min=b[i];s=i;}
    puts(a[t]);
	puts(a[s]);
}