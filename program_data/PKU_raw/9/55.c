
struct bing
{
	char  id[10];
	int  age;
};

void main()
{
   struct bing  peo[120],old[120],young[120],temp;
   int i,j,n,num1=0,num2=0;

    scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s%d",peo[i].id,&peo[i].age);

	for(i=0;i<n;i++)
	{
		if(peo[i].age>=60)
		{
			old[num1]=peo[i];
			num1=num1+1;
		}
		else
		{
			young[num2]=peo[i];
			num2=num2+1;
		}
	}

	for(i=0;i<num1-1;i++)
		for(j=0;j<num1-i-1;j++)
		{
			if(old[j].age<old[j+1].age)
			{
				temp=old[j];
				old[j]=old[j+1];
				old[j+1]=temp;
			}
		}
	 
	for(i=0;i<num1;i++)
		printf("%s\n",old[i].id);
	for(i=0;i<num2;i++)
		printf("%s\n",young[i].id);

}