int main()
{
  int n,sz[10],a[10],i,b;
  double j,k,GPA;
  j=0;
  k=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
  	scanf("%d",&sz[i]);
  	k=k+sz[i];
  }
  for(i=0;i<n;i++){
  	scanf("%d",&a[i]);if(a[i]>=90&&a[i]<=100){
  		j=j+4.0*sz[i];
  	}
  	if(a[i]>=85&&a[i]<=89){
  		j=j+3.7*sz[i];
  	}
  	if(a[i]>=82&&a[i]<=84){
  		j=j+3.3*sz[i];
  	}
  	if(a[i]>=78&&a[i]<=81){
  		j=j+3.0*sz[i];
  	}
  	if(a[i]>=75&&a[i]<=77){
  		j=j+2.7*sz[i];
  	}
  	if(a[i]>=72&&a[i]<=74){
  		j=j+2.3*sz[i];
  	}
  	if(a[i]>=68&&a[i]<=71){
  		j=j+2.0*sz[i];
  	}
  	if(a[i]>=64&&a[i]<=67){
  		j=j+1.5*sz[i];
  	}
  	if(a[i]>=60&&a[i]<=63){
  		j=j+1.0*sz[i];
  	}
  	if(a[i]<60){
  		j=j+0*sz[i];
  	} 		
  }
  GPA=j/k;
  printf("%.2lf",GPA);
    return 0;
}