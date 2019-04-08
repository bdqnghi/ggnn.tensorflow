int main()
{
	int a[11000],k,i,j,n,b,l=0;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		//scanf("%d",a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			b=a[i]+a[j];
			if(b==k){l+=1;}
		}
	}
	if(l!=0){printf("yes");}
	else{printf("no");}
	
	return 0;
}