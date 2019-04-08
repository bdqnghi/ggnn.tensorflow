int main(){
	int a[500],b[500],c[500],d[500],N,i,t,m,h,max;
	t=0;
	h=0;
	max=1;
	c[0]=1;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&(a[i]));
	}
	for(i=0;i<N;i++){
		if(a[i]%2==1){
			b[t]=a[i];
			t++;
		}
	}
	for(i=0;i<=t;i++){
		if(b[i]>max){
			max=b[i];
		}
	}
    for(i=1;i<=(max-1)/2;i++){
		c[i]=c[i-1]+2;
	}
    for(i=0;i<=(max-1)/2;i++){
	for(m=0;m<=t;m++){
		        if(c[i]==b[m]){
				d[h]=c[i];
				h++;
			}
		}
	}
	for(i=0;i<h-1;i++){
	     printf("%d,",d[i]);
	}
	if(i=h-1){
		printf("%d",d[h-1]);
	}
	return 0;
}


	
