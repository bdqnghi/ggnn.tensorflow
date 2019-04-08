void main()
{	int i;
	scanf("%d",&i);

	while (i%3==0&&i%5==0&&i%7==0) {printf("3 5 7");break;}
	while (i%3==0&&i%5==0&&i%7!=0) {printf("3 5"); break;}
	while (i%3!=0&&i%5==0&&i%7==0) {printf("5 7");break;}
	while	(i%3==0&&i%5!=0&&i%7==0) {printf("3 7");break;}
	while	(i%3!=0&&i%5!=0&&i%7==0) {printf("7"); break;}
	while (i%3!=0&&i%5==0&&i%7!=0) {printf("5"); break;}
	while (i%3==0&&i%5!=0&&i%7!=0) {printf("3"); break;}
    if (i%3!=0&&i%5!=0&&i%7!=0) printf("n");

}
