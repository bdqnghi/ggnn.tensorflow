void main()
{
 int w;
 scanf("%d\n",&w);
 int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
 int b[12],i,j; // ???13??1.1??????????
  b[0]=12;
 for(i=1;i<12;i++)
   { b[i]=0;
     for(j=0;j<i;j++)
      b[i]=b[i]+a[j];      
      b[i]=b[i]+12;
    }
 for(i=0;i<12;i++)
   {
     int y;
     y=b[i]%7;
     if((y+w)%7==5)
     printf("%d\n",i+1);
    }        
 }
