int main(){
	int n,i,j,a,b,s;
	s=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		if(a-b==-1||a-b==2)s++;
		if(a-b==1||a-b==-2)s--;
	}
	if(s>0)printf("A");
	if(s<0)printf("B");
	if(s==0)printf("Tie");


	return 0;
}

