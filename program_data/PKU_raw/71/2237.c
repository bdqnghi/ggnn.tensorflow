main()
{
      int x,y,z,n,i,t,s;
      int a[13];
      a[1]=31;
      a[3]=31;
      a[5]=31;
      a[7]=31;
      a[8]=31;
      a[10]=31;
      a[12]=31;
      a[4]=30;
      a[6]=30;
      a[9]=30;
      a[11]=30;
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {  t=0;
         scanf("%d %d %d",&x,&y,&z);
         if(y>z){s=y;y=z;z=s;}
         a[2]=((x%400==0)||(x%100!=0&&x%4==0))?29:28;
         for(int j=y;j<z;j++)
            t=t+a[j];
         if(t%7==0)printf("YES\n");
         else printf("NO\n");
      }
      
}