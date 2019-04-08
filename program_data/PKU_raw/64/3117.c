int main(){
int n;
int x[10],y[10],z[10], q=0,a[100],b[100],c[100],d[100],e[100],f[100];
float t,m[100];
scanf("%d",&n);
for(int h=0;h<n;h++){

	scanf("%d%d%d",&x[h],&y[h],&z[h]);
}
for(int i=0;i<n;i++){
	for(int u=i+1;u<n;u++){
    m[q] =(float)sqrt((x[i]-x[u])*(x[i]-x[u])+(y[i]-y[u])*(y[i]-y[u])+(z[i]-z[u])*(z[i]-z[u]));
	a[q]=x[i];b[q]=y[i];c[q]=z[i];d[q]=x[u];e[q]=y[u];f[q]=z[u];
	q++;
	}
}

for(int r=0;r<q;r++){
	for(int k=0;k<q-r;k++){
		if(m[k]<m[k+1]){
		t=m[k+1];
		m[k+1]=m[k];
		m[k]=t;
		t=a[k+1];
		a[k+1]=a[k];
		a[k]=t;
		t=b[k+1];
		b[k+1]=b[k];
		b[k]=t;		
		t=c[k+1];
		c[k+1]=c[k];
		c[k]=t;		
        t=d[k+1];
		d[k+1]=d[k];
		d[k]=t;
        t=e[k+1];
		e[k+1]=e[k];
		e[k]=t;
        t=f[k+1];
		f[k+1]=f[k];
		f[k]=t;
		
		
		}	
	}
}
for(int w=0;w<q;w++)
{printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",a[w],b[w],c[w],d[w],e[w],f[w],m[w]);}
return 0;
}