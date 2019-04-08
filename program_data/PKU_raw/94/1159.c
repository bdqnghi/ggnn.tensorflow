int main()
{ 
	long a[1000],i,j,k,n,s=0,t,tt;

	scanf("%d",&n);
	for (i=1;i<=n;i++) 
	{
		scanf("%ld",&k);
		if (k%2) {s++;a[s]=k;}
	}

	for(i=1;i<=s;i++) 
		for (j=1;j<=s-i;j++)
			if (a[j]>a[j+1])
			{ tt=a[j];
	          a[j]=a[j+1]; 
			  a[j+1]=tt;
			   
			 } 
	printf("%d",a[1]); for (i=2;i<=s;i++) printf(",%d",a[i]); 
	
  return 0;
}