int main (){
	int n,a[50000],b[50000],zuo,you,x,h=1;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d",&a[i],&b[i]);
	}
	zuo=a[0];
	you=b[0];
	for(int k=0;k<n;k++){
		if(a[k]<zuo){
			zuo=a[k];
		}
		if(b[k]>you){
			you=b[k];
		}
	}
	for(double z=zuo;z<=you;z+=0.5){
		for(int m=0;m<n;m++){
			if((z<=1.0*b[m])&&(a[m]*1.0<=z)){
				x=1;
			}
		}
		h*=x;
		x=0;
		
	} 
	if(h==0){
		printf("no");
	}else{
		printf("%d %d",zuo,you);
	}

		return 0;
}



