int main()
{
    int c[8][8],i,j,a,b,max,m=0,n=0,t=0,l=0;
    scanf("%d,%d",&a,&b);
    for(i=0;i<a;i++){
    	for(j=0;j<b;j++){
    		scanf("%d",&c[i][j]);
    	}
    }
    for(i=0;i<a;i++){
    	max=c[i][0];
    	for(j=1;j<b;j++){
    		if(max<c[i][j]){
    			max=c[i][j];
    			m=i;
    			n=j;
    		}
    	} 
    		t=0;
    		for(i=0;i<a;i++){
    			if(c[m][n]<c[i][n]){
    				t++;
    			}
    		}
    		if(t==a-1){
    			printf("%d+%d",m,n);
    			l++;
    		}
    }
    if(l==0){
    	printf("No");
    }
    return 0;
}