int main(){
	int n,i,j,t,flag,aright;
	struct{
		int l;
		int r;
	}qj[50001];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&qj[i].l,&qj[i].r);
	}
	for(i=n-1;i>0;i--){
		for(j=0;j<i;j++){
			if(qj[j].l>qj[j+1].l){
				t=qj[j].l;
				qj[j].l=qj[j+1].l;
				qj[j+1].l=t;
				t=qj[j].r;
				qj[j].r=qj[j+1].r;
				qj[j+1].r=t;
			}
		}
	}
	for(i=n-1;i>0;i--){
		for(j=0;j<i;j++){
			if(qj[j].l==qj[j+1].l && qj[j].r>qj[j+1].r){
				t=qj[j].r;
				qj[j].r=qj[j+1].r;
				qj[j+1].r=t;
			}
		}
	}
	flag=1;
	aright=qj[0].r;
	j=1;
	do{
		if(j==n){
			flag==1;
			break;
		}
		if(aright<qj[j].l){
			flag=0;
			break;
		}else if(aright>=qj[j].l && aright<qj[j].r){
			aright=qj[j].r;
			j++;
		}else{
			j++;
		}
	}while(1);
	if(flag==0){
		printf("no\n");
	}else{
		printf("%d %d\n",qj[0].l,aright);
	}
	return 0;
}


