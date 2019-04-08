int main(){
int n,i,a=0,b=0,j,k;
scanf("%d",&n);
char A[n][10];
double F[n],M[n],h,g;
for(i=0;i<n;i++)
{
    scanf("%s",A[i]);
    if(A[i][0]=='f')
    {
       scanf("%lf",&F[a]);
       a++;
    }
    if(A[i][0]=='m')
    {
       scanf("%lf",&M[b]);
       b++;
    }
}
for(j=0;j<a;j++)
{
    for(k=0;k<a-j-1;k++)
    {
        if(F[k]<F[k+1])
        {
            h=F[k];
            F[k]=F[k+1];
            F[k+1]=h;
        }
    }
}
for(j=0;j<b;j++)
{
    for(k=0;k<b-j-1;k++)
    {
        if(M[k]>M[k+1])
        {
            g=M[k];
            M[k]=M[k+1];
            M[k+1]=g;
        }
    }
}
for(i=0;i<b;i++)
{
    printf("%.2lf ",M[i]);
}
for(i=0;i<a-1;i++)
{
    printf("%.2lf ",F[i]);
}
printf("%.2lf",F[a-1]);
return 0;
}