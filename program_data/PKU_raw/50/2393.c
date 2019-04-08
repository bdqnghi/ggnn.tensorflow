
int main()	
{
	int w,d[11],t,i;
	scanf("%d",&w);
	d[0]=w+12;
	t=0;
	for(i=1;i<=11;i++){
		if(i==1||i==3||i==5||i==7||i==8||i==10){
			d[i]=d[i-1]+31;
		}
		else if(i==2){
			d[i]=d[i-1]+28;
		}
		else {
			d[i]=d[i-1]+30;
		}
	}
	
	for(i=0;i<=11;i++){
		if(d[i]%7==5){
			if(t==0){
				t=1;
				printf("%d",i+1);
			}
			else{
				printf("\n%d",i+1);
			}
		}
	}
}