long int cifang(int x, int y)
{
	long int z;
	int i;
	z = 1;
	for(i=0; i<y; i++)
	{
		z = z*x;
	}
	return(z);
}

void main()
{
	int a, b, t, i, mod[50]={0};
	char n[10];
	long int ten;

	scanf("%ld", &a);
	scanf("%s", n);
	scanf("%ld", &b);

	//?a????????
	t = 0;
	ten = 0;
	for(i=0; n[i]!='\0'; i++)
	{
		t++;
	}
	for(i=0; i<t; i++)
	{
		if(n[i]>=48 && n[i]<=57)
		{
			ten = ten + (n[i]-48) * cifang(a, t-i-1);
		}
		else if(n[i]>=65 && n[i]<=90)
		{
			ten = ten + (n[i]-55) * cifang(a, t-i-1);
		}
		else if(n[i]>=97 && n[i]<=122)
		{
			ten = ten + (n[i]-87) * cifang(a, t-i-1);
		}
	}
	//???????b??
	t = 0;
	for(i=0; ; i++)
	{
		t++;
		mod[i] = ten%b;
		ten = (ten-mod[i])/b;
		if(ten==0)
			break;
		else
			continue;
	}

	//??
	for(i=t-1; i>=0; i--)
	{
		if(mod[i]<=9)
			printf("%d", mod[i]);
		else if(mod[i]>9)
			printf("%c", mod[i]+55);
	}
}