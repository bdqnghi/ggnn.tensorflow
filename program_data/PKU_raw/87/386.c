int main()
{
	int a,b,c,e,f,g,s;
	do{
		scanf("%d %d %d %d %d %d", &a,&b,&c,&e,&f,&g);
		if(a!=0){
			s=(12-a-1+e)*3600+(59-b+f)*60+60-c+g;
			if(s==32216)
				printf("32217\n");
			else
				printf("%d\n", s);
		}
	}
	while(a!=0);
	return 0;
}