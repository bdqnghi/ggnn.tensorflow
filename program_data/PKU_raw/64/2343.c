int main()
{
    int x[100][30],i,j,k=0,m,n,p;
    double s[1000],a;
    scanf("%d",&n);
    m=n*(n-1)/2;
    for(i=0;i<n;i++){
        for(j=0;j<3;j++){
            scanf("%d",&x[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            s[k]=sqrt((pow(x[i][0]-x[j][0],2)+pow(x[i][1]-x[j][1],2)+pow(x[i][2]-x[j][2],2))*1.0);
            k++;
        }
    }
    for(i=1;i<k;i++){
        for(j=0;j<k-i;j++){
            if(s[j]>s[j+1]){
                a=s[j];
                s[j]=s[j+1];
                s[j+1]=a;
            }
        }
    }
    s[k]=-1;
    for(p=k-1;p>=0;p--){
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(s[p]!=s[p-1]){
                    if(sqrt((pow(x[i][0]-x[j][0],2)+pow(x[i][1]-x[j][1],2)+pow(x[i][2]-x[j][2],2))*1.0)==s[p])
                    {printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",x[i][0],x[i][1],x[i][2],x[j][0],x[j][1],x[j][2],s[p]);}}
            }
        }
    }
    return 0;
}
