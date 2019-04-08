int main(){
	int n,i,j,amin,bmax,t=0;
	int zqj[1000][1000]={0};
	struct qujian{
		int a;
		int b;
	};
	struct qujian q[5000];
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d%d",&q[i].a,&q[i].b);
	}
	amin=q[1].a;
	bmax=q[1].b;
	for(i=1;i<=n;i++){
		if(q[i].a<amin){
			amin=q[i].a;
		}
		if(q[i].b>bmax){
			bmax=q[i].b;
		}
	}
	for(i=1;i<=n;i++){
		if(q[i].a==q[i].b){
			zqj[q[i].a][q[i].b]=1;
		}
		for(j=q[i].a;j<q[i].b;j++){
			zqj[j][j]=1;
			zqj[j][j+1]=1;
		}
		zqj[q[i].b][q[i].b]=1;
	}
	for(i=amin;i<bmax;i++){
		if(zqj[i][i]==0||zqj[i][i+1]==0){
			t=1;
			printf("no");
			break;
		}
	}
	if(t==0){
	    printf("%d %d",amin,bmax);
	}
	return 0;
}

