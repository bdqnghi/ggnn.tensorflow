   int main(){
    int a[1000];
	int b[1000];
	int c[1000];
	int d[1000];
	int e[1000];
	int f[1000];
	int m[1000];
	int n[1000];
	int s[1000];
	int i,j;
    
    for(i=0;i<1000;i++){
      scanf("%d %d %d %d %d %d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);   
	  if(a[i]==0&&b[i]==0&&c[i]==0&&d[i]==0&&e[i]==0&&f[i]==0){
	    break;
	  }else{
	   continue;
	  }
	}
	for(j=0;j<i;j++){
	  m[j]=a[j]*3600+b[j]*60+c[j];
	  n[j]=(d[j]+12)*3600+e[j]*60+f[j];
      s[j]=n[j]-m[j];
	  printf("%d\n",s[j]);
	}
	        return 0;      
} 

