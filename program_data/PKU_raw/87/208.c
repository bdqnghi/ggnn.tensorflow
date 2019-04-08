int main(){
	int a,b,c,d,e,f,s,i;
	int g=0;
	for(i=1;;i++){
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	scanf("\n");
	if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
		break;
	}
	else{
    s=(12+d-a)*3600+(e-b)*60+(f-c);
	printf("%d\n",s);
	}
	}
	return 0;
}

