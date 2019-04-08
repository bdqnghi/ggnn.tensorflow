int main(){
	int y[300],n[300],m[300];
	int i,k,z;
	k=0;
	while(1){
		scanf("%d %d",&n[k],&m[k]);
		if((n[k]==0)||(m[k]==0))
			break;
		k++;
	}
	for(z=0;z<k;z++){
		y[z]=0;
		for(i=1;i<n[z];i++){
			y[z]=(y[z]+m[z])%(i+1);
		}
		printf("%d\n",y[z]+1);
	}
	return 0;
}