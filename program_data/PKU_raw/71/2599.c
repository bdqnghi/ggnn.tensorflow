int judge(int a)
{
    if (((a%100!=0)&&(a%4==0))||(a%400==0)) return 1;
    else return 0;
}
main()
{     int d[12]={31,28,31,30,31,30,31,31,30,31,30,31};
      int a,b,c,i,j,x,n,day;
      scanf("%d",&n);
      for (i=0;i<n;i++)
      {
          scanf("%d %d %d",&a,&b,&c);
          if (b>c){x=b; b=c; c=x;}
          x=judge(a);
          day=0;
          for (j=b;j<=c-1;j++)
          {
              day=day+d[j-1];
              if ((j==2)&&(x==1)) day++;
              }
          if (day%7==0) printf("YES\n");
          else printf("NO\n");
          /*printf("%d\n",day);*/
      }
    
}           
