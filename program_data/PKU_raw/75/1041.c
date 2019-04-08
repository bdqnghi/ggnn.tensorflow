int ppow(char p,int q){
    int x,y;
    y=(int)(p-48);
   for(x=1;x<=q;x++)
     y=y*10;
     return y;
     }
      
int main(){
    char aa[5000],bb[5000],s;
    gets(aa);
    gets(bb);
    int i=0,j=0,l,a,m,n;
    while(aa[i]!='\0'){
      if(aa[i]==',')
      j++;
      i++; 
      }
      j++;
      int cc[j+1][2],dd[1000],i1,k1,i2,k2;
         for(i=1;i<=j;i++){
                     cc[i][0]=0;
                     cc[i][1]=0;
                     }  
      i1=0;
      i2=0;
      m=1; 
        do{
         k1=1;
         k2=1;
         while(aa[i1+k1]!=','&&aa[i1+k1]!='\0')
              k1++;
          while(bb[i2+k2]!=','&&bb[i2+k2]!='\0')
              k2++;
           for(l=i1;l<i1+k1;l++)
           cc[m][0]=cc[m][0]+ppow(aa[l],k1-l+i1-1);
           for(l=i2;l<i2+k2;l++)
           cc[m][1]=cc[m][1]+ppow(bb[l],k2-l+i2-1);
           m++;
           i1=i1+k1+1;
           i2=i2+k2+1;
           }while(m!=j+1);
    for(i=1;i<=999;i++)
         dd[i]=0;
    for(i1=1;i1<=999;i1++){
         for(i2=1;i2<=j;i2++){
               if(i1>=cc[i2][0]&&i1<cc[i2][1])
                    dd[i1]++;
                    }
                    }
          a=dd[1];                                
    for(i=2;i<=999;i++){
      if(a<dd[i])
        a=dd[i];
        }
      cout<<j<<" "<<a;
         return 0;
      }
    
    
