int main(){
	int n,i,nian,y[2],q[2]={0,0},k,a,e;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d %d",&nian,&y[0],&y[1]);
		for(k=0;k<2;k++){
			for(e=1;e<y[k];e++){
		if(e==1||e==3||e==5||e==7||e==8||e==10||e==12){
              q[k]+=3;
		}else if(e==4||e==6||e==9||e==11){
			q[k]+=2;
		}else if(e==2){
			if(nian%400==0||(nian%4==0&&nian%100!=0)){
				q[k]+=1;
			}else{
				q[k]+=0;
			}
		}
			}
		}
	    a=(q[1]-q[0])%7; 
		q[0]=0;
q[1]=0;
		if(a==0){
			printf("YES\n");

		}else{
			printf("NO\n");

		}
		
	}

	return 0;
}