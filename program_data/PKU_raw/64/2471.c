int main(){
int n,sf;
scanf("%d",&n);
int k=0;
int x[10],y[10],z[10],a[200],b[200];
double s[200];
for(int i=0;i<n;i++){
scanf("%d %d %d",&x[i],&y[i],&z[i]);
}
for (int i=0;i<n;i++){
 for(int j=i+1;j<n;j++){
    sf=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]);
    s[k]=sqrt(sf); 
    a[k]=i;
    b[k]=j;
     k++;
       }
    }
    int l;
    double u;
for(int q=1;q<k;q++){
 for(int w=0;w<k-q;w++){
   if(s[w]<s[w+1]){
    u=s[w];
    s[w]=s[w+1];
   s[w+1]=u;
     l=a[w];
    a[w]=a[w+1];
   a[w+1]=l; 
    l=b[w];
    b[w]=b[w+1];
   b[w+1]=l;
  
   }
  }
}
for(int i=0;i<k;i++){
printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",x[a[i]],y[a[i]],z[a[i]],x[b[i]],y[b[i]],z[b[i]],s[i]);
}
return 0;
 }

