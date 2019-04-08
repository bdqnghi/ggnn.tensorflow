void main()
{
	int n,i,j,t,len1,len2;int k=0;
	char a[100],b[100],str3[100];
	int c[100];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
        scanf("%s%s",a,b);
		len1=strlen(a);
		len2=strlen(b);
		t=0;
		for(j=1;j<=len2;j++)
		{
			c[j]=t+a[len1-j]-b[len2-j]+10*(a[len1-j]+t<b[len2-j]);
		t=-1*(a[len1-j]-b[len2-j]+t<0);

		}
		if(len1-len2-1>=0)
		{
				for(j=len2+1;j<=len1;j++)
				{
					c[j]=t+a[len1-j]-48+10*(a[len1-j]-48+t<0);
				t=-1*(a[len1-j]-48+t<0);
				}
		}
       k=0;
		for(j=len1;j>=1;j--)
		{   
			if(c[j]==0)
				k++;
			else break;
		}
    for(j=len1-k;j>=1;j--)
	printf("%d",c[j]);
printf("\n");
	}
}