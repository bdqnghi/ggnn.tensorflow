int main()
{
	int day[11]={31,28,31,30,31,30,31,31,30,31,30};
	int w,i;
	scanf("%d",&w);
	w+=5;
	if(w>7)
		w-=7;
	if(w==5)
		printf("1\n");
	for(i=0;i<11;i++)
	{
		w+=day[i]%7;
		if(w>7)
			w-=7;
		if(w==5)
			printf("%d\n",i+2);
	}
	return 0;
}