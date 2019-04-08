int fj(int a,int zs){
	int k,n,z;
	n=0;z=0;
    for(k=zs;k<=sqrt(a);k++){
		if(a%k==0){n=n+fj(a/k,k);
		z=1;}
	}
		if(z==0){return 1;}
		else{return n+1;}
}
int main(){
	int m,i,t;
    scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&t);
		printf("%d\n",fj(t,2));
	}
	return 0;
}
