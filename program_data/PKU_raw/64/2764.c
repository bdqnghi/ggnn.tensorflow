int main(){
	int n,c=0;
	double j[100],k;
	scanf("%d",&n);
	int x[100],y[100],z[100],x1[100],y1[100],z1[100],x2[100],y2[100],z2[100];
    for(int b=0;b<n;b++){
		scanf("%d%d%d",&x[b],&y[b],&z[b]);
	}

	
	for(int p=0;p<n;p++){
		for( int l=p+1;l<n;l++){
			k=((x[p]-x[l])*(x[p]-x[l])+(y[p]-y[l])*(y[p]-y[l])+(z[p]-z[l])*(z[p]-z[l]))*1.0;
				j[c]=sqrt(k);
			    x1[c]=x[p];y1[c]=y[p];z1[c]=z[p];
				x2[c]=x[l];y2[c]=y[l];z2[c]=z[l];
                         c++;

		}
	}
	

    for(int a=1;a<=n*(n-1)/2;a++){
		double e;
    for(int i=0;i<n*(n-1)/2-a;i++){
    if(j[i]<j[i+1]){
    e=j[i+1];
    j[i+1]=j[i];
    j[i]=e;
       int f;
     f=x1[i+1];
    x1[i+1]=x1[i];
    x1[i]=f;
	f=y1[i+1];
    y1[i+1]=y1[i];
    y1[i]=f;
	f=z1[i+1];
    z1[i+1]=z1[i];
    z1[i]=f;

    f=x2[i+1];
    x2[i+1]=x2[i];
    x2[i]=f;
	f=y2[i+1];
    y2[i+1]=y2[i];
    y2[i]=f;
	f=z2[i+1];
    z2[i+1]=z2[i];
    z2[i]=f;

	}
	}
	}
	for(int i=0;i<n*(n-1)/2;i++){
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",x1[i],y1[i],z1[i],x2[i],y2[i],z2[i],j[i]);
	}
return 0;
	}
