
int main()
{
 int M[10],N[10],K[10];
 int t,i,j;
 int noblank(int M,int N);
 int MTOblank(int M,int N);
 scanf("%d\n",&t);
 for(i=0;i<t;i++)
 {scanf("%d %d\n",&M[i],&N[i]);
  K[i]=noblank(M[i],N[i])+MTOblank(M[i],N[i]);
  }
 for(j=0;j<t;j++)
 printf("%d\n",K[j]); 
}

int noblank(int M,int N)
{
    int K;
    int MTOblank(int M,int N);
    if(M>N) K=noblank(M-N,N)+MTOblank(M-N,N);
    if(M==N) K=1;
    if(M<N) K=0;
    
    return K;
} 

int MTOblank(int M,int N)
{
    int K;
    int noblank(int M,int N);
    if (N==2) K=1;
    else   {if (N==1) K=0;
             else {if (M<N-1) K=MTOblank(M,N-1);
                   else K=MTOblank(M,N-1)+noblank(M,N-1);
                  }
           }
    return K;
    
}