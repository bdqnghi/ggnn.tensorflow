int main()
{         
          int h,v,j,z,i,n,p,q,u;
          int a[100000],b[100000],c[10000]={0};
          scanf("%d",&n);
          for( i=0;;i++)
          {
                  scanf("%d %d",&p,&q);
                  a[i]=p;b[i]=q;
                  if(p==0&&q==0){v=i;break;}
          }
               for(j=0;j<=v-1;j++)
               {
                   c[a[j]]--;
                   c[b[j]]++;
               }
               for(j=0;j<=n-1;j++)
               {
                                  
                 if(c[j]==n-1){u=1;h=j;}
               }
               if(u==1)printf("%d",h);
               else printf("NOT FOUND");
    
}
