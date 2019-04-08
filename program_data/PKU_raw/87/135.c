int main()
{
    int a[100],b[100],c[100],d[100],e[100],f[100];
    int sum=0;int i=0;
    for(i;i<100;i++){
        scanf("%d %d %d %d %d %d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
        if(a[i]==0){break;}
        d[i]=d[i]+12;
}
    for(i=0;a[i]!=0;i++){
    while(a[i]!=d[i]||b[i]!=e[i]||c[i]!=f[i]){
    if(c[i]==60){c[i]=0;b[i]++;}else{c[i]++;sum++;}
    if(b[i]==60){b[i]=0;a[i]++;}
}printf("%d\n",sum);sum=0;
}
return 0;
}