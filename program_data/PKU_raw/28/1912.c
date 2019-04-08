int main(){
  char v[10000];
  gets(v);
  int a[400],i,j;
  for(i=0;i<=strlen(v)-1;i++)
 { 
    if((v[i]==' ')&&(v[i+1]==' '))      
       {
           for(j=i;j<=strlen(v)-1;j++)
             {
               v[j]=v[j+1];    
             }
            i--;                
       }
 }

 int p=0;
 for(i=0;i<=strlen(v)-1;i++)
 {
    if(v[i]==' ')
     {
       a[p]=i;
       p++;        
     }    
 }
if(p==0){printf("%d",strlen(v));} 
else{ printf("%d,",a[0]);
 for(i=0;i<=p-2;i++)
 {
   printf("%d,",a[i+1]-a[i]-1);      
 }
 printf("%d",strlen(v)-1-a[p-1]);}
  return 0;    
    
 
 
 }

