void main()
{ 
	int n,b,a[100],t,i,j;
	scanf("%d",&n);
	b=n;
	for(i=0;i<b;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<b-1;j++)
		for(i=0;i<b-1-j;i++)
			if(a[i]>a[i+1])
			{	
				t=a[i];
			    a[i]=a[i+1];
				a[i+1]=t;
			}
	printf("%d\n",a[b-1]);
	printf("%d\n",a[b-2]);
}
