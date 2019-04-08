int main(){
    int a,i,b,c,q,ist,sec;
	scanf("%d",&a);
	i=0;
	scanf("%d%d",&b,&c);
	if(b>c)ist=b,sec=c;
	else ist=c,sec=b;
	while(i<a-2){
		scanf("%d",&q);
		if(q>ist)
		{sec=ist;ist=q;}
		if(q>sec&&q<ist)
		{sec=q;}
		i++;
	}
	printf("%d\n%d",ist,sec);
	return 0;
}

