int main()
{
	int n, i=0, j=0, e, f,count=0, num, m, c, d;
    scanf("%d", &n);
	count = 0;
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			scanf("%d", &m);
	          if((m==0)&&(count==0)){
                  c = i;
				  d = j;
				  count = 1;
			  }
			  else if(m==0){
				  e = i;
				  f = j;
			  }
		}
	}
	num = (e - c - 1)*(f - d - 1);
	printf("%d", num);
	return 0;
}