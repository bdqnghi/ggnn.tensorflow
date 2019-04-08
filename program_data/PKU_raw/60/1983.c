main()
{
	int n,l,b=0;
	scanf ("%d",&n);
	for (int m=5;m <=n;m++){
		l=0;
		for(int i=2;i<m;i++){
			if (m%i==0)
			l++;	
		} 
		int a=0;
		if(l==0){
			for (int k=2;k<m-2;k++){
				if ((m-2)%k==0)
				a++;
			}}
		if(a==0&&l==0){
		printf ("%d %d\n",m-2,m);
		b++;}
		}
	if (b==0)
	printf("empty"); 
			
	} 