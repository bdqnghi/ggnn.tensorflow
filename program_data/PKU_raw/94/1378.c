int main(){
    int n,t,sum=0,m,i,a,k=0;
    scanf("%d\n",&n);
    int N[n];
    for(i=0;i<n;i++){
        scanf("%d",&N[i]);
        if(N[i]%2!=0)
            sum++;
    }
    int P[sum];
    for(i=0;i<n;i++){
        if(N[i]%2!=0){
            P[k]=N[i];
            k++;
        }
    }
    for(m=0;m<sum;m++)
    {
        for(i=sum-2;i>=0;i--)
        {
            if(P[i]>P[i+1])
            {
                a=P[i+1];
                P[i+1]=P[i];
                P[i]=a;
            }
        }
    }
    for(m=0;m<sum-1;m++)
    {
        printf("%d,",P[m]);
    }
    printf("%d",P[sum-1]);
    return 0;
}




