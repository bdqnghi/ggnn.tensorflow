int main()
{
	int a[300],max,sec,i,j;
	char b[300];
	for (i=0;;i++)
	{
		scanf("%d",&a[i]);
		scanf("%c",&b[i]);
		if (b[i]=='\n')
			break;
	}
	max=a[0];
	sec=-1;
	for(j=1;j<=i;j++)
	{
		if(a[j]>max)
		{
			sec=max;
			max=a[j];
		    
		}
		if(a[j]<max&&a[j]>sec)
		{
			sec=a[j];
		}
	}
	if(sec==-1)
		printf("No");
	else
		printf("%d",sec);
	return 0;
}
		
