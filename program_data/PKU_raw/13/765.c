int main()
{
	int n;
	scanf("%d",&n);
	int *p,*q,*head;
	p=(int *)calloc(n,sizeof(int));
	head=p;
	for(p=head;p<head+n;p++)
	{
		scanf("%d",p);
	}
	p=head;
	printf("%d",*p);
	p++;
	for(;p<head+n;p++)
	{
		for(q=head;q<p;q++)
		{
			if(*q==*p)
			{
				goto chongfu;
			}
		}
		printf(" %d",*p);
		chongfu:;
	}
	return 0;
}

