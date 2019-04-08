
int main()
{
    int n, k=0, s, i;
	scanf("%d", &n);
	s=n;
	while(s>0)
	{
		s/=10;
		k++;
	}
	for(i=0;i<k;i++)
	{
        int t=0;
		t=n%10;
		printf("%d", t);
		n/=10;
	}
	return 0;

}

