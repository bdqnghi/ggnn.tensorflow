
int main()
{
	int x,y,i,j,t;
	int a[11],b[11];
	int p,q;
	for(i=1;i<11;i++)
	{
        a[i]=0;
        b[i]=0;
    }
	scanf("%d%d",&x,&y);
	if(x==y)
	printf("%d",x);
	else
	{
	a[0]=x;
	b[0]=y;
	for(i=0;;i++)
	{
		if((a[i]%2==0)&&(a[i]>1))
		  a[i+1]=a[i]/2;
		if(a[i]%2!=0)
		  a[i+1]=(a[i]-1)/2;
		if(a[i]==1)
			break;
	}
	for(j=0;;j++)
	{
		if((b[j]%2==0)&&(b[j]>1))
		  b[j+1]=b[j]/2;
		if(b[j]%2!=0)
		  b[j+1]=(b[j]-1)/2;
		if(b[j]==1)
			break;
	}
	p=i;
	q=j;
	for(i=0;i<=p/2;i++)
	{
       t=a[i];
       a[i]=a[p-i];
       a[p-i]=t;
    }
	for(i=0;i<=q/2;i++)
	{
       t=b[i];
       b[i]=b[q-i];
       b[q-i]=t;
    }
    for(j=0;;j++)
    {
        if(a[j]!=b[j])
        break;
    }
	printf("%d",a[j-1]);
    }
    return 0;
}