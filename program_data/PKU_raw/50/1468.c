int main()
{
    int w,i,a;
    int sz[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d",&w);
    w+=12;
    if((w%7)==5){
       printf("1\n");
    }
    for(i=1;i<12;i++){
        w+=sz[i];
        if((w%7)==5){
           a=i+1;
           printf("%d\n",a);
        }
    }
    return 0;
}