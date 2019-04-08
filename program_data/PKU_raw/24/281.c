int main()
{
	char a[50][30];
	int k=0, i=0;

	//for(i=0;i<50;i++)
	//{
	//	
	//	if(scanf("%s", &a[i]) <= 0 || strlen(a[i]) == 0)     
	//	{
	//		break;
	//	}
	//	k++;
	//}	

	while(scanf("%s",&a[i])>0 && strlen(a[i])>0)
	{
		k++;
		i++;
	}
	int size[50];
	for(i=0;i<k;i++)
	{
		size[i]=strlen(a[i]);
	}
	int min=30;
	int max=0;
	int imin, imax;
	for(i=0;i<k;i++)
	{
		if(size[i]<min)
		{
			min=size[i];
			imin = i;
		}
		if(size[i]>max)
		{
			max=size[i];
			imax = i;
		}
	}
	/*
	????????max?min???????,????????
	*/
	printf("%s\n", a[imax]);
	printf("%s\n", a[imin]);
	return 0;
}