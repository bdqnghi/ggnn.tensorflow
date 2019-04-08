int main(){
	int a[10][3];
	int x,y,z,i,j,k,n,f=0;
	scanf("%d",&n);
	double tmp,result[45][3];
	for(i=0;i<n;i++){
		scanf("%d%d%d",&x,&y,&z);
		a[i][0]=x;a[i][1]=y;a[i][2]=z;
	}
    for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			result[f][0]=sqrt(pow(a[i][0]-a[j][0],2)+pow(a[i][1]-a[j][1],2)+pow(a[i][2]-a[j][2],2));
			result[f][1]=i;
			result[f][2]=j;
			f=f+1;
		}
	}
	for(i = 0; i < f; i++){
        for(j = f-1; j >i-1; j--){
		     if(result[j][0] < result[j+1][0]){
		         for(k=0;k<3;k++){
				tmp = result[j+1][k];
				result[j+1][k] = result[j][k];
 				result[j][k] = tmp;
			 }}
		}
	}
	for(i=0;i<f;i++){
		printf("(%d,%d,%d)-",a[(int)result[i][1]][0],a[(int)result[i][1]][1],a[(int)result[i][1]][2]);
	    printf("(%d,%d,%d)=",a[(int)result[i][2]][0],a[(int)result[i][2]][1],a[(int)result[i][2]][2]);
	    printf("%.2f\n",result[i][0]);
	}
	return 0;
}