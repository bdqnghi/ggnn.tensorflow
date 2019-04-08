int nian(int m)
{  
    if ((m%400==0)||((m%100!=0)&&(m%4==0)))
    return 1;
    else
     return 0;
}
int main()
{
    int i,s=0,n,y,r,a[12];
    scanf("%d%d%d",&n,&y,&r);
    a[0]=a[2]=a[4]=a[6]=a[7]=a[9]=a[11]=31;
    a[3]=a[5]=a[8]=a[10]=30;
    if (nian(n))
       a[1]=29; else a[1]=28;
       for (i=0;i<y-1;i++)
       s+=a[i];
       s+=r;
       printf("%d",s);
       return 0;
}

