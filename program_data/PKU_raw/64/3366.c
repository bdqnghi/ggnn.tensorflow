int main(){
int i,j,m=0,n,x[10],y[10],z[10],a,b,c,e,f,g,x1[55],y1[55],z1[55],x2[55],y2[55],z2[55];
double jl[55],d;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d%d%d",&x[i],&y[i],&z[i]);
}
for(i=0;i<n-1;i++){
	for(j=i+1; j<n; j++){
		jl[m]=sqrt(pow(x[i]-x[j],2)+pow(y[i]-y[j],2)+pow(z[i]-z[j],2));
		x1[m]=x[i];x2[m]=x[j];y1[m]=y[i];y2[m]=y[j];z1[m]=z[i];z2[m]=z[j];
		m++;
	}
}
for(j=0;j<m-1;j++){
     for(i=0;i<m-j-1;i++){
     if(jl[i]<jl[i+1]){
     d=jl[i+1];jl[i+1]=jl[i];jl[i]=d;
     a=x1[i+1];x1[i+1]=x1[i];x1[i]=a;
     b=x2[i+1];x2[i+1]=x2[i];x2[i]=b;
     c=y1[i+1];y1[i+1]=y1[i];y1[i]=c;
     e=y2[i+1];y2[i+1]=y2[i];y2[i]=e;
     f=z1[i+1];z1[i+1]=z1[i];z1[i]=f;
     g=z2[i+1];z2[i+1]=z2[i];z2[i]=g;
     }
   }
}
	for(i=0;i<m;i++){
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",x1[i],y1[i],z1[i],x2[i],y2[i],z2[i],jl[i]);
	}
return 0;
}
