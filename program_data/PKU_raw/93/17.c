void main()
{
	int m,a,b,c,d,i;
	scanf("%d",&m);
	a=m%3; b=m%5; c=m%7;
	if (a==0&&b==0&&c==0) printf("3 5 7\n");
    else if (a!=0&&b==0&&c==0) printf("5 7\n");
	else if (a==0&&b!=0&&c==0) printf("3 7\n");
	else if (a==0&&b==0&&c!=0) printf("3 5\n");
	else if (a!=0&&b!=0&&c==0) printf("7\n");
    else if (a!=0&&b==0&&c!=0) printf("5\n");
	else if (a==0&&b!=0&&c!=0) printf("3\n");
	else printf("n\n");
}