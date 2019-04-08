int main (){
	int a,b,c,d,e,f,s;
	while(1){
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0)
		break;
	s=(d+12-a-1)*60*60;
	s+=f+e*60;
	s+=(60-b-1)*60+60-c;
	printf("%d\n",s);
	}
	return 0;
}