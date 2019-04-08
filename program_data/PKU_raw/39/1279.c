int main()
{
    int n,i,a[200],b[200],c[200],m[200],s=0,max,maxj;
    char d[200][40],e[200],f[200];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s%d%d %c %c %d",d[i],&a[i],&b[i],&e[i],&f[i],&c[i]);
    }
    for(i=0;i<n;i++){
        m[i]=0;
        if(a[i]>80 && c[i]>0){
            m[i]+=8000;
        }
        if(a[i]>85 && b[i]>80){
            m[i]+=4000;
        }
        if(a[i]>90){
            m[i]+=2000;
        }
        if(a[i]>85 && f[i]=='Y'){
            m[i]+=1000;
        }
        if(b[i]>80 && e[i]=='Y'){
            m[i]+=850;
        }
    }
    for(i=0;i<n;i++){
        s+=m[i];
    }
    max=m[0];
    maxj=0;
    for(i=1;i<n;i++){
        if(m[i]>max){
            max=m[i];
            maxj=i;
        }
    }
    printf("%s\n%d\n%d",d[maxj],max,s);
    return 0;
} 