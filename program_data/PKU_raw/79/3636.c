
int main()
{
	int count = 0;
	int count1 = 0;
	int m,n;
	int temp;
	int inputcount=0;
	int result[102400];
	scanf("%d",&n);
	scanf("%d",&m);
while(m!=0 && n!=0)
{
        if(m==1)
        {
           result[inputcount] = n;
           inputcount++;
	   scanf("%d",&n);
	   scanf("%d",&m);
           continue;
        }
	int *monkey = (int*)malloc(sizeof(int)*n);
	int *tempmonkey = (int*)malloc(sizeof(int)*n);
	for(count=0; count<n; count++)
		monkey[count]= count+1;
    while(m<n)
	{
		temp = n/m;
        for(count=temp*m;count<n;count++)
			tempmonkey[count-temp*m]=monkey[count];
		for(count=0,count1=0;count<temp*m;count++)
		{
			if((count+1)%m)
			{
				tempmonkey[n-temp*m+count1]=monkey[count];
				count1++;
			}
		}
		n = n-temp;
		for(count=0;count<n;count++)
			monkey[count]=tempmonkey[count];
	}
	while(n>1)
	{
		temp = (m-1)%n+1;
		for(count=temp;count<n;count++)
		  tempmonkey[count-temp] = monkey[count];
		for(count=0;count<temp-1;count++)
		  tempmonkey[n-temp+count]=monkey[count];
        n--;
		for(count=0;count<n;count++)
			monkey[count]=tempmonkey[count];
	}
	result[inputcount]=monkey[0];
    inputcount++;
	scanf("%d",&n);
	scanf("%d",&m);
	free(monkey);
	free(tempmonkey);
}
for(count=0; count<inputcount; count++)
  printf("%d\n",result[count]);
	return 0;
}

