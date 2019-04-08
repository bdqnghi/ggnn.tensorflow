int main(){
	int *a;
	int *b;
	int n;
	int i,j,pd=0;
	int all;
	int k,m;
	int u,v;
	scanf("%d",&n);
	all=n*(n-1);
	a=(int*)malloc(sizeof(int)*n);
	b=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
		a[i]=0;
		b[i]=0;
	}
	for(i=0;i<all;i++){
		scanf("%d%d",&k,&m);
		if((k!=0)||(m!=0)){
			a[k]++;
			b[m]++; 
			if((b[m]==n-1)&&(a[m]==0)){
				printf("%d",m);
				pd=1;
			}
		}
		else if ((k==0)&&(m==0)){
			break;
		}
	}
	if(pd==0){
		printf("NOT FOUND");
	}
	free(a);
	free(b);
	return 0;
	}