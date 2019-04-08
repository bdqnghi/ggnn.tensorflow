int main(){
	int n,a,b,i;
	int	j=0;
	int zs[100];
	int t=0;
	for(i=0;i<100;i++){
		zs[i]=0;
	}
    scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a,&b);
		if(90<=a&&a<=140&&60<=b&&b<=90){
			t++;
		}
		else{
			zs[j]=t;
			j++;
			t=0;
		}
	}	
	j=j+1;
	zs[j+1]=t;
	int max=0;
	for(i=0;i<100;i++){
	
		if(zs[i]>max)
			max=zs[i];
	}
	printf("%d",max);
	return 0;
}