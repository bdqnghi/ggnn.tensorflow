int main(){
int x[10],y[10],z[10];
int n,i;
scanf("%d",&n);
int max,k=0;
max=n*(n-1)/2;
int MAX[45*45],MAX2[45*45];
int c;
double di[45][45],sz[45]={0.00};
for(i=0;i<n;i++){
scanf("%d%d%d",&x[i],&y[i],&z[i]);
}
for(i=0;i<n-1;i++){
	for(k=1;k+i<n;k++){
		di[i][i+k]=sqrt((x[i]-x[i+k])*(x[i]-x[i+k])+(y[i]-y[i+k])*(y[i]-y[i+k])+(z[i]-z[i+k])*(z[i]-z[i+k]));}
}
for(c=0;c<max;c++){for(i=0;i<n-1;i++){
	for(k=1;k+i<n;k++){if(c==0){if(sz[c]<di[i][i+k]){MAX[c]=i;MAX2[c]=i+k;sz[c]=di[i][i+k];}}
	else if(sz[c]<di[i][i+k]&&di[i][i+k]<sz[c-1]){MAX[c]=i;MAX2[c]=i+k;sz[c]=di[i][i+k];}
	else if(sz[c]<di[i][i+k]&&di[i][i+k]==sz[c-1]){if(i>MAX[c-1]){MAX[c]=i;MAX2[c]=i+k;sz[c]=di[i][i+k];}else if(i==MAX[c-1]){if(i+k>MAX2[c-1]){MAX[c]=i;MAX2[c]=i+k;sz[c]=di[i][i+k];}}
	}}}}
for(c=0;c<max;c++){printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",x[MAX[c]],y[MAX[c]],z[MAX[c]],x[MAX2[c]],y[MAX2[c]],z[MAX2[c]],sz[c]);}
return 0;
}