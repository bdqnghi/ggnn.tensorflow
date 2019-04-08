int hanshu(int number)
{ 
	int m;
	if(number==1)
		return number;
	else
	{
	    if(number%2!=0)
		{
           m=number*3+1;
		   printf("%d*3+1=%d\n",number,m);
		}
	    else if(number%2==0)
		{
		   m=number/2;
	       printf("%d/2=%d\n",number,m);
		}
	}
	return hanshu(m);
}
int main()
{
    int a;
	scanf("%d",&a);
	if(a==1)
		printf("End\n");
	else if(hanshu(a)==1)
        printf("End\n");
	return 0;
}
		