main()
{
      int n,i,a[200],b[200],c[200],d[13],j,min,max,s;
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
         scanf("%d %d %d",&a[i],&b[i],&c[i]);
      }
      d[1]=31;
      d[3]=31;
      d[4]=30;
      d[5]=31;
      d[6]=30;
      d[7]=31;
      d[8]=31;
      d[9]=30;
      d[10]=31;
      d[11]=30;
      d[12]=31;
      for(i=0;i<n;i++)
      {
      if((a[i]%400==0)||(a[i]%4==0&&a[i]%100!=0))
           d[2]=29;
      else
      {
           d[2]=28;
      }
       s=0;
     if(b[i]>c[i])
      {
         min=c[i];
          max=b[i];
     }
     else
      {
          min=b[i];
          max=c[i];
      }
      for(j=min;j<max;j++)
      {
          s=s+d[j];
      }
     if(s%7==0)
      printf("YES\n");
      else
      printf("NO\n");
      }





      getchar();getchar();getchar();getchar();
}
