int main()
{
	int m;
	int i,k,a=0,b=0,c=0;
	scanf("%d",&m);
	
	for(i=2;i<=(m/2);i++){
		if((i%2)==0){
			a=1;
		}
		for(k=2;k<i;k++){
			if((i%k)==0){
				b=1;
			}
		}
		for(k=2;k<(m-i);k++){
			if((m-i)%k==0){
				c=1;
			}
		}
		if((a==0)&&(b==0)&&(c==0)){
			printf("%d %d\n",i,m-i);
		}
		a=0;
		b=0;
		c=0;
	}
	return 0;
}