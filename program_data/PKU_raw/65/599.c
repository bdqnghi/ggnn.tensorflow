int main()
{
	int n,i=0,a,b,c,j=0,k=0;
	scanf("%d",&n);
	while(i<n){
		scanf("%d%d",&a,&b);
		c=a-b;
		if(c==-1||c==2){
			j++;
		}else if(c==1||c==-2){
			k++;
		}
		i++;
	}
	if(j>k){
		printf("A");
	}else if(j<k){
		printf("B");
	}else{
		printf("Tie");
	}
	return 0;
}