int main(){
	int n,b=0,i;
	scanf("%d",&n);
	int x[10],y[10],z[10],k;
	double len[10][10],num[100],s;
	for(i=0;i<n;i++){
		scanf("%d %d %d",&x[i],&y[i],&z[i]);
	}
    for(i=0;i<n;i++){
		for(k=i+1;k<n;k++){
			len[i][k]=sqrt((x[i]-x[k])*(x[i]-x[k])+(y[i]-y[k])*(y[i]-y[k])+(z[i]-z[k])*(z[i]-z[k]));
			num[b]=len[i][k];
			b++;
		}
	}
	for(k=1;k<=b;k++){
		for(i=0;i<(b-k);i++){
			if(num[i]>num[i+1]){
				s=num[i+1];
				num[i+1]=num[i];
				num[i]=s;
			}
		}
	}
	for(b;b>=0;b--){
        for(i=0;i<n;i++){
		    for(k=i+1;k<n;k++){
				if(num[b]==len[i][k]){
					printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",x[i],y[i],z[i],x[k],y[k],z[k],len[i][k]);
					break;
				}
			}
            if(num[b]==len[i][k]){
			   len[i][k]=10000000;
			   break;
			   }
		}
	}
	return 0;
}