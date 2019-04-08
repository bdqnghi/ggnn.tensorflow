int main(){
int i,j,w,day,rq[31];
scanf("%d",&w);
for(i=1;i<=12;i++){
	if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
		day=31;
	else if(i==2){
		day=28;
	}
	else{
		day=30;
	}
	for(j=0;j<day;j++){
		if(w<=7){
			rq[j]=w;
			w++;
		}
		else{
			w=w-7;
			rq[j]=w;
			w++;
		
		}
	}
        if(rq[12]==5){
			printf("%d\n",i);
      
		}
	
}
return 0;
}