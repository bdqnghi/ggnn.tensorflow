int main()
{
	int resulta=0;
	int resultb=0;
	int num;
	int n;
	int i=1;
	scanf("%d",&n);
	while (i<=n){
	scanf("%d",&num);
	if (i==1){
	resulta=num;
	}else{
		if(num>resulta){
	resultb=resulta;
	resulta=num;
		}
		else {if(num<resulta&&num>resultb){
			resultb=num;}}
	}
	i++;
	}
	printf("%d\n",resulta);
	printf("%d\n",resultb);


}