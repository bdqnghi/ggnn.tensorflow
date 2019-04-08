void main()
{
	int n,i,j,e,s,b;
	int a[100];
	scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
			for(j=0;j<n-1;j++)
             for(i=0;i<n-1-j;i++)
              if(a[i]>a[i+1])
			  {
                e=a[i];
                a[i]=a[i+1];
                a[i+1]=e;
			  }
             s=a[n-1];
			 b=a[n-2];
			 printf("%d\n%d",s,b);
}
  