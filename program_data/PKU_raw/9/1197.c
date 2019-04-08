int main()
{
 int n,i,j,s=0,e,z=0;
 int a[100],c[100],x[100];
 char b[100][10],d[100][10],y[100][10];
 char f[100][10];
 scanf("%d",&n);
 for(i=0;i<n;i++){
	 scanf("%s %d",b[i],&a[i]);
 }
 for(i=0;i<n;i++){
  if(a[i]>=60){
           c[s]=a[i];
    strcpy(d[s],b[i]);
    s++;
  }else{
         x[z]=a[i];
    strcpy(y[z],b[i]);
    z++;
  }
 }
 for(i=0;i<s;i++){
  for(j=1;j<s-i;j++){
   if(c[j-1]<c[j]){
   e=c[j];
   c[j]=c[j-1];
   c[j-1]=e;
   strcpy(f[j],d[j]);
         strcpy(d[j],d[j-1]);
   strcpy(d[j-1],f[j]);
   }
  }
 }
 for(i=0;i<s;i++){
        printf("%s\n",d[i]);
 }
 for(i=0;i<z;i++){
        printf("%s\n",y[i]);
 }
 return 0;
}