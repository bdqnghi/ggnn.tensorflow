int main(){
	int n,h[100],l[100],hour[101]={0},i,max=0;
	scanf("%d\n",&n);
	for(i=1;i<=n;i++){
		scanf("%d %d\n",&h[i],&l[i]);
		if(h[i]>=90&&h[i]<=140&&l[i]>=60&&l[i]<=90){hour[i]=hour[i-1]+1;}
		if(hour[i]>=max){max=hour[i];}}
	printf("%d",max);
	return 0;
}



	