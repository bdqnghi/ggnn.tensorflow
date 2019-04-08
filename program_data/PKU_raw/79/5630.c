
int main()
{
	int a;
         int n,m;
	for(a=1;;a++){
    	    scanf("%d%d",&n,&m);
	    if(m==0||n==0){
			break;
		}
             int f[99999];
	    int i,j,k,t;
	    i=1;
	    j=n;
	    t=n+1;
	    for(k=1;k<=n;k++){
		    f[k]=k;
		}
             while(j!=1){
                   for(i=i;i<t;i++){
			        if(i%m==0){
				       f[i]=0;
				       j=j-1;
				       if(j==1){
					      break;
					   }
					}
		        	if(f[i]!=0){
				        f[t]=f[i];
			        	t++;
					}
			  }
		}
                  printf("%d\n",f[t-1]);
	}
	return 0;
} 
