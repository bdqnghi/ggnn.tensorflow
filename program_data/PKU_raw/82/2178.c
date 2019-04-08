
int main(){
	int n,i,j=1,xy[100][2],zc[100],k,max;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&xy[i][1],&xy[i][2]);
	}
	zc[1]=0;
	for(i=0;i<n;i++){
		if(xy[i][1]>=90&&xy[i][1]<=140&&xy[i][2]>=60&&xy[i][2]<=90){
          zc[j]++;
		}else{
	      j++;
		  zc[j]=0;
		}
	}
	
	max=zc[1];
	for(k=2;k<=j;k++){
		if(max<zc[k])
			max=zc[k];
	}
	printf("%d",max);

	return 0;
}