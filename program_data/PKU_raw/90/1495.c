 
 
int n=0; 
int digui(int M, int N) 
{ 
  if(N==1) 
  { 
    return n+1; 
  } 
  else if(M==1) 
  { 
    return n+1; 
  } 
  else 
  { 
    if(M>N) return digui(M-1,N); 
    else return digui(M-1,N)+digui(M,N-M); 
  } 
} 
 
int main() 
{ 
  int M,N,n,i,K; 
  scanf("%d",&n); 
  for(i=1;i<=n;++i) 
  { 
    scanf("%d%d",&N,&M); 
    K=digui(M,N); 
    printf("%d\n",K); 
  } 
  return 0; 
} 