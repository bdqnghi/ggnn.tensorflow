int compare(const void*elem1,const void*elem2)
{   
    int *p1;
    int *p2;
    p1=(int*)elem1;
    p2=(int*)elem2;
    return(*p2)-(*p1);
}
main()
{
     for(int j=0;;j++)
   {
   int n,a=0,b=0;
   scanf("%d",&n); 
   if(n!=0)
   {
     int*f=(int*)malloc(n*sizeof(int));
     for(int i=0;i<n;i++)
     {
             scanf("%d",&f[i]);
     }
     qsort(f,n,sizeof(int),compare);
     int*g=(int*)malloc(n*sizeof(int));
     for(int i=0;i<n;i++)
     {
             scanf("%d",&g[i]);
     }
      qsort(g,n,sizeof(int),compare);
      int k=0,c=0,h=n-1,x=n-1,s=0;
      for(;(a+b+s)!=n;)
      {
              if(f[k]>g[c])
              {
                a++; 
                k++;
                c++;
                }
              else if(f[k]<=g[c])
              {
                   if(f[h]>g[x])
                   {
                      a++;
                      h--;
                      x--;
                   }
                   else if(f[h]<=g[x])
                   {
                      if(f[h]<g[c])
                      {
                      b++;
                      h--;
                      c++;
                      }
                      else 
                      {
                      s++;
                      h--;
                      c++;
                      }
                   } 
              }      
      }
        int y=0;
        y=200*a-200*b;
        printf("%d\n",y);
   } 
   if(n==0)
   break;
}
   getchar();
   getchar(); 
}




