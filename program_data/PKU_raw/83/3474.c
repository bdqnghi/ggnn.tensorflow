void main()
{
   int n,a[10],b[10],i,j,k,l,d;
   float c[10],sum=0,GPA,m=0;
   scanf("%d",&n);
   for(i=0;i<=n-1;i++)
     scanf("%d",&a[i]);
   for(l=0;l<=n-1;l++)
	   scanf("%d",&b[l]);
   for(j=0;j<=n-1;j++)
   {   d=b[j];
	   if(90<=d&&d<=100) c[j]=4.0;
        else if(85<=d&&d<=89) c[j]=3.7;
         else if(82<=d&&d<=84) c[j]=3.3;
         else if(78<=d&&d<=81) c[j]=3.0;
         else if(75<=d&&d<=77) c[j]=2.7;
         else if(72<=d&&d<=74) c[j]=2.3;
         else if(68<=d&&d<=71) c[j]=2.0;
         else if(64<=d&&d<=67) c[j]=1.5;
         else if(60<=d&&d<=63) c[j]=1.0;
         else if(d<60) c[j]=0;}
    for(k=0;k<=n-1;k++)
        {sum=sum+a[k]*c[k];
        m=m+a[k];}
    GPA=sum/m;
    printf("%.2f",GPA);
}

    