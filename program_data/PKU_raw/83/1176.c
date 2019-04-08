 float f(int a)
 {
        if(90<=a&&a<=100)  return 4;
        if(85<=a&&a<=89)  return 3.7;
        if(82<=a&&a<=84)  return 3.3;
        if(78<=a&&a<=81)  return 3.0;
        if(75<=a&&a<=77)  return 2.7;    
        if(72<=a&&a<=74)  return 2.3; 
        if(68<=a&&a<=71)  return 2.0;
        if(64<=a&&a<=67)  return 1.5;
        if(60<=a&&a<=63)  return 1.0;
        if(a<60)  return 0;
		}
 int main()
{
     int n,i,m;
	 float h;
     h=0;m=0;
     float GPA;
     scanf("%d\n",&n);
     int c[10],b[10];
     for(i=0;i<n;i++)
      {
          scanf("%d\b",&c[i]);
       }
      printf("\n");
      for(i=0;i<n;i++)
	  {
          scanf("%d\b",&b[i]);
       }
    
        for(i=0;i<n;i++)
           {
               h+=f(b[i])*c[i];
	      m+=c[i];
		}
       GPA=(float)h/m;
       printf("%.2f",GPA);
        return 0;
}
