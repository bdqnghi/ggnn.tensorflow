int main(){
	int a1=1,b1=1,c1=1,a2=1,b2=1,c2=1,s1=1,s2=1;
	while(a1+b1+c1+a2+b2+c2>0){
		scanf("%d %d %d %d %d %d",&a1,&b1,&c1,&a2,&b2,&c2);
		if(a1+b1+c1+a2+b2+c2==0)break;
        s1=a1*3600+b1*60+c1;
        s2=(a2+12)*3600+b2*60+c2;
        printf("%d\n",s2-s1);
	}
	
	return 0;
}
