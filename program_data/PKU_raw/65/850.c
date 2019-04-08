int main()
{
	int n,i,a1,b1,c1;
	int a[200],b[200];
	a1=0;
	b1=0;
	c1=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]==0&&b[i]==0)
			c1++;
		else if(a[i]==0&&b[i]==1)
			a1++;
		else if(a[i]==0&&b[i]==2)
			b1++;
		else if(a[i]==1&&b[i]==0)
			b1++;
		else if(a[i]==1&&b[i]==1)
			c1++;
		else if(a[i]==1&&b[i]==2)
			a1++;
		else if(a[i]==2&&b[i]==0)
			a1++;
			
		else if(a[i]==2&&b[i]==1)
			b1++;
	    else if(a[i]==2&&b[i]==2)
			c1++;

	}
	if(a1>b1)
		printf("A");
	else if(a1==b1)
		printf("Tie");
	else 
		printf("B");
	return 0;
}