void main() 
{ 
    int t,M[20],N[20],i,K; 
    int Apples_Set(int a,int b); 
    scanf("%d",&t); 
    
 
    for(i=1;i<=t;i++)
	{ 
        scanf("%d %d",&M[i],&N[i]);
           
    } 
 
    for(i=1;i<=t;i++)
	{ 
        K=Apples_Set(M[i],N[i]); 
        printf("%d\n",K); 
    } 
  
} 
 
int Apples_Set(int a, int b)
{ 
    
    if((a==1)||(b==1)) 
        return 1; 
    if(a<b) 
        return Apples_Set(a,a); 
    if(a==b) 
        return Apples_Set(a,b-1)+1;
	if (a>b)
    return Apples_Set(a,b-1)+Apples_Set(a-b,b); 
} 