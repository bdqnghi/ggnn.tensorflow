int main(){
	int n,i,a,b,x=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		if(a==0){
			if(b==1) x+=1;
			else if(b==2) x-=1;
		}
		else if(a==1){
			if(b==0) x-=1;
			else if(b==2) x+=1;
		}
		else{
			if(b==0) x+=1;
			if(b==1) x-=1;
		}
	}
	if(x>0) printf("A");
	else if(x==0) printf("Tie");
	else printf("B");
	return 0;
}