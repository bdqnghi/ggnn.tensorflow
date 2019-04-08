int main( ){
    int i,n,k,t,q=0;
    int x[10],y[10],z[10],a[50],b[50];
    double s[50],ss[50],j;
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
    scanf("%d %d %d ",&(x[i]),&(y[i]),&(z[i]));
    }
for(t=0;t<n-1;t++){
    for(i=t+1;i<n;i++){
        s[q]=1.0*(x[t]-x[i])*(x[t]-x[i])+1.0*(y[t]-y[i])*(y[t]-y[i])+1.0*(z[t]-z[i])*(z[t]-z[i]);
        ss[q]=sqrt(s[q]);
        a[q]=t;
        b[q]=i;
        q++;
        }
}
for(k=1;k<=q;k++){
    for(i=0;i<q-k;i++){	
	 	 if(ss[i]<ss[i+1]){	
	 	 	 	 j=ss[i+1];	
	 	 	 	 ss[i+1]=ss[i];	
	 	 	 	 ss[i]=j;
                 j=a[i+1];	
	 	 	 	 a[i+1]=a[i];	
	 	 	 	 a[i]=j;
                 j=b[i+1];	
	 	 	 	 b[i+1]=b[i];	
	 	 	 	 b[i]=j;
	 	 }
    }
}
for(i=0;i<q;i++){
    printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",x[a[i]],y[a[i]],z[a[i]],x[b[i]],y[b[i]],z[b[i]],ss[i]);
}
    return 0;
}



