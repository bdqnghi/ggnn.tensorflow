int main()
{
	int a,b,c;
	scanf("%d",&a);
	b=0;
	c=a%3;
	if(c==0) b++;
	c=a%5;
	if(c==0) b=b+2;
	c=a%7;
	if(c==0) b=b+4;
	switch(b)
	{
	case 7:printf("3 5 7");break;
	case 6:printf("5 7");break;
	case 5:printf("3 7");break;
	case 4:printf("7");break;
	case 3:printf("3 5");break;
	case 2:printf("5");break;
	case 1:printf("3");break;
	case 0:printf("n");break;
	}

}
