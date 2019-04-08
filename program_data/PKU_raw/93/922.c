void main()
{
	int i,j=0;
	scanf("%d",&i);
	if(!(i%3)){
		printf("3");
		j++;
	}
	if(!(i%5)){
		if(j)
			printf(" ");
		printf("5");
		j++;
	}
	if(!(i%7)){
		if(j)
			printf(" ");
	    printf("7");
		j++;
	}
	if(!j)
	printf("n");
}