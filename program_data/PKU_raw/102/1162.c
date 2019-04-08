int main(){
    int n,i,j,x=0,y=0;
    char a[10];
    float b[100],c[100],d[100],t;
    scanf("%d",&n);
    for(i=0;i<n;i++){
    	cin>>a;
    	cin>>b[i];
    	if(a[0]=='m'){
    		c[x]=b[i];
    		x++;
    	}
    	if(a[0]=='f'){
    		d[y]=b[i];
    		y++;
    	}
    }
    for(i=0;i<x;i++){
    for(j=x-1;j>i;j--){
    if(c[j]<c[j-1]){
    t=c[j];
    c[j]=c[j-1];
    c[j-1]=t;
    }
    }
    }
    for(i=0;i<y;i++){
    for(j=y-1;j>i;j--){
    if(d[j]>d[j-1]){
    t=d[j];
    d[j]=d[j-1];
    d[j-1]=t;
    }
    }
    }
    for(i=0;i<x;i++){
    	printf("%.2lf ",c[i]);
    }
    for(i=0;i<y-1;i++){
    	printf("%.2lf ",d[i]);
    }
    printf("%.2lf",d[y-1]);
    return 0;
}






