int main(){
	int max=0,mbx=0,i,x;
	scanf("%d\n",&i);
	while(i>=0){
		scanf("%d\n",&x);
		i--;
		if(i>=0){
			if(max>x&&mbx<x)mbx=x;
			else if(mbx>x)
				;
			else if(max<x){
				mbx=max;
				max=x;
			}
		}
	}
		printf("%d\n%d\n",max,mbx);
	return 0;
}