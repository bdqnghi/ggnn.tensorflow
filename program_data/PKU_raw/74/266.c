void main()
{
	int m,n,i,j,t[10000]={0},k=0,l=1,u,v,h,b,c,d,e,a[10000]={0},x,q;
	scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++)
	{
		q=0;
		u=0;
		h=log10(i);
		for(j=h;j>=0;j--)
		{

		    b=pow(10,j+1);
            c=pow(10,j);
		    d=i%b-i%c;
			e=d/c;
			a[h-j]=e;
		}
		for(j=0;j<=h;j++)
		{
			if(a[j]==a[h-j])
              q++;
			else if(a[j]!=a[h-j])
			  break;
		}
        if(q==h+1)
			u=1;
		q=0;
		v=0;
		j=2;
        while(j<=sqrt(i))
			if(i%j==0)
			{	q=1;break;}
			else j++;
        if(i==1)
			q=1;
		if(q==0)
			v=1;
        if(u==1&&v==1)
		{
			t[k]=i;
			k++;
		}
	}
	if(k==0)
	    printf("no\n");
	else 
	{
		for(i=0;i<k-1;i++)
			printf("%d,",t[i]);
		printf("%d\n",t[k-1]);
	}
}
