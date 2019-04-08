int main(){
	int k,n,i,b,c,d;
	int a[LEN];
	c=0;
	scanf("%d%d",&n,&k);
		for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(d=0;d<n;d++){
		b=k-a[d];
			for(i=0;i<n;i++){
				if((b==a[i])&&(i!=d)){
				c=1;
				break;}}

			
	;	}
	if(c==0){printf("no");}
	else if(c==1){printf("yes");}
	return 0;
}