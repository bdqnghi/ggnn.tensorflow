
void main()
{
	int a[100010],num,i,j,k,move;
	scanf("%d",&num);
	for (i = 0;i < num;i++)
		scanf("%d",&a[i]);
	scanf("%d",&k);
	move = 0;
	for (i = 0;i < num;i += 1)
	{
		if (a[i] == k)
{
			for (j = i;j < num - 1;j += 1)
				a[j] = a[j + 1];
			i -= 1;
			num -= 1;
		}
	}
	for (i = 0;i < num - 1;i += 1)
		printf("%d ",a[i]);
	printf("%d\n",a[num - 1]);
}
