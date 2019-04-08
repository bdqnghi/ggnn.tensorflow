void main() 
{ 
	int a[300],i,j,n ;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
    for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if(a[i]==a[j])
		    a[j]=-1;
  printf("%d",a[0]);
  for(i=1; i<n;i++)
	  if(a[i]!=-1) 
	  printf(",%d",a[i]);
}