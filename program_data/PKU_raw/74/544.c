
void main()
{
	int n, m, i, j, k, l, flag=0, c, sign=0, t, o, d, tip=0, h=0;
	scanf("%d %d", &m, &n);
	for(i=m;i<=n;i++){
		c=i;
		d=sqrt(i);
		for(j=2;j<=d;j++){
			if(i%j != 0){
				flag++;
			}
			else
				break;
		}
		if(flag == (d-1)){
			do
			{
				c/=10;
				sign++;
			}
			while(c != 0);
			for(k=1;k<=(sign/2);k++){
			    t=i;
			    o=i;
			    for(l=1;l<k;l++){
				    t/=10;					
				}			    
			    for(l=1;l<=(sign-k);l++){
				    o/=10;
				}
				if((t%10)==(o%10)){
					tip++;
				}
			}
			if(tip == (sign/2)){
				if(h==0)
					printf("%d", i);
				else
					printf(",%d", i);
				h++;
			}
		}
		flag=0;
		tip=0;
		sign=0;
		/*????????????*/
	}
	if(h == 0)
		printf("no");
}