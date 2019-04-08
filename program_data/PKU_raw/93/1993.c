void main()
{
	int k;
	scanf("%d",&k);
if(k%3==0&&k%5==0&&k%7==0)
printf("3 5 7");
else if(k%3==0&&k%5==0)
printf("3 5");
else if(k%3==0&&k%7==0)
printf("3 7");
else if(k%5==0&&k%7==0)
printf("5 7");
else if(k%3==0)
printf("3");
else if(k%5==0)
printf("5");
else if(k%7==0)
printf("7");
else
printf("n");
}
