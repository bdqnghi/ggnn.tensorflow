int main () {
	int a,b,c,d,e,f,s;
	while(1){
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
		break;
	}
	else{
		
			d+=12;
			s=(d-a)*3600+(e-b)*60+f-c;
			printf("%d\n",s);
	}
	}
	

	return 0;
}
