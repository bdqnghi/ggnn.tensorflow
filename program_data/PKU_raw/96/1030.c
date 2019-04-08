main()
{
      int a[110],b[110],i,j,m,yu,z,qishi;
      char c[110];
      scanf("%s",c); 
      
      for(i=0;c[i]!='\0';i++)
              a[i+1]=c[i]-'0'; 
      m=i;
      
if(m==1)
printf("0\n%d",a[1]);
else{
     if(m==2)
     printf("%d\n%d",(10*a[1]+a[2])/13  , (10*a[1]+a[2])%13 );
     else{
     
      
      
      for(i=1;i<=m-1;i++)
      {
            z=10*a[i]+a[i+1];
            b[i]=z/13;
            a[i+1]=z%13;
      }
      yu=a[i];
      if(b[1]==0) qishi=2;
      else qishi=1;
      for(j=qishi;j<=m-1;j++)
      printf("%d",b[j]);
      printf("\n");
      printf("%d\n",yu);
      
      }}
}
      
      
