int sushu(int n){
    int i,m=1;
	for(i=2;i<n;i++){
		if(n%i==0){
			m=0;
		    break;
		}
	}
	return m;
}
int huiwen(int n){
    int m=0, t=n, z=0;
	while(t>0){
	      m=m*10+t%10;
		  t=t/10;
	}
if(m==n) z=1; 
return z;
}
void main(){
     int m, n, i,j=0;
	 scanf("%d%d",&m,&n);
	 for(i=m;i<n+1;i++){
		 if(sushu(i)&&huiwen(i)){
	       j++;
		   if(j==1) printf("%d",i);
		   else if(j>1) printf(",%d",i);
		 }
	 }
	 if(j==0) printf("no");
}