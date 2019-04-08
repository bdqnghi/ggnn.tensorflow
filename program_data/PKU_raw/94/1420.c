int main()
{
  int i,n,a[10000],b[1000],k,x,j;
  j=0;
  k=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
  	scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++){
  	if(a[i]%2!=0){
  	b[k]=a[i];
  	k++;
  }else{
  k=k;
  }
  }
  n=k;
  while(j<=n){
  	for(i=0;i<n-1;i++){
  		if(b[i]<=b[i+1]){
  		b[i]=b[i];
  		b[i+1]=b[i+1];
  		}else{
  		x=b[i];
  		b[i]=b[i+1];
  		b[i+1]=x;
  		}
  	}
  	j++;
  }
  
   for(i=0;i<n-1;i++){
   	printf("%d,",b[i]);
   }
printf("%d",b[n-1]);
    
  	
   
  return 0;
    
}
