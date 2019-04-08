int main()
{
	int a[301],m[10000],n[10000],i,j,k,t=0,s,b=0;
	for(i=0;;i++)
	{
		scanf("%d %d",&n[i],&m[i]);
		if(n[i]==0 && m[i]==0) break;
		t=t+1;
	}
	for(i=0;i<t;i++)
	{
		for(j=1;j<=300;j++)
		    a[j]=1;
		s=0;
		b=n[i];
		while(b>1)
		{
		    k=0;
	        while(k!=m[i])
			{
				s+=1;
			    if(s>n[i]) s-=n[i];
				if(a[s]!=0) k+=1;
	        }
			a[s]=0;
			b-=1;
		}
		for(j=1;j<=n[i];j++)
			if(a[j]!=0) printf("%d\n",j);
	}
	return 0;
}
