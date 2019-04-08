/*?????????*/
void main()
{
	int n,a,b,c;
	a=0;b=0;c=0;
	scanf("%d",&n);
	if (n%3==0) a=1;
	if (n%5==0) b=1;
	if (n%7==0) c=1;
	if(a==1)
		if(b==1)
			if(c==1)
				printf("3 5 7");
			else printf("3 5");
		else
			if(c==1)
				printf("3 7");
			else printf("3");
	else
		if(b==1)
			if(c==1)
				printf("5 7");
			else printf("5");
		else
			if(c==1)
				printf("7");
			else printf("n");
}
		

