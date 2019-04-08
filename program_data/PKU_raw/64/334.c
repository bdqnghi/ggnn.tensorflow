int x[10],y[10],z[10],k=0,d[100]={0},e[100]={0},i,j,k,n;
double c[100]={0},temp;
int main()
{
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&x[i],&y[i],&z[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            c[k]=sqrt(  pow(x[i]-x[j],2)+ pow(y[i]-y[j],2)+pow(z[i]-z[j],2)   );
            d[k]=i;
            e[k]=j;
            k++;

        }
    }
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(c[i]<c[j])
            {
                temp=c[i];c[i]=c[j];c[j]=temp;
                temp=d[i];d[i]=d[j];d[j]=temp;
                temp=e[i];e[i]=e[j];e[j]=temp;
            }
            if( (c[i]==c[j])&& ((d[i]>d[j])||(e[i]>e[j])))
            {
                temp=c[i];c[i]=c[j];c[j]=temp;
                temp=d[i];d[i]=d[j];d[j]=temp;
                temp=e[i];e[i]=e[j];e[j]=temp;
            }
        }
    }
    for(i=0;i<k;i++)
    {
        printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",x[d[i]],y[d[i]],z[d[i]],x[e[i]],y[e[i]],z[e[i]],c[i]);
    }
    return 0;
}
