main()
{
      double a[4],j,s,S;
      int i=0;
      for(i=0;i<4;i++)
      {
        scanf("%lf",&a[i]);
      }
      scanf("%lf",&j);
      j=(j/180)*3.1415926/2;
      s=(a[0]+a[1]+a[2]+a[3])/2;
      if((s-a[0])*(s-a[1])*(s-a[2])*(s-a[3]) - a[0]*a[1]*a[2]*a[3]*cos(j)*cos(j)>=0)
      {
      S = sqrt((s-a[0])*(s-a[1])*(s-a[2])*(s-a[3]) - a[0]*a[1]*a[2]*a[3]*cos(j)*cos(j));
      printf("%.4lf\n",S);
      }
      else printf("Invalid input");
      
}
