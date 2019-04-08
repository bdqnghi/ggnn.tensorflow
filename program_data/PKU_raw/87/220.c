int main(){
	int m,a,b,c,d,e,f;
    	do{
		scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		if(a+b+c+d+e+f!=0){   
		m=(d+12-a)*3600+(e-b)*60+f-c;
		printf("%d\n",m);
		}
		if(a+b+c+d+e+f==0){
			continue;
		}
		}

		while(a+b+c+d+e+f!=0);
				
		return 0;
}
