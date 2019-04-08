int prime(int n){
	int s,a=1,c,i;
	s=(int)sqrt(n)+1;
	if(n==3||n==5||n==7)
	    a=3;
	else{
		for(i=2;i<s;i++){
			c=n%i;
			if(c==0){
				a=2;
				break;
			}
			else
				a=3;
		}
	}
	return a;
}
int main()
{
	int n,m,o;
	int i,j;
	scanf("%d",&n);
	
	if(n==6)
		printf("6=3+3");
	else{
	    for(i=6;i<(n+1);i+=2){
		    for(j=3;j<(n/2+1);j+=2){
			    m=prime(j);
                o=prime(i-j);
				if((m+o)==6){
					printf("%d=%d+%d\n",i,j,i-j);
                    break;
				}
			}
		}
	}
	return 0;
}