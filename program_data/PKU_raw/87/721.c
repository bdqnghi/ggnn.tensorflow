int main(){
	int a,b,c,d,e,f,i,shijian[100],n=0,M,N;
	for(i=0;;i++){
		scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		n++;
		if(a==0)
			break;
		M=a*3600+b*60+c;
		N=(12+d)*3600+e*60+f;
		shijian[i]=N-M;
	}
	for(i=0;i<n-1;i++){
		printf("%d\n",shijian[i]);
	}
    return 0;
}
