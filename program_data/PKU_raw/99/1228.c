int t[4];
int main(){
   int i,n,m;
   scanf("%d",&m);
    for(i=0;i<m;i++)
    {
    scanf("%d",&n);
    if(n<19)t[0]++;
    else if(n<36)t[1]++;
    else if(n<61)t[2]++;
    else t[3]++;
    }
    printf("1-18: %.2f%%\n",(double)t[0]/m*100);
    printf("19-35: %.2f%%\n",(double)t[1]/m*100);
    printf("36-60: %.2f%%\n",(double)t[2]/m*100);
    printf("Over60: %.2f%%",(double)t[3]/m*100);
    return 0;
}
