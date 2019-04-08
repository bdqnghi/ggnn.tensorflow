
int main(){
    int n,nn;
    int a[101],b[101],c[101],x[46][3],y[46][3],xx[46],yy[46],px,py,pz;
    double jl[46],m;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d %d",&a[i],&b[i],&c[i]);
    }
    int d=0;
    for(int w=0;w<n;w++){
        for(int j=w+1;j<n;j++){
            jl[d]=sqrt(1.0*(a[w]-a[j])*(a[w]-a[j])+(b[w]-b[j])*(b[w]-b[j])+(c[w]-c[j])*(c[w]-c[j]));
			x[d][0]=a[w];
			x[d][1]=b[w];
			x[d][2]=c[w];
			y[d][0]=a[j];
			y[d][1]=b[j];
			y[d][2]=c[j];
            xx[d]=w;
            yy[d]=j;
            d++;
        }
    }
    
    for(int k=1;k<=n*(n-1)/2;k++){
        for(int j=0;j<n*(n-1)/2-k;j++){
            if(jl[j]>jl[j+1]||(xx[j]<xx[j+1]&&jl[j]==jl[j+1])||(yy[j]<yy[j+1]&&xx[j]==xx[j+1]&&jl[j]==jl[j+1])){
                m=jl[j+1];
                
                jl[j+1]=jl[j];
                jl[j]=m;
                
                nn=xx[j+1];
                
                xx[j+1]=xx[j];
                xx[j]=nn;
                nn=yy[j+1];
                
                yy[j+1]=yy[j];
                yy[j]=nn;
                
                px=x[j+1][0];
                py=x[j+1][1];
                pz=x[j+1][2];
                x[j+1][0]=x[j][0];
                x[j+1][1]=x[j][1];
                x[j+1][2]=x[j][2];
                x[j][0]=px;
                x[j][1]=py;
                x[j][2]=pz;
                
                px=y[j+1][0];
                py=y[j+1][1];
                pz=y[j+1][2];
                y[j+1][0]=y[j][0];
                y[j+1][1]=y[j][1];
                y[j+1][2]=y[j][2];
                y[j][0]=px;
                y[j][1]=py;
                y[j][2]=pz;
                
                
            }
        }
    }
    
    for(int j=n*(n-1)/2-1;j>=0;j--){
        printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",x[j][0],x[j][1],x[j][2],y[j][0],y[j][1],y[j][2],jl[j]);
    }
    
}
