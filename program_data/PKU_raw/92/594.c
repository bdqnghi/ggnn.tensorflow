        
int main()
{
    int k;
    int T[1000],Q[1000],n;
    while(scanf("%d",&n)&&n!=0)
    {
        for(k=0;k<n;k++)
            scanf("%d",&T[k]);
        for(k=0;k<n;k++)
            scanf("%d",&Q[k]);
            
        int i,j,temp;
    int Inco[1000][1000]={0};
    for(i=0;i<=n-2;i++)    
        for(j=i+1;j<=n-1;j++)
        {
            if(T[i]<T[j])
            {    temp=T[i];    T[i]=T[j];    T[j]=temp;    }
            if(Q[i]<Q[j])
            {    temp=Q[i];    Q[i]=Q[j];    Q[j]=temp;  }
        }
    
    for(i=0;i<n;i++)
    {    if(Q[i]<T[0])    Inco[i][0]=1;
        else if(Q[i]==T[0])    Inco[i][0]=0;
        else    Inco[i][0]=-1;
    }
    for(i=n-2;i>=0;i--)
    {
        for(j=1;i+j<n;j++)
        {
            if(Q[i+j]<T[0+j])
                Inco[i][j]=Inco[i][j-1]+1;
            else if(Q[i+j]>T[0+j])
                Inco[i][j]=Inco[i+1][j-1]-1;
            else 
            {    if(Inco[i+1][j-1]-1>Inco[i][j-1]+0)
                   Inco[i][j]=Inco[i+1][j-1]-1;
                else                         
                    Inco[i][j]=Inco[i][j-1]+0;
            }
        }
    }
        printf("%d\n",Inco[0][n-1]*200);
        for(k=0;k<1000;k++)
        {  T[k]=0;  Q[k]=0;     }
    }
    return 0;
}
