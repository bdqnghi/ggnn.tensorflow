int main()
{char s[1000][8];
double h[1000],zh[1000];
int n,i,j=0,m,r;
scanf("%d",&n);
m=n-1;
for(i=0;i<n;i++){
	scanf("%s",s[i]);
	if(s[i][0]=='m'){
		scanf("%lf",&h[i]);
		zh[j]=h[i];
		j++;
	}else{
		scanf("%lf",&h[i]);
		zh[m]=h[i];
		m--;
	}
}
for(i=1;i<j;i++){
	double tmp=zh[i];
	for(r=i-1;r>=0;r--){
		if(tmp<zh[r]){
             zh[r+1]=zh[r];
			 zh[r]=tmp;
		}else{
			zh[r+1]=tmp;
			break;
		}
	}
}
for(i=0;i<n-j;i++){
for(r=j;r<n-i;r++){
	if(zh[r]<zh[r+1]){
		double tm=zh[r+1];
		zh[r+1]=zh[r];
		zh[r]=tm;
	}
}
}

for(i=0;i<n-1;i++){
printf("%.2lf ",zh[i]);
}
printf("%.2lf",zh[n-1]);

return 0;
}
