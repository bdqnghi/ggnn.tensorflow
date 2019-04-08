int main(){
	int a[1000],b[1000],c[1000],d[1000],e[1000],f[1000],i;
	int s[1000],zhongjian,qian1,qian,hou,shu;
	shu=0;
	i=0;
	while(i<1000){
		scanf("%d%d%d%d%d%d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
		if(a[i]!=0){
			zhongjian=(d[i]+11-a[i])*3600;
			qian1=b[i]*60+c[i];
			qian=3600-qian1;
			hou=e[i]*60+f[i];
			s[i]=zhongjian+qian+hou;
			shu=shu+1;
			i++;
		}
		else{
			break;
		}
	}
	for(i=0;i<shu;i++){
		printf("%d\n",s[i]);
	}
	return 0;
}