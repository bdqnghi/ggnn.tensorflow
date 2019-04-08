void main()
{
	int i,a=0,b=0,c=0;
	scanf("%d",&i);
	if(i%3==0) a=1;
	if(i%5==0) b=1;
	if(i%7==0) c=1;
	if(a&&b&&c) printf("3 5 7");
	if(a&&b&&!c) printf("3 5");
	if(a&&c&&!b) printf("3 7");
	if(!a&&b&&c) printf("5 7");
	if(a&&!b&&!c) printf("3");
	if(!a&&b&&!c) printf("5");
	if(!a&&!b&&c) printf("7");
	if(!a&&!b&&!c) printf("n");
}
