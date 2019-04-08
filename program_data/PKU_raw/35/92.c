void main()
{int a,b,i,j,k,t;
 int c[8][8];
 scanf("%d,%d",&a,&b);
 for(i=0;i<a;i++)
   for(j=0;j<b;j++)
     scanf("%d",&c[i][j]);
 for(i=0;i<a;i++)
   {k=0;
    for(j=1;j<b;j++)
      if(c[i][j]>c[i][k])
         k=j;
    for(t=0;t<a;t++)
       if(c[t][k]<c[i][k])
          break;
     if(t>=a) 
       {printf("%d+%d",i,k);
           break;}
     }
 if(i>=a) printf("No");
}