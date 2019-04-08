int main(){
	int a,b,c,d,e,f,m,n,s,flag=1;
	
	while(flag==1){
		
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		if((a==0)&&(b==0)&&(c==0)&&(d==0)&&(e==0)&&(f==0)){
			flag=0;
		}
		m=a*3600+b*60+c*1;
		n=(d+12)*3600+e*60+f;             
		s=n-m;
		if(flag==0){
			break;
		}else{
			printf("%d\n",s);
		}
	}

	








	return 0;
}