
int main(int argc, char *argv[])
{
  int b,i,k;
  i=0;
  k=1;
  int a[100];
  int maxindex,c;
  c=0;
  scanf("%d",&b);
  for(i=0; i < 100; i++)
           a[i] = 0;
  if(b>1 && b<100){
     for(i=0;i<b;i++){
         scanf("%d",&(a[i]));
         }
     for(k=1;k<=2;k++){
        for(i=0;i<=100-k-1;i++){
           if(a[i]>a[i+1]){
 c=a[i];
           a[i]=a[i+1];
           a[i+1]=c;
       
           }
        }
    printf("%d\n",a[100-k]);
      }
  }else{
  printf("error");
  }	
  return 0;
}