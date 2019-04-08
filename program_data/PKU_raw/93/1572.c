
int main()
{
	int n;
	int t=0;
	scanf("%d",&n);
	if (n % 3==0){
		printf("%d",3);
		t++;
	}
    if (n % 5==0){
		if (t){
			printf(" ");
		}
		printf("5");
		t++;
	}
	if (n % 7==0){
        if (t){
			printf(" ");
		}
		printf("%d",7);
		t++;
	}
	if (t==0){
		printf("n");
	}
	printf("\n");

	return 0;
}
