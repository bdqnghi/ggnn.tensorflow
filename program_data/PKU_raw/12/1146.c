

int main(int argc, char *argv[])
{
  int a[16]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  int i,j,m,n;
  
  while(1){
  for(i=0;i<16;i++)
  {
    scanf("%d",&a[i]);
    if(a[i]==-1){return 0;}
    if(a[i]==0){n=i;break;}                 
  }/*input*/
  m=0;
  for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
   {
     if(a[j]==(a[i]+a[i]))m++;                
   }                 
  }/*??*/
  

 {printf("%d\n",m);}
  
  
}
  
 	
  return 0;
}
