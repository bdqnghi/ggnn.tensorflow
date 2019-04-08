int main()
{
	int n, i=6, j=3, a=2, b, m=0, x=0, y=2;
	scanf("%d", &n);
    for(i=6; i<=n; i++){
		if(i%2==0){
			for(j=3; j<=i/2; j++){
				m = 0;
				for(a=2; a<=(int)sqrt(j); a++){
					if(j%a==0){
						m = 1;
						a = 2*i;
					}
				}
               if(m==0){
				b = i - j;
				x = 0;
				for(y=2; y<=(int)sqrt(b); y++){
					if(b%y==0){
						x = 1;
					    y = 2 * b;
					}
				}
				if(x==0){
					printf("%d=%d+%d\n", i, j, b);
						j = 2 * i;
				}
			   }
			}
		}
	}
	return 0;
}