int main(){
	int a,b,c,d,e,f,s,i;
	for(i=0;i<10000;i++){
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
			return 0;
		}
		if(d<=11){
			d=d+12;
		}
		s=3600*(d-a-1)+60*e+f+(60-c)+60*(60-b-1);
		printf("%d\n",s);
	}
	return 0;
}