int main(){
	int a,b,c,d,e,f,k;
	int sum=0;
	while(1){
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
			break;
		}
		k=a;
		if(b<59){
			sum+=(60-c);
			b++;
			sum+=(60-b)*60;
			a++;
		}else{
			sum+=(60-c);
			b=0;
			a++;
		}
		sum=sum+e*60+f;
		d=d+12;
		sum=sum+(d-a)*3600;
		printf("%d\n",sum);
		sum=0;
	}

	
	return 0;
}

