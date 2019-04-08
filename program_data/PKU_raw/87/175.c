int main(){
	int a,s,d,f,g,h,j;
	int i=0;
	while(1){
		scanf("%d%d%d%d%d%d",&a,&s,&d,&f,&g,&h);
		if(a==0&&s==0&&d==0&&f==0&&g==0&&h==0){
			return 0;
		}else{
			j=(f-a+12)*3600+(g-s)*60+(h-d);
			printf("%d\n",j);
		}
	}	i++;


	return 0;
}