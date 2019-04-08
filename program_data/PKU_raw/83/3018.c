double whatmark(int a)
{
    if(a>=90 && a<=100)return 4.0;   
    if(a>=85 && a<=89) return 3.7;
    if(a>=82 && a<=84) return 3.3;   
    if(a>=78 && a<=81)  return 3.0;
    if(a>=75 && a<=77) return 2.7;   
    if(a>=72 && a<=74)  return 2.3;
    if(a>=68 && a<=71) return 2.0;   
    if(a>=64 && a<=67)  return 1.5;
    if(a>=60 && a<=63) return 1.0;   
    if(a<60) return 0;
}
int main()
{
    int N,i,score[11],mark[11],tmark;
    double sum;
    cin>>N;
    for(i=1;i<=N;i++) cin>>mark[i];
    for(i=1;i<=N;i++) cin>>score[i];
    for(i=1,tmark=0;i<=N;i++) tmark+=mark[i];
    for(i=1,sum=0;i<=N;i++) sum+=whatmark(score[i])*mark[i];
    printf("%.2f\n",sum*1.0/tmark);
}
