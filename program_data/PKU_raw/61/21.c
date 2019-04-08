void main(){
	int sz1[20],sz2[20];
	int i,n,j,b,s=0;
	scanf("%d",&n);
	sz1[0]=sz1[1]=1;
	for(i=2;i<20;i++){
		sz1[i]=sz1[i-1]+sz1[i-2];
	}
	for(i=0;i<n;i++){
		scanf("%d",&b);
		sz2[i]=sz1[b-1];

	}
	for(i=0;i<n;i++){
	printf("%d\n",(sz2[i]));
	}
	
}
   