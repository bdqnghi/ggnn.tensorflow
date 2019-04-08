int main(){
    int x=0,y=0;
	int a[1000],b[1000],c[1000],d[1000],e[1000],f[1000],s[1000],h[1000],i[1000],j[1000];
	for(x=0;x<10;x++){
	
	scanf("%d %d %d %d %d %d ",&a[x],&b[x],&c[x],&d[x],&e[x],&f[x]);
	if((a[x]==0)&&(b[x]==0)&&(c[x]==0)&&(d[x]==0)&&(e[x]==0)&&(f[x]==0)){
		break;
		
	}else{
		
		d[x]+=12;

	h[x]=(d[x]-a[x])*3600;
	i[x]=(e[x]-b[x])*60;
	j[x]=f[x]-c[x];
	s[x]=h[x]+i[x]+j[x];
y+=1;
	
	}
	}	
	for(x=0;x<y;x++){

	printf("%d\n",s[x]);
	}
	return 0;
}