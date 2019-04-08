int main(){
    int n,count[100]={0},m=0,a,b;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d",&a,&b);
        if((a>=90&&a<=140)&&(b>=60&&b<=90)){
			count[m]++;
		}else{
			m++;
		}
	}
    int e=0,k,f;
	for(k=0;k<n-1;k++){
		for(f=k+1;f<n;f++){
			if(count[f]>count[k]){
				e=count[k];
				count[k]=count[f];
				count[f]=e;
			}
		}
	}
	printf("%d",count[0]);
    return 0;
}