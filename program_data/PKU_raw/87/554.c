int main(){
	int a,b,c,d,e,f;
	int time;
	while(1){
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
		break;
	}else{
	
	time=12*60*60-a*60*60-b*60-c+d*60*60+e*60+f;
	printf("%d\n",time);
	}
	}

	
	return 0;
}


