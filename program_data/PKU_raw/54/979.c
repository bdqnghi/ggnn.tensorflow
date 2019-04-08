int f(int n,int k)
{
    int i,t[100],p=1;
    t[0]=n+k;
    for(i=1;i<n;i++){                 
                     t[i]=(n*t[i-1])/(n-1)+k;                     
                     if((n*t[i-1])%(n-1)!=0){
                                                 p++;
                                                 t[0]=p*n+k;
                                                 i=0;
                                                 }                     
                     }
    return t[n-1];                 
    }
int main()
{
    int m(int n,int k);
    int n,k;
    scanf("%d%d",&n,&k);
    printf("%d\n",f(n,k));
    
    return 0;
    }
