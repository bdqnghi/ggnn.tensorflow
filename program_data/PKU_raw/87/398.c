int main(){
    int i,n,a,b,c,d,e,f,j,k;
   for(;;){scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
   if(a==0){break;}
  j=a*3600+b*60+c;
  k=d*3600+e*60+f;k=k+12*3600;
   k=k-j;printf("%d\n",k);
   
   }
   
    
    
    
    
    
    
    
 
    return 0;}