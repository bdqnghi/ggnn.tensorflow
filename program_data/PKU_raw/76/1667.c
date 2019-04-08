int main(){
	int n,i,e,h,k,m;
	struct qujian{
		int ai,bi;
	}qj[10000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&qj[i].ai,&qj[i].bi);
	}
	for(k=1;k<=n;k++){
	for(i=0;i<n-k;i++){
			if(qj[i].ai>qj[i+1].ai){
					e=qj[i+1].ai;
					h=qj[i+1].bi;
					qj[i+1].ai=qj[i].ai;
					qj[i+1].bi=qj[i].bi;
					qj[i].ai=e;
					qj[i].bi=h;
			}
	}
	}
	m=qj[0].bi;
	for(i=1;i<n;i++){
		if(m>=qj[i].ai){
			if(m<qj[i].bi){
				m=qj[i].bi;
		}
		}
		else {
			printf("no");
			return 0;
		}
	}
	printf("%d %d",qj[0].ai,m);
	return 0;
}