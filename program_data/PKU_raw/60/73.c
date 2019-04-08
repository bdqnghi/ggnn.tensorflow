void main()
{
	int n,i,l,u,j=0,m,a[10000],b[10000];
	scanf("%d",&n);
	if(n<5) {printf("empty\n");}
	else
	{for(i=0;i<n;i++)
	{
		a[i]=i+1;
	}
	for(i=0;i<n;i++)
	{
		
		if(a[i]==1) continue;
		if(a[i]==2) {b[j]=a[i];j++;}
		if(a[i]==3) {b[j]=a[i];j++;}
		else
		{m=sqrt(a[i]);
         for(l=2;l<=m;l++)
		 {
			 if(a[i]%l==0) goto loop;
		 }
		 b[j]=a[i];j++;
		}
loop: continue;
	}
	u=j;
	for(j=0;j<u-1;j++)
	{
		if(b[j+1]-b[j]==2)
	    printf("%d %d\n",b[j],b[j+1]);
	}
	}
	
}