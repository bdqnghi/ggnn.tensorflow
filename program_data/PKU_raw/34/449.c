int main(){
	int n,i=0,p[100];
	scanf("%d",&n);
	p[0]=n;
 while(p[i]!=1){
     if(p[i]%2==0){
		p[i+1]=p[i]/2;
		i=i+1;
    	printf("%d/2=%d\n",p[i-1],p[i]);
	 }
     else if(p[i]%2!=0){
		p[i+1]=p[i]*3+1;
		i=i+1;
        printf("%d*3+1=%d\n",p[i-1],p[i]);
	 }
 }
 if(p[i]==1) printf("End\n");



	return 0;
}