int main (){
	int i,a,b,c,d,e,f,s;
	for(i=0; ;i++){
		scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
			break;
		}
		s=(d+12-a)*3600+(e-b)*60+f-c;
		printf("%d\n",s);
	}
	return 0;
}