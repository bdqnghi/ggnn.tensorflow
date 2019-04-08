void main()
{
	int m,n,i,j,k,t,s=0,r=0,w=0,p=0,flag,sum,a[300]={0},b[300];
	scanf("%d %d",&m,&n);
        for(i=m;i<n+1;i++)
		{
		t=i;
		sum=0;
		while(t!=0)
		{j=t%10;
		sum=sum*10+j;
		t=t/10;}
		if(sum==i) a[w++]=sum;
		}
		for(k=0;k<w;k++)
		{flag=0;
			for(i=2;i<a[k];i++)
				if(a[k]%i==0) {flag=1;a[k]=0;break;}
			if(flag==0) s++;
		}
		for(i=0;i<w;i++)
				if(a[i]!=0) b[p++]=a[i];
				if(p!=0){
		for(i=0;i<p-1;i++)
			printf("%d,",b[i]);
	
		printf("%d",b[p-1]);}
				else printf("no");
					
}
   
