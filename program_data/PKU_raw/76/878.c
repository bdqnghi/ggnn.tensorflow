int main(){
	struct qujian{
		int a,b;
	}qj[50001];
	int n,i,k,e,f,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&qj[i].a,&qj[i].b);
	}
    for( k=1;k<=n;k++){
	    for(i=0;i<n-k;i++){
			if(qj[i].a > qj[i+1].a){
					e=qj[i+1].a;
					qj[i+1].a = qj[i].a;
					qj[i].a = e;
			}
			if(qj[i].b>qj[i+1].b){
				f=qj[i+1].b;
				qj[i+1].b=qj[i].b;
				qj[i].b=f;
 
			}
		}
	}
	for(i=0;i<n;i++){
		if(qj[i].b<qj[i+1].a){
			j=0;
			break;
		}	
	}
	if(j==0){
		printf("no");
	}
    if(j!=0){
		printf("%d %d",qj[0].a,qj[n-1].b);	
	
	}
}