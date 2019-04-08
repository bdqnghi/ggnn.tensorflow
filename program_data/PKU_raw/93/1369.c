int main()
{
	int m;
	scanf("%d",&m);
	int a=(m%3==0),b=(m%5==0),c=(m%7==0);
	if(a==1&&b==1&&c==1) printf("3 5 7");
	else if(a==1&&b==1&&c!=1) printf("3 5");
	else if(a==1&&b!=1&&c==1) printf("3 7");
	else if(a!=1&&b==1&&c==1) printf("5 7");
	else if(a==1&&b!=1&&c!=1) printf("3");
	else if(a!=1&&b==1&&c!=1) printf("5");
	else if(a!=1&&b!=1&&c==1) printf("7");
	else printf("n");
	return 0;
}