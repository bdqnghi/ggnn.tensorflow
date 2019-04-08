int main(){
 int n;
 scanf("%d",&n);
 int shuzu[300],i,j;
 
 for(i=0;i<n;i++){
  scanf("%d",&shuzu[i]);
 }
 
    int zhuanhuan[300];
 zhuanhuan[0]=shuzu[0];
 printf("%d",zhuanhuan[0]);
 
 int a=1;
 int b;
 
 
 for(i=1;i<n;i++){
  b=0;
  for(j=0;j<a;j++){
   if(shuzu[i]==zhuanhuan[j]){
    break;
   }else{
                b++;
    
   }
   if(b==a){
    zhuanhuan[a]=shuzu[i];
    printf(",%d",shuzu[i]);
    a++;
   }
  }
  
 }
 
 return 0;
}
