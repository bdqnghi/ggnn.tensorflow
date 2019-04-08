int main()
{
	int n=0,t=0,i,j,x;
	int sz[16];
	for(;;){
	    for(i=0;i<16;i++){
			scanf("%d",&sz[i]);
			if(sz[i]==0||sz[0]==-1)break;
			n=n+1;
		}
		for(i=0;i<n;i++){
	        for(j=0;j<n;j++){
		        if(sz[i]-2*sz[j]==0)
				t=t+1; 
				else;
			}
		}
		if(sz[0]==-1)break;
		printf("%d\n",t);
		t=0;
		n=0;
	}
	return 0; 
	}