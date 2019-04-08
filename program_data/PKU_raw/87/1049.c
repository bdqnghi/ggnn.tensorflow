int main()
{
	while(1){
		int a,b,c,d,e,f;
	    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		if(a==0)
			return 0;
		else
			printf("%d\n",3600*(12+d-a)+(e-b)*60+f-c);
	}

	return 0;
}