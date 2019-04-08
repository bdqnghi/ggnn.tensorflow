int main(){
    int a[100],b[100],c[100],d[100],e[100],f[100],t1[100],t2[100],s[100];
    scanf("%d%d%d%d%d%d",&a[0],&b[0],&c[0],&d[0],&e[0],&f[0]);
    int i=0;
    while (1){
        if (a[i]==0&&b[i]==0&&c[i]==0&&d[i]==0&&e[i]==0&&f[i]==0){
            break;
        }
        else {
            t1[i]=a[i]*3600+b[i]*60+c[i];
            t2[i]=(d[i]+12)*3600+e[i]*60+f[i];
            s[i]=t2[i]-t1[i];
            i++;
            scanf("%d%d%d%d%d%d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
        }
    }
    for (int k=0;k<i-1;k++){
        printf("%d\n",s[k]);
    }
    printf("%d",s[i-1]);
    return 0;
}

