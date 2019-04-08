int main()
{
	int x,y,m,n,i,j,a[30],b[30];
	scanf("%d%d",&x,&y);
	a[0]=x;
	b[0]=y;
	for(i=0;i<30;i++)
	{
		if(a[i]>1&&a[i]%2==0)
			a[i+1]=a[i]/2;
        else if(a[i]>1&&a[i]%2==1)
			a[i+1]=(a[i]-1)/2;
		else break;
	}
	m=i+1;
	for(i=0;i<30;i++)
	{
		if(b[i]>1&&b[i]%2==0)
			b[i+1]=b[i]/2;
        else if(b[i]>1&&b[i]%2==1)
			b[i+1]=(b[i]-1)/2;
		else break;
	}
	n=i+1;
    for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			if(b[j]==a[i])
			{
				printf("%d",a[i]);
				break;
			}
		if(j!=n)
			break;
	}
return 0;
}


