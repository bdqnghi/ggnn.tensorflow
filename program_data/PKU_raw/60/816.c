int main(){
int n,i,s=0,j,f=0,q=0,k;
scanf("%d",&n);
for(i=2;i<=n;i++){
	for(j=2;j<i;j++){
		if(i%j!=0){
			s+=1;
		}
	}
	if(s==i-2){
		k=i+2;
		if(k>n){
			break;
		}
		for(j=2;j<k;j++){
		    if(k%j!=0){
			   q+=1;
			}
		}
		if(q==i){
			printf("%d %d\n",i,k);
			f++;
		}
	}
	s=0;
	q=0;
}
if(f==0){
	printf("empty\n");
}
return 0;
}
