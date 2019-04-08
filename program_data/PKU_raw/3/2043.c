int main()
{
	int n,sz[1000],k,x,i,s;
     scanf("%d",&n);
	 scanf("%d",&k);
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}
 
    for(x=0;x<n;x++){
		for(i=0;i<n;i++){
			s=sz[x]+sz[i];
			if(s==k){
				printf("yes");
			break;}
	}
		if(s==k){
			break;}
	}
	if(s!=k){
		printf("no");}
	

	return 0;
	}
