int main()
{
	char a[500];
	char *p;
	int n=1;
	int num[50];
	int max,min,max1,max2,min1,min2,i;
	gets(a);
	for(p=a;*p!='\0';p++)
	{
		if(*p==' ')
		{
			num[n]=p-a;
			n++;
		}
	}
	num[0]=-1;
	num[n]=strlen(a);
	max=num[1]-num[0];
	min=num[1]-num[0];
	max1=num[0];
	max2=num[1];
	min1=num[0];
	min2=num[1];
	for(i=1;i<n;i++)
	{
		if(num[i+1]-num[i]>max)
		{
			max1=num[i];
			max2=num[i+1];
			max=max2-max1;
		}
		if(num[i+1]-num[i]<min)
		{
			min1=num[i];
			min2=num[i+1];
			min=min2-min1;
		}
	}
	for(p=a+max1+1;p<a+max2;p++)
		printf("%c",*p);
	printf("\n");
	for(p=a+min1+1;p<a+min2;p++)
		printf("%c",*p);
	printf("\n");
	return 0;
}