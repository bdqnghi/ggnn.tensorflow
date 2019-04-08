int main(){
 int a[500];
 int b[500];
 int n,i,p=0,r;
    scanf("%d",&n);
    for(i=0;i<n;i++)
	{
       scanf("%d",&a[i]);
       if(a[i]%2==1){
         b[i]=a[i];
	   }else{
	     b[i]=0;
	   }
	}
   for(i=0;i<n;i++)
   {
     if(b[i]>p){
      p=b[i];
	 }
   }
  for(r=1;r<=p-2;r+=2)
  {
    for(i=0;i<n;i++){
     if(b[i]==r){
      printf("%d,",b[i]);
	 }
	}
  } 
  printf("%d",p);
 return 0;
}
