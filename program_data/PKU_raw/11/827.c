main()
{
 int y,m,d,i;
 int a[13];
  a[0]=0;
 int sum=0;
 scanf("%d %d %d",&y,&m,&d);
  a[1]=a[3]=a[5]=a[7]=a[8]=a[10]=a[12]=31;
 a[4]=a[6]=a[9]=a[11]=30;
 if(y%400==0||(y%4==0&&y%100!=0))
  a[2]=29;
  else
  a[2]=28;
 for(i=1;i<m;i++)
  sum=sum+a[i];
  sum=sum+d;
 printf("%d",sum);
 getchar();
}
