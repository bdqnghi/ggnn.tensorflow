
int main (){
	int n,i,ta,tb;
	int a[200],b[200],x[200];

	scanf("%d",&n);

	for (i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
	}

	ta=0;
	tb=0;

	for (i=0;i<n;i++){
		x[i]=b[i]-a[i];
		if (x[i]==1||x[i]==-2){
			ta++;
		}else if(x[i]==-1||x[i]==2){
			tb++;
		}
	}

	if(ta<tb){
		printf("B\n");
	}else if(ta==tb){
		printf("Tie\n");
	}else{
		printf("A\n");
	}

	return 0;
}
