int main()
 { int n,a,b,sz[100],m=0,j=0,max=0,i;
   scanf("%d\n",&n);
   for(j=0;j<=99;j++)
   sz[j]=0;
   
   j=0;
   for(i=0;i<=n-1;i++)
   {scanf("%d %d\n",&a,&b);
    if(a>=90&&a<=140&&b>=60&&b<=90)
    { m=m+1;
     sz[j]=m;
     }
      else {j=j+1;
           sz[j]=0;
            j=j+1;
             m=0;}
    }
    
    for(j=0;j<=99;j++)
    {if(sz[j]>max)
     max=sz[j];}
   printf("%d",max);
   return 0;
}