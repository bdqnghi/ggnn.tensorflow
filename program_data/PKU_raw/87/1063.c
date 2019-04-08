int main(){
	int a[100],b[100],c[100],d[100],e[100],f[100],i,a1,b1,c1,d1,e1,f1,num=0,zh,zq,zc,ans;
	for(i=0;i>=0;i++){
		scanf("%d%d%d%d%d%d",&a1,&b1,&c1,&d1,&e1,&f1);
		if(a1==0){
			break;
		}
		else{
			a[i]=a1;
			b[i]=b1;
			c[i]=c1;
			d[i]=d1;
			e[i]=e1;
			f[i]=f1;
			num++;
		}
	}
	for(i=0;i<num;i++){
		zc=0;
		zq=0;
		zh=0;
		ans=0;
		zc=3600*(12-a[i]+d[i]);
		zq=60*b[i]+c[i];
		zh=60*e[i]+f[i];
		ans=zc+zh-zq;
		printf("%d\n",ans);
	}
	return 0;
}