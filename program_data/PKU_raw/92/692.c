int main ()
{
	int n,t[1005],q[1005],i,j,k,p1,p2,total,max,h1,h2,t1,t2;
	scanf("%d",&n);
	while (n!=0)
	{
		for (i=1;i<=n;i++)scanf("%d",&t[i]);             
		for (i=1;i<=n;i++)scanf("%d",&q[i]);
		//for (i=1;i<=n;i++)cout<<t[i]<<' ';cout<<endl;
		//for (i=1;i<=n;i++)cout<<q[i]<<' ';cout<<endl;
		for (i=1;i<=n;i++)                       
		{
			max=i;
			for (j=i+1;j<=n;j++)
			    if (t[j]>t[max])max=j;
			if (i==max)continue;
			t[i]=t[i]+t[max];
			t[max]=t[i]-t[max];
			t[i]=t[i]-t[max];
		}
		for (i=1;i<=n;i++)
		{
			max=i;
			for (j=i+1;j<=n;j++)
				if (q[j]>q[max])max=j;
			if (i==max)continue;
			q[i]=q[i]+q[max];
			q[max]=q[i]-q[max];
			q[i]=q[i]-q[max];
		}
		//for (i=1;i<=n;i++)cout<<t[i]<<' ';cout<<endl;
		//for (i=1;i<=n;i++)cout<<q[i]<<' ';cout<<endl;
		total=0;                         
		h1=1;h2=1;t1=n;t2=n;  
		for(h2=1;h2<=n;h2++)
        {
            if(t[h1]>q[h2])
            {
                h1++;
                total+=200;
            }
            else if(t[h1]<q[h2])
            {
                t1--;
                total-=200;
            }
            else if(t[h1]==q[h2])
            {
                for(j=t1,k=t2;j>=h1;j--,k--)
                {
                    if(t[j]>q[k])
                    {
                        total+=200;
                        t1--;
                        t2--;
                    }
                    else
                     {
                          if(t[j]<q[h2]) total-=200;
                          t1=--j;
                          t2=k;
                          break;               
                     }
                }
            }
            if(h1>t1) break;
        }
        printf("%d\n",total);
        scanf("%d",&n);
	}
}
