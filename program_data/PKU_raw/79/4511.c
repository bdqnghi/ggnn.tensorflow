int main()
{
          int x,y,z,a,b,i,j;
          int n[100],m[100],o[1000];
          i=0;
          do
          {
              scanf("%d %d",&a,&b);
              if(a==0&&b==0) break;
              n[i]=a;
              m[i]=b;
              i++;
          }while(a!=0&&b!=0);
          for(j=0;j<i;j++)
          {
                          for(x=0;x<n[j];x++)
                          {
                                             o[x]=1;
                          }
                          x=-1;
                          y=0;
                          z=0;
                          do
                          {                            
                                                       if(x==(n[j]-1)) x=0;
                                                       else x++;  
                                                       if(o[x]>0) y++;
                                                       if(y==m[j])
                                                       {
                                                                  o[x]=o[x]-100;
                                                                  y=0;
                                                                  z++;
                                                       }
                          }while(z!=(n[j]-1));
                          for(x=0;x<n[j];x++)
                          {
                                             if(o[x]>0) printf("%d\n",x+1);
                          }
          }         
}
