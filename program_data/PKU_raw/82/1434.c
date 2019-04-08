int main(){
	int n;scanf("%d",&n);
	int xueya[101][2],outcome[101];
	int i;
	for(i=0;i<n;i++){
		scanf("%d%d",&xueya[i][0],&xueya[i][1]);
		if(xueya[i][0]>=90 && xueya[i][0]<=140 && xueya[i][1]>=60 && xueya[i][1]<=90)	
			outcome[i]=1;
		else
			outcome[i]=0;
	}

	int j=0,k=0,m;
	int count[101];
	for(m=0;m<n;m++){
		if(outcome[m]==1)	count[m]=1;
		else count[m]=0;
	}
	for(j=0;j<n;j++){
		if(outcome[j]==1){
			for(k=j+1;k<n && outcome[k]==1;k++){
				count[j]++;
			}
		}
	}



	int p,q,t;
	for(p=n-1;p>0;p--){
		for(q=0;q<p;q++){
			if(count[q]>=count[q+1]){
				t=count[q];
				count[q]=count[q+1];
				count[q+1]=t;
			}
		}
	}
	printf("%d\n",count[n-1]);
	return 0;
}