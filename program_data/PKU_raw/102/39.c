int main(){
  int n,i,t=0,m=0,j;
  double gao[40],b[40],e,c[40];
  char a[40][7];
  scanf("%d",&n);
  for(i=0;i<n;i++){
   scanf("%s%lf",a[i],&gao[i]);
  }
  for(i=0;i<n;i++){
	  if(a[i][0]=='m'){b[t]=gao[i];t++;}
  }
  
  for(i=0;i<n;i++){
	  if(a[i][0]=='f'){c[m]=gao[i];m++;}
  }

  for(i=1;i<=t;i++){
	  for(j=0;j<t-i;j++){
		  if(b[j]>b[j+1]){e=b[j];b[j]=b[j+1];b[j+1]=e;}
	  }
  }
   for(i=1;i<=m;i++){
	  for(j=0;j<m-i;j++){
		  if(c[j]<c[j+1]){e=c[j];c[j]=c[j+1];c[j+1]=e;}
	  }
  }
   for(i=0;i<t;i++){
   printf("%.2lf ",b[i]);}
   printf("%.2lf",c[0]);
    for(i=1;i<m;i++){
   printf(" %.2lf",c[i]);}
return 0;}