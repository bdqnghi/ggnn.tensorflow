void main(void)
{
	int n,i,j,k,t,p,q;
	scanf("%d",&n);
	for(p=6;p<=n;p=p+2)
	{
      for(i=3;j=p-i;i=i+2)
	  {
		k=sqrt(j);
		for(t=3;t<=k;t++)
			if(j%t==0)break;
		if(t>k) 
		{
	    q=p-j;
  	    k=sqrt(q);
	    for(t=3;t<=k;t++)
			if(q%t==0) break;
		if(t>k) {printf("%d=%d+%d\n",p,i,j);break;}
		}
	  }
	}
}