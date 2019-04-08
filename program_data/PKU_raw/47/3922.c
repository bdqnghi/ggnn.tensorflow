
int main()
{
	int a,b[100],i;
	scanf("%d",&a);
	for(i=a;i>0;i--)
	{
		scanf("%d",&(b[i-1]));
	}
	for(i=0;i<a;i++)
	{
		switch(a-1-i)
		{
		case 0:
			printf("%d",b[i]);
			break;
		default:
			printf("%d ",b[i]);
			break;
		}
	}
	return 0;
}