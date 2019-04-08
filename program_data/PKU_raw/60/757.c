int main(){
int i,j,n,a,sh[100000];
scanf("%d",&n);
if(n<5){
	printf("empty");
	return 0;
}
for(i=0;i<100000;i++){
	sh[i]=0;
}
a=1;
sh[0]=2;
for(i=3;i<=n;i++){
	for(j=2;j<=i;j++){
		if(i%j==0){
			break;
		}
	}
	if(j==i){
		sh[a]=i;
		a++;
	}
}
for(i=0;i<=a;i++){
	if(sh[i+1]-sh[i]==2){
		printf("%d %d\n",sh[i],sh[i+1]);
	}
}
return 0;
}
