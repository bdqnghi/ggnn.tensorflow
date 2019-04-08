int main(){
	int a,b,c,d,e,f,i,j,k,m;
	for(m=0;m<100;m++){
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	if(a!=0||b!=0||c!=0||d!=0||e!=0||f!=0){
      i=a*60*60+b*60+c;
	  j=(12+d)*3600+e*60+f;
	  k=j-i;
	  printf("%d\n",k);
	}
	}
	return 0;
}