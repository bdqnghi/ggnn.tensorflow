int main(){
    int ans,i,N,y,a,b,sum1[13],sum2[13],mon[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    sum1[0]=sum2[0]=0;
    for(i=1;i<=12;i++){
        sum1[i]=sum1[i-1]+mon[i];
        sum2[i]=sum2[i-1]+mon[i];
        if(i==2)sum2[i]++;
       }
    scanf("%d",&N);
    while(N--){
       scanf("%d%d%d",&y,&a,&b);
       ans=0;
       if(a>b){a^=b;b^=a;a^=b;}
       if((y%100==0&&y%400==0)||(y%100&&y%4==0))ans=(sum2[b-1]-sum2[a-1])%7;
       else ans=(sum1[b-1]-sum1[a-1])%7;
       
        if(!ans)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

