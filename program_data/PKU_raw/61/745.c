int main(){
int n,a;
scanf("%d",&n);
int i,t,I;
int c[10000];
int k=0;
for(I=0;I<n;I++){
	int x=1;
    int sum=1;
	scanf("%d",&a);
	if((a==2)||(a==1)){
		c[k]=1;
		k++;
	}else if(a>2){
		for(i=3;i<=a;i++){
			t=sum;
			sum=sum+x;
			x=t;
		}
		c[k]=sum;
		k++;
	}
}int j;
for(j=0;j<k;j++){
	printf("%d\n",c[j]);}
    return 0;
}	

	
