int main()
{
	int largest=-1,second=-1,a[300],i,counter;
	char b[100];
	for(i=0;i<=299;i++)
	{
		scanf("%d%c",&a[i],&b[i]);
		if(b[i]!=',')
		{
			counter=i+1;
			break;
		}
	}
	for(i=0;i<=counter-1;i++)
	{
		if(a[i]>largest)
		{
			second=largest;
			largest=a[i];
		}
		else if(a[i]==largest);
		else if(a[i]>second)
			second=a[i];
	}
	if(second==largest||second==-1)
		printf("No");
	else
		printf("%d",second);
	return 0;
}
	