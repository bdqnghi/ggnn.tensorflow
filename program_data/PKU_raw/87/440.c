int main(){
	int shuru[10];
	int i,j,k,a,b,kong=1,c;
		for(i=0;kong!=0;i++){
			for(j=0;j<6;j++){
				scanf("%d",&shuru[j]);
			}
			if(shuru[0]==0&&shuru[1]==0&&shuru[2]==0&&shuru[3]==0&&shuru[4]==0&&shuru[5]==0){
				kong=0;
				return 0;
			}
			else{
				a=shuru[0]*3600+shuru[1]*60+shuru[2];
				b=(shuru[3]+12)*3600+shuru[4]*60+shuru[5];
				c=b-a;
				printf("%d\n",c);
			}

		}
		return 0;
}