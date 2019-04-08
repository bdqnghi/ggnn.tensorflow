int main()
{
    int n,a[10],b[10],c[10],i,j,x,m=0;
    double sun[10][10],s[50],k;
    scanf("%d",&n);
    for(i=0;i<n;i++){
scanf("%d %d %d",&a[i],&b[i],&c[i]);
    }
    for(i=0;i<n;i++){
for(j=i+1;j<n;j++){
    sun[i][j]=sqrt((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j])+(c[i]-c[j])*(c[i]-c[j]));
}
    }
    for(i=0;i<n;i++){
for(j=i+1;j<n;j++){
s[m]=sun[i][j];
m++;
}
    }
    for(i=0;i<m;i++){
for(j=i+1;j<m;j++){
    if(s[j]>s[i]){
k=s[i];
                s[i]=s[j];
        s[j]=k;
    }
}
    }
    for(i=0;i<m;i++){
if(s[i]==s[i+1]){
    for(j=i+1;j<m;j++){
s[j]=s[j+1];
i=i-1;
m=m-1;
    }
}
    }
    for(x=0;x<m;x++){
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
if(s[x]==sun[i][j]){
    printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",a[i],b[i],c[i],a[j],b[j],c[j],sun[i][j]);
}
    }
}
    }
    return 0;
}