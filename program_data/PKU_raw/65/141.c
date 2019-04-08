int main()
{
    int n,x=0,y,z=0;
    scanf("%d",&n);
    int c[n],d[n];
    for(int i=0;i<n;i++){
        scanf("%d %d",&c[i],&d[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(c[i]==d[i]){z++;}
        if(c[i]==0&&d[i]==1){x++;}
        if(c[i]==1&&d[i]==2){x++;}
        if(c[i]==2&&d[i]==0){x++;}
    }
    y=n-x-z;
    if(x==y){printf("Tie");}
    if(x<y){printf("B");}
    if(x>y){printf("A");}
    return 0;
}