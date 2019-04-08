int main()
{
    int apple (int n,int k);
    int N,K,M;
    scanf("%d %d",&N,&K);
    M=apple(N,K);
    printf("%d",M);
    return 0;
}

int apple(int n, int k){
int i,last=1;
float m=1;
int Z;
   for(i=0;i<2*n-1;i++){
       if(i%2==0){
          m=m*n+k;
          }else{
                m=m/(n-1);
                Z=m;
                if((m-Z)!=0){
                  last+=1;
                  m=last;
                  i=-1;
                  continue;
                  }
                }
                }
return(m);
}
    
