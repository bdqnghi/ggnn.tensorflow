
int main()

{
	int n,a,b,c,t;
	scanf("%d",&n);
	a=n%3;
	b=n%5;
	c=n%7;
	if(a==0&&b==0&&c==0)
		t=1;
	if(a!=0&&b==0&&c==0)
		t=2;
	if(a==0&&b!=0&&c==0)
		t=3;
	if(a==0&&b==0&&c!=0)
		t=4;
	if(a!=0&&b!=0&&c==0)
		t=5;
	if(a!=0&&b==0&&c!=0)
		t=6;
	if(a==0&&b!=0&&c!=0)
		t=7;
	if(a!=0&&b!=0&&c!=0)
		t=8;
	switch(t)
	{
	case 1:
		printf("3 5 7\n");
		break;
	case 2:
		printf("5 7\n");
		break;
	case 3:
		printf("3 7\n");
		break;
	case 4:
		printf("3 5\n");
		break;
	case 5:
		printf("7\n");
	    break;
	case 6:
		printf("5\n");
		break;
	case 7:
		printf("3\n");
		break;
	case 8:
		printf("n\n");
	}
	return 0;

	
}