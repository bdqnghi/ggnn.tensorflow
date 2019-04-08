int main()
{
    int y,m,d,s=0,a[12],i;
    scanf("%d %d %d",&y,&m,&d); 
    if((y%400==0)||(y%4==0&&y%100!=0)) 
    a[1]=29;
    else
    a[1]=28;
    a[0]=a[2]=a[4]=a[6]=a[7]=a[9]=a[11]=31;
    a[3]=a[5]=a[8]=a[10]=30;
    for(i=0;i<m-1;i++)
    {
        s=s+a[i];
    }
    s=s+d;
    printf("%d",s);
}
