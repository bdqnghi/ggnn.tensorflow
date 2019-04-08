int main()
{
    int b, c, d, sum=0;
    int a[20];
    a[0]=0;
    a[1]=31;
    a[2]=59;
    a[3]=90;
    a[4]=120;
    a[5]=151;
    a[6]=181;
    a[7]=212;
    a[8]=243;
    a[9]=273;
    a[10]=304;
    a[11]=334;
    a[12]=365;
    scanf("%d%d%d", &b, &c, &d);
    if((b%4!=0)||(b%100==0&&b%400!=0)){
        sum=a[c-1]+d;
    }
    else{
         if(c<3){
         sum=a[c-1]+d;
         }
         else{
             sum=a[c-1]+d+1;
         }   
    }
    printf("%d", sum);
    return 0;
}