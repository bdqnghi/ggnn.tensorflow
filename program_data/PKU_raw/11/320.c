int main()
{  
    int Y, M, D, x, y=0, i, a[12], sum;
    scanf("%d %d %d", &Y, &M, &D);
    a[0]=31;a[2]=31;a[4]=31;a[6]=31;a[7]=31;a[9]=31;a[11]=31;
    a[3]=30;a[5]=30;a[8]=30;a[10]=30;
    if(Y%4!=0)
    a[1]=28;
    else if(Y%4==0&&Y%100!=0)
    a[1]=29;
    else if(Y%4==0&&Y%100==0&&Y%400==0)
    a[1]=29;
    else a[1]=28;
  for(i=1; i<=M; i++)
    {
     x = a[M-i];
    y = y + x;
}
 sum = y + D - a[M-1];
    printf("%d", sum);
    return 0;
}
    
    
    