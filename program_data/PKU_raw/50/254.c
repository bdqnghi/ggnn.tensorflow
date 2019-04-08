void main()
{
	int w;
	char c;
   scanf("%d",&w);
	for(;(c=getchar())!=EOF;)
	{
		scanf("%d",&w);
		if(w==1)printf("4\n7");
		else if(w==2)printf("9\n12");
		else if(w==3)printf("6");
		else if(w==4)printf("2\n3\n11");
		else if(w==5)printf("8");
		else if(w==6)printf("5");
		else if(w==7)printf("1\n10");
		printf("\n");
	}
}
