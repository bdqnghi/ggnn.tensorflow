int main()
{  int k,x,t,q,i,m,n,a[25000];
    double j,p;
    cin>>n;
	for (i=6;i<=n;i=i+2)
	{ p=i;
		k=sqrt(p);
        for (j=3;j<=p;j=j+2)
		{  
			t=sqrt(j) ;
		    q=j;
			for(m=3;m<=t;m=m+2)
			{ if (q%m==0)
			{ break;}
			}
			if (m>t)
			{  t=sqrt(p-j) ;
		    q=p-j;
			for(m=3;m<=t;m=m+2)
			{ if (q%m==0)
			{ break;}
			}
			if (m>t)
			{ cout<<i<<"="<<j<<"+"<<i-j<<endl; 
			break;}}}}
return 0;
}