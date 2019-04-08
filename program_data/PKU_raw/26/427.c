main()
{
	char a[1000],*b;
	gets(a);
	for (b = a;*b != 0;b++)
		if(!(*b == ' ' && *(b - 1) == ' '))
			printf("%c",*b);
	printf("\n");
	getchar();
}
