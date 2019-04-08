
int a[104][104],n=0;
int row,col,i,j,s;

int out(int ai,int aj,int bi,int bj)
{
     int i,j;
     for (i=aj;i<=bj;i++) {printf("%d\n",a[ai][i],n); n++;}
     for (i=ai+1;i<=bi;i++) {printf("%d\n",a[i][bj],n);n++;}
     if (ai!=bi) {for (i=bj-1;i>aj;i--) {printf("%d\n",a[bi][i],n);n++;} }
     if (aj!=bj) {for (i=bi;i>ai;i--) {printf("%d\n",a[i][aj],n);n++;} }
    // printf("   %d******%d  %d \n",n,ai,aj);
     if (n!=s) out(ai+1,aj+1,bi-1,bj-1);
     return 0;
    }
    
int main()
{
    scanf("%d %d",&row,&col);
    s=row*col;
    for (i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
                           scanf("%d",&a[i][j]);
        }}
    out(1,1,row,col);
    return 0;
}
