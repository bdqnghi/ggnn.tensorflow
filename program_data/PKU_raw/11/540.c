void main()
{
	int a,b,c,n;
	scanf("%d%d%d",&a,&b,&c);
	int one[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int another[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int i;
	int m=0;
	if(a%4==0&&a%100!=0||a%400==0){
	      for(i=0;i<(b-1);i++){
			  m=m+one[i];
		  }
		  n=m+c;
    }
	else{
		for(i=0;i<(b-1);i++){
			m=m+another[i];
		}
		n=m+c;
	}
	printf("%d\n",n);
}








