int main()
{
    int n;
	scanf("%d", &n);
	if ((n%3==0)&&(n%5==0)&&(n%7==0)){
		printf("%d %d %d", 3, 5, 7);
	}
	else if((n%3==0)&&(n%5==0)&&(n%7!=0)){
        printf("%d %d", 3, 5);
	}
	else if((n%3!=0)&&(n%5==0)&&(n%7==0)){
        printf("%d %d", 5, 7);
	}
	else if((n%3==0)&&(n%5!=0)&&(n%7==0)){
        printf("%d %d", 3, 7);
	}
	else if((n%3==0)&&(n%5!=0)&&(n%7!=0)){
        printf("%d", 3);
	}
	else if((n%3!=0)&&(n%5==0)&&(n%7!=0)){
        printf("%d", 5);
	}
	else if((n%3!=0)&&(n%5!=0)&&(n%7==0)){
		printf("%d", 7);
	}
	else {
        printf("n");
	}
	return 0;
}
