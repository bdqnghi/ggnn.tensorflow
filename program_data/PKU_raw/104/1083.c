int main()
{
    int x,y,i=1,j=1,a[20],b[20],k,s,f=0;
    scanf("%d%d", &x,&y);
    a[1]=x;b[1]=y;
    while(x>0){
               i++;
               a[i]=x/2;
               x=x/2;
               }
    while(y>0){
               j++;
               b[j]=y/2;
               y=y/2;
               }
    for(k=1;k<=i;k++){
                      for(s=1;s<=j;s++){
                                        if(a[k]==b[s]){
                                                      if(f==0){printf("%d", a[k]);
                                                               f=1;
                                                               }
                                                      } 
                                        }
                      }
    return 0;
    }
