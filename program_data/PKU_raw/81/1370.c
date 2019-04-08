int a[5][5];
int main()
{
    int swap(int x[5][5],int n,int m);
    int i,j,n,m;
    for (i=0;i<5;i++){
        for (j=0;j<5;j++){
            scanf("%d",&a[i][j]);
            }
        }
    scanf("%d %d",&n,&m);
    if (swap(a,n,m)==1) {
         for (i=0;i<5;i++){
             for (j=0;j<4;j++){
                 printf("%d ",a[i][j]);                 
                 }
             printf("%d\n",a[i][4]);
             }
         }
    else if (swap(a,n,m)==0){
         printf("error");
         }
    return 0;
}

int swap(int a[5][5],int n,int m)
{
    int f,i,t;
    if ((n<5)&&(m<5)){
       f=1;
       for (i=0;i<5;i++){
           t=a[n][i];
           a[n][i]=a[m][i];
           a[m][i]=t;
           }
       }
    else f=0;
    return (f);
    } 