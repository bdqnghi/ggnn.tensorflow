int main()
{
	int a,b=3,c=5,d=7;
	scanf("%d",&a);
    if(a%b==0&&a%c==0&&a%d==0)
		printf("%d %d %d",b,c,d);
	else if(a%b==0&&a%c==0&&a%d!=0)
        printf("%d %d",b,c);
	else if(a%b==0&&a%d==0&&a%c!=0)
        printf("%d %d",b,d);
	else if(a%c==0&&a%d==0&&a%b!=0)
        printf("%d %d",c,d);
	else if(a%b==0&&a%c!=0&&a%d!=0)
		printf("%d",b);
    else if(a%c==0&&a%d!=0&&a%b!=0)
		printf("%d",c);
	else if(a%d==0&&a%c!=0&&a%b!=0)
		printf("%d",d);
	else 
	printf("n");
	return 0;
}

