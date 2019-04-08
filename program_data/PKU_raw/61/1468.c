int f(int n);


int main(){
  int a[10000],s[10000],x,k;
  scanf("%d",&k);
  for(x=0;x<k;x++){
     scanf("%d",&a[x]);
  
     s[x]=f(a[x]);
  
     printf("%d\n",s[x]);
  }
  
return 0;
}

int f(int n){
  int a[100000],i;
  
	  a[1]=1;
  
      a[2]=1;
 
  if(n>2){
	  for(i=3;i<=n;i++){
		  a[i]=a[i-1]+a[i-2];

	  }
  }
  
  return a[n];
}
