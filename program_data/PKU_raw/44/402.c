int reverse(int num){
	int nnum;
	int abs;
	if(num<0){
		abs=-num;
	}else{
		abs=num;
	}
	int weishu[20],i=1;
	while(abs!=0){
		weishu[i]=abs%10;
		abs=abs/10;
		i++;
	}
	int nabs=0;
	int j;
	for(j=1;j<i;j++){
		nabs=nabs*10+weishu[j];
	}
	if(num<0){
		nnum=-nabs;
	}else{
		nnum=nabs;
	}
	return nnum;
}
int main()
{
	int sz[6],xsz[6];
	int k;
	for(k=0;k<6;k++){
		scanf("%d",&sz[k]);
		xsz[k]=reverse(sz[k]);
	}
	for(k=0;k<6;k++){
		printf("%d\n",xsz[k]);
	}
	return 0;
}

	


	