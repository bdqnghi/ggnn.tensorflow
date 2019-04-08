int x;
int y(int x);
int main()
{
	int n,i,z=0;
	scanf("%d",&n);
	if(n==1||n==2||n==3){printf("empty");}
	else{
	for(i=2;i<n-1;i++){
		if(y(i)&&y(i+2)){
			printf("%d %d\n",i,i+2);
			z++;
		}
	}
	if(z==0){printf("empty");}
	}
	return 0;
}
int y(int x){
	int j,s=0;
	if(x==2){return 1;}
	else{
	for(j=2;j<x;j++){
		if(x%j==0){
			return 0;
			break;
		}
		s++;
	}
	if(s==x-2){return 1;}
	}
}
