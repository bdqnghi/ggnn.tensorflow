int main(){
	int n;
	scanf("%d",&n);
    int sz[50000][2];
	for(int i=0;i<n;i++){
		scanf("%d%d",&sz[i][0],&sz[i][1]);
	}

//??????
	int min=sz[0][0],max=sz[0][1];
	for(int a=0;a<n;a++){
		if(sz[a][0]<min)
			min=sz[a][0];
		if(sz[a][1]>max)
			max=sz[a][1];
	}

//??
	int qj[10000];
	int e=min;
	for(int b=0;b<max-min+1;b++){
		qj[b]=e;
		e++;
	}
	for(int t=0;t<max-min;t++){
		for(int c=0;c<n;c++){
			if(sz[c][0]<=qj[t]&&sz[c][1]>=qj[t+1])
				qj[t]=0;
		}
	}
	int w=0;
	for(int d=0;d<max-min;d++){
		if(qj[d]!=0)
			w++;
			
	}
	if(w==0)
		printf("%d %d",min,max);
	if(w!=0)
		printf("no");
return 0;
}

