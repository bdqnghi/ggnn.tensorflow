void main()
{
	char c[1500];
	int a[300]={0},i=0,j=0,m=1,l,k,t;
	gets(c);
	l=strlen(c);
	for(i=l-1;i>=0;i--)
	{
		if(c[i]>47&&c[i]<58&&c[i-1]==44)
		{
			a[j]=a[j]+(c[i]-48)*m;j++;m=1;
		}
		else if(c[i]>47&&c[i]<58)
		{
        a[j]=a[j]+(c[i]-48)*m;m=m*10;
		}
	}
	for(i=0;i<=j;i++)
		for(k=0;k<=j-i;k++)
			if(a[k]<a[k+1])
			{
				t=a[k];
				a[k]=a[k+1];
				a[k+1]=t;
			}
	if(j==0||a[0]==a[j]) printf("No\n");
		else
			for(i=1;i<=j;i++)
				if(a[i]!=a[0]) {printf("%d\n",a[i]);break;}
}