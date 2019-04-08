int main(){
int n,i,x[100],y[100],z[100],k,t;
double s[1000],e;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d%d%d",&x[i],&y[i],&z[i]);
}
t=0;
for(k=0;k<n;k++){
	for(i=k+1;i<n;i++){
	s[t]=sqrt(1.0*((x[k]-x[i])*(x[k]-x[i])+(y[k]-y[i])*(y[k]-y[i])+(z[k]-z[i])*(z[k]-z[i])));
	t++;
	}
}
for(i=1;i<=n*(n-1)/2;i++){
for(t=0;t<n*(n-1)/2-i;t++){
	if(s[t]<s[t+1]){
	e=s[t];
	s[t]=s[t+1];
	s[t+1]=e;
	}
}
}
for(t=0;t<n*(n-1)/2;t++){
	if(s[t]==s[t+1]){
	continue;
	}else{
		for(k=0;k<n;k++){
			for(i=k+1;i<n;i++){
			if(s[t]==sqrt(1.0*((x[k]-x[i])*(x[k]-x[i])+(y[k]-y[i])*(y[k]-y[i])+(z[k]-z[i])*(z[k]-z[i]))))
				printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",x[k],y[k],z[k],x[i],y[i],z[i],s[t]);

			}
		}
	}
}
return 0;
}

