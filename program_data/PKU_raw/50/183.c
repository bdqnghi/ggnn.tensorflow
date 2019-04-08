void main()
{
 int w,i,j,a[12][31],b[12][31],c[12*31],d[12*31];
 scanf("%d",&w);
 for(i=0;i<12;i++)
  for(j=0;j<31;j++)
   a[i][j]=j+1;
    for(j=28;j<31;j++)
  a[1][j]=0;
    for(i=0;i<12;i++)
 if(i==3 || i==5 || i==8 || i==10)
  a[i][30]=0;
    for(i=0;i<12*31;i++)
 d[i]=a[i/31][(i+31)%31];
 c[0]=w;
 for(i=1;i<12*31;i++)
    {
     if(d[i]==0) c[i]=c[i-1];
  else c[i]=c[i-1]+1;
        if(c[i]>=8) c[i]=c[i]-7;
     }
   for(i=0;i<12*31;i++)
 b[i/31][(i+31)%31]=c[i];
 for(i=0;i<12;i++)
  for(j=0;j<31;j++)
 if(b[i][j]==5 && a[i][j]==13)
     printf("%d\n",i+1);
}
