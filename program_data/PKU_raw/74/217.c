void main()
{
    int m,n,i,j,p,q,r[100],s=0;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
	    p=1;
		for(j=2;j<i;j++)
		{
		    if (i%j==0)
			p=0;
		}
		for(j=0,q=i;q!=0;j++)
		{
		    r[j]=q%10;
			q=q/10;
		}
		q=j-1;
		for(j=0;j<=q;j++)
		{
		    if(r[j]!=r[q-j])
			p=0;
		}
		if(p==1)
		{
		    s++;
			if(s!=1)
			printf(",");
			printf("%d",i);
		}
	}
	if(s==0)
	printf("no");
}
			   
		   
		    
	
	    