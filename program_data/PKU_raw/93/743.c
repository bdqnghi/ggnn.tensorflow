int main(int argc, char* argv[])
{   int a,b,c,d;
    b=3;
	c=5;
	d=7;
	scanf("%d",&a);
	if(a%3==0&&a%5==0&&a%7==0){printf("%d %d %d",b,c,d);}
	else if(a%3==0&&a%5==0){printf("%d %d",b,c);}else if(a%3==0&&a%7==0){printf("%d %d",b,d);}else if(a%5==0&&a%7==0){printf("%d %d",c,d);}else if(a%3==0){printf("%d",b);}else if(a%5==0){printf("%d",c);}else if(a%7==0){printf("%d",d);}else{printf("n");}
	return 0;
}

