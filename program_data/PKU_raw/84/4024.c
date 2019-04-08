int main()
{
	int n,ma,mi,x,y;
	int i=1;
	scanf("%d",&y);
	while(i<=y)
	{
		scanf("%d",&n);
		if(i==1){
			ma=n;
		}
		else if(i==2){
			if(n>=ma){
			x=ma;
			ma=n;
			mi=x;
			}else{
				mi=n;
				}
		}
		else if(n>=ma){
			x=ma;
			ma=n;
			mi=x;
		}else if(n>=mi){
			mi=n;
		}
	i++;
	}
	printf("%d\n%d\n",ma,mi);
	return 0;
}