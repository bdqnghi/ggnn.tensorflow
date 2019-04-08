int main(){
	int a,b,c,d,e,f,j,p;
    for(j=0;j<1000;j++){
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		if(a==b&&b==c&&c==d&&d==e&&e==f&&f==0){
			return 0;}
		else{p=0;
    p=3600*(12-a-1+d)+60*(60-b-1+e)+60-c+f;
		printf("%d\n",p);}
	}
return 0;
}