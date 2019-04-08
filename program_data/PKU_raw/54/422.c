void main()
{
	int t,i,m,k,r,n;
	scanf("%d %d",&n,&k);
	     for(m=n;;m++)
		 {
			 t=m;
			 for(i=1;i<=n;i++)
			 { if(t<n) break;
			   
			   r=t%n;
			   if(r!=k) break;
			   t=(t-k)*(n-1)/n;
			 } 
			 if (i>n) {printf("%d",m); break;}
			 
		 }
}
	