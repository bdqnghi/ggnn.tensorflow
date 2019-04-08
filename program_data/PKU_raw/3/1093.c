int main()
{
	int n,k,i,j,a[1000],m,t=0;
	scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	if((n==1)&&(a[0]==k)){
           t=1;
	}

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i!=j)
				m=a[i]+a[j];
			if(m==k)
				t=1;
		}	
	}
       	if(t==1)
		printf("yes");
	else
		printf("no");
	return 0;
}