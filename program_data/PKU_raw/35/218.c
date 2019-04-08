void main()
{ int m,n,i,k,j,t=0,q=0,a[8][8],max,min;
   scanf("%d,%d",&m,&n);
     for(i=0;i<m;i++)
     for(j=0;j<n;j++)
     scanf("%d",&a[i][j]);
    
    for(i=0;i<m;i++)
   {
      {  max=a[i][0];
      for(j=0;j<n;j++)
       if(a[i][j]>max){max=a[i][j];t=j;}
        }
       for(k=0;k<m;k++)
         { min=a[0][t];
          if(a[k][t]<min){min=a[k][t];q=k;}
            }
     if(max==min){printf("%d+%d",q,t);break;}
   }
   if(i==m)printf("No");
}
