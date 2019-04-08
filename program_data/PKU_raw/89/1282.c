int main()
{
	int i,m,j,n,flag=0;
	int *p,*q;
    scanf("%d",&n);
    p=(int*)malloc(sizeof(int)*(n+1));
    q=(int*)malloc(sizeof(int)*(n+1));
    memset(p,0,sizeof(p));
    memset(q,0,sizeof(q));
    for(;;){
    scanf("%d%d",&i,&j);
        if(i==0&&j==0){
        	break;
        }
        else{        	
    	p[i]=1;
    	q[j]++;
        }
    }
    for(i=0;i<n;i++){
   	   if(p[i]==0&&q[i]==n-1){
	   printf("%d\n",i);
	   flag=1;   	   	
   	   }	
    }  
	if(flag==0)
     printf("NOT FOUND");    
}