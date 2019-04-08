int main()
{
    int a[100][100];
    int i,j,s,t,d;
    scanf("%d%d",&s,&t);
    for(i=0;i<s;i++){
        for(j=0;j<t;j++){
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    for(d=0;d<s+t-1;d++){
        for(i=0;i<s;i++){
            for(j=0;j<t;j++){
                if(i+j==d){
                    printf("%d\n",a[i][j]);
                }
            }
        }
    }
    return 0;
}