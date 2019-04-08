int main()
{
     int m,i,j,a,b;
      scanf("%d",&m);
     for(i=1;i<=m/2;i++)
     {
               a=2;         
          while(i%a!=0&&a<=i) 
            a++;
         if(a==i){
                    b=2;
           while(((m-i)%b!=0)&&(b<=m-i)) 
              b++;
         if(b==m-i) 
           printf("%d %d\n",i,m-i);
             }
         }
    return 0;
}