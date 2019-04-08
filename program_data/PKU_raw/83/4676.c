main()
{     
     int i,j,k,m,n;
     int a[50],b[50];
     float sum=0;
     scanf("%d",&n);

                    m=0;
                    sum=0;
                    for(j=0;j<n;j++)
                    scanf("%d",&a[j]);
                    for(j=0;j<n;j++)
                    scanf("%d",&b[j]);
                    for(j=0;j<n;j++)
                    {if(b[j]<=100&&b[j]>=90)
                    sum=sum+(float)a[j]*4.0;
                    if(b[j]<=89&&b[j]>=85)
                    sum=sum+(float)a[j]*3.7;
                    if(b[j]<=84&&b[j]>=82)
                    sum=sum+(float)a[j]*3.3;
                    if(b[j]<=81&&b[j]>=78)
                    sum=sum+(float)a[j]*3.0;
                    if(b[j]<=77&&b[j]>=75)
                    sum=sum+(float)a[j]*2.7;
                    if(b[j]<=74&&b[j]>=72)
                    sum=sum+(float)a[j]*2.3;
                    if(b[j]<=71&&b[j]>=68)
                    sum=sum+(float)a[j]*2.0;
                    if(b[j]<=67&&b[j]>=64)
                    sum=sum+(float)a[j]*1.5;
                    if(b[j]<=63&&b[j]>=60)
                    sum=sum+(float)a[j]*1.0;}
                    for(j=0;j<n;j++)
                    m=m+a[j];
                    sum=(float)sum/m;
                    printf("%.2f\n",sum);
                                 
                                                      }
       
      
