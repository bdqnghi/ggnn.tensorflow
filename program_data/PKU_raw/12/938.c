
int main(){
	int su[17]={1};
	int c[100];
	int i,a,b,d,e=0;
	for(i=0;i<100;i++){
		c[i]=0;}
	for(d=0;d<100;d++){
		a=0;
		for(i=1;su[i-1]!=0;i++){
			scanf("%d",&su[i]);
			if(su[i]==-1){
				e=1;
				break;
			}
			a=a+1;
		}
		if(e){break;}
		for(i=1;i<a;i++){
			for(b=1;b<a;b++){
				if(su[i]==2*su[b]){
					c[d]+=1;}
			}
		}
	}
	for(i=0;i<d;i++){
			printf("%d\n",c[i]);}


	return 0;

}