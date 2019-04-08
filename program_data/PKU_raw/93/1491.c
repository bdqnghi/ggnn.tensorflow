int main()
{
	int n;
	scanf("%d",&n);
	    if(n%105==0){printf("3 5 7");return 0;}

		if(n%15==0){printf("3 5");return 0;}
	    if(n%21==0){printf("3 7");return 0;}
	    if(n%35==0){printf("5 7");return 0;}
		if (n%3==0){printf("3");return 0;}
		if (n%5==0){printf("5");return 0;}
		if (n%7==0){printf("7");return 0;}
	    if(n%3!=0&&n%5!=0&&n%7!=0){printf("n");return 0;}

}