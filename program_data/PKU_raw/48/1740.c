main()
{ int a[10][10],b[10][10];
  int i,j,k,m,n,p,q;
  scanf("%d%d",&m,&n);
  for (i=1;i<=9;i++)
  for (j=1;j<=9;j++)
  a[i][j]=0; 
  a[5][5]=m;
   /*for (j=1;j<=9;j++)
   {
     for (k=1;k<=9;k++) printf("%d ",a[j][k]);
     printf("\n");}
   printf("\n");*/
   
  for (i=1;i<=n;i++)
  {for (j=1;j<=9;j++)
   for (k=1;k<=9;k++)
   b[j][k]=0; 
      
    for (j=1;j<=9;j++)
    for (k=1;k<=9;k++)
    { b[j][k]=b[j][k]+2*a[j][k];
      for (p=-1;p<=1;p++)
      for (q=-1;q<=1;q++)
      if ((p!=0)||(q!=0)) b[j+p][k+q]=b[j+p][k+q]+a[j][k];
    }
    for (j=1;j<=9;j++)
    for (k=1;k<=9;k++)
    a[j][k]=b[j][k];
    }
   for (j=1;j<=9;j++)
   {
     for (k=1;k<=9;k++) 
     {printf("%d",a[j][k]); if (k<9) printf(" ");}
     printf("\n");}
}
