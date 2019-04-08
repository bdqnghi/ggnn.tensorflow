int main()
{
    int saima(int n,int qiwang[1000],int tianji[1000]);
    int n,i,j;
    int tianji[1000]={0},qiwang[1000]={0};
    scanf("%d",&n);
    for (i=0;n!=0;i++){
        for (j=0;j<n;j++){
            scanf("%d",&tianji[j]);
            }
        for (j=0;j<n;j++){
            scanf("%d",&qiwang[j]);
            }
        printf("%d\n",saima(n,qiwang,tianji));
        scanf("%d",&n);
        }
    return 0;
}
int saima(int n,int qiwang[1000],int tianji[1000])
{
    void seq(int n,int a[1000]);
    void del(int i, int n, int a[1000]);
    int i,win;
    seq(n,tianji);
    seq(n,qiwang);
    win=0;
    while (n>0){
         if ((tianji[n-1]!=qiwang[n-1])&&(n>0)){
            if (tianji[n-1]>qiwang[n-1]){
                win=win+200;
                del(n-1,n,tianji);
                del(n-1,n,qiwang);
                n=n-1;
                }
            else{
                 win=win-200;
                 del(n-1,n,tianji);
                 del(0,n,qiwang);
                 n=n-1;                    
                 }
            }
        if ((tianji[0]!=qiwang[0])&&(n>0)){
            if (tianji[0]>qiwang[0]){
                win=win+200;
                del(0,n,tianji);
                del(0,n,qiwang);
                n=n-1;
                }
            else{
                 win=win-200;
                 del(n-1,n,tianji);
                 del(0,n,qiwang);
                 n=n-1;
                 }
            }
        if ((tianji[0]==qiwang[0])&&(tianji[n-1]==qiwang[n-1])&&(n>0)){
            if (tianji[n-1]<qiwang[0]){
                win=win-200;
                }
            del(n-1,n,tianji);
            del(0,n,qiwang);
            n=n-1;              
            }

        }
        return(win);    
}
void seq(int n,int a[1000])
{
       int i,j,temp;
       for (i=0;i<n;i++){
        for (j=0;j<n-1-i;j++){
            if (a[j]<a[j+1]){
                             temp=a[j];
                             a[j]=a[j+1];
                             a[j+1]=temp;
                             }
            }
        }
     }
void del(int i,int n,int a[1000])
{
     int j;
     for (j=i;j<n;j++){
         a[j]=a[j+1];
         }
     }
