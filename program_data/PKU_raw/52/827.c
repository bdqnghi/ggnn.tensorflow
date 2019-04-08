


int main()
{
	int *ptr1,*ptr2,i,n,number,a[1000];
	scanf("%d%d",&number,&n);
	for(i = 0; i < number; i++)
	{
		scanf("%d",&a[i]);
	}
	ptr1 = a;
	ptr2 = ptr1 + number - n;
	for(i = 1; i <= n; i++)
	{
		printf("%d ",*ptr2);
		ptr2++;
	}
	for(i = 1; i < (number - n); i++)
	{
		printf("%d ",*ptr1);
		ptr1++;
	}
	printf("%d", *(ptr1));
}
