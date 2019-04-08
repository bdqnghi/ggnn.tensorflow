int main(){
	int n,i,a[N][5],b[N];
	n=0;
	for(i=0;;i++){
		scanf("%d %d %d %d %d %d",&a[i][0],&a[i][1],&a[i][2],&a[i][3],&a[i][4],&a[i][5]);
		if(!(a[i][0]==0&&a[i][1]==0&&a[i][2]==0&&a[i][3]==0&&a[i][4]==0&&a[i][5]==0)){
			b[i]=3600*(12+a[i][3]-a[i][0])+60*(a[i][4]-a[i][1])+(a[i][5]-a[i][2]);
			n++;
		}else{
			break;
		}
	}
	for(i=0;i<n;i++){
		printf("%d\n",b[i]);
	}
	return 0;
}

