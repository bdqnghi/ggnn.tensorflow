int main()
{
    int n,y,r,s=0,i;
    scanf("%d %d %d",&n,&y,&r);
    int a[12];
    a[0]=31,a[1]=28,a[2]=31,a[3]=30,a[4]=31,a[5]=30,a[6]=31,a[7]=31,a[8]=30,a[9]=31,a[10]=30,a[11]=31;
    if((n%4==0&&n%100!=0)||(n%400==0))
      a[1]=29;
     for(i=0;i<y-1;i++) 
      s = s+a[i];
     s=s+r;
     printf("%d\n",s);
     getchar();
     getchar();
} 