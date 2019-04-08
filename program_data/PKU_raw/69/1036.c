int main()
{
	char p[251],q[251];
	int x,y,n,t=0,i,j,k,h,u,v;
    int a[250],b[250],c[251];
	scanf("%s",p);
	scanf("%s",q);
    x=strlen(p);
    y=strlen(q);
	for(h=0;h<250;h++)
	{
	a[h]=b[h]=c[h]=0;
	}
	c[250]=0;
	for(i=0;i<x;i++)
	{
	    a[i]=p[x-1-i]-'0';
	}
	for(j=0;j<y;j++)
	{
	    b[j]=q[y-1-j]-'0';
	}
	if(x>y)  n=x;
	else     n=y;
	for(k=0;k<n;k++)
	{
	 c[k]=a[k]+b[k]+t;
     t=c[k]/10;
	 c[k]=c[k]%10;
	}
	c[n]=t;
	for(u=250;u>=0;u--)
	{
	   if(c[u]!=0)
		   break;
	}
	if(u==-1)  printf("0");
	else
	{
		for(v=u;v>=0;v--)
		{
		printf("%d",c[v]);
		}	
	}
    return 0;
}