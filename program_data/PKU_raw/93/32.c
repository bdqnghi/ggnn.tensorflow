void main()
{
	int x;
	scanf("%d", &x);
	if (x%(3*5*7)==0) printf("%c%c%c%c%c",'3',' ','5', ' ','7');
		else if (x%(3*5)==0)  printf("%c%c%c", '3',' ','5');
		else if (x%(5*7)==0)  printf("%c%c%c", '5',' ','7');
		else if (x%(3*7)==0)  printf("%c%c%c", '3',' ','7');
		else if (x%3==0)  printf("%c", '3');
		else if (x%5==0)  printf("%c", '5');
		else if (x%7==0)  printf("%c", '7');
		else printf("%c", 'n');
}

