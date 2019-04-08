int main(){
    int n,a,b,d,s[1000],c[1000];
	scanf("%d",&n);
	for(a=0;a<n;a++){
		c[0]=0;
       scanf("%d %d",&b,&d);
	   if(b>=90&&b<=140&&d>=60&&d<=90){s[a]=1;c[a+1]=c[a]+s[a];}else{s[a]=0;c[a+1]=0;}
	}
	int e,k,i;
	for(i=1;i<=a+1;i++){
		for(k=0;k<a+1-i;k++){
			if(c[k]>c[k+1]){e=c[k];c[k]=c[k+1];c[k+1]=e;}
		}
	}
    printf("%d",c[a]);
	return 0;
}