struct person
{
	int age;
	char num[10];

}pat[100],old[100],you[100],exchange;
int main()
{
	int n,i,p,q,result;
	int k=0,t=0;
	int temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",pat[i].num);
		scanf("%d",&pat[i].age);
		if(pat[i].age>=60)
		{
			old[k].age=pat[i].age;
			strcpy(old[k].num,pat[i].num);
			k++;
		}
		else
		{
			strcpy(you[t].num,pat[i].num);
			t++;
		}
	}
	for(p=0;p<k;p++)
	{
		for(q=0;q<k-p;q++)
		{
			if(old[q].age<old[q+1].age)
			{
				exchange.age=old[q].age;
				old[q].age=old[q+1].age;
				old[q+1].age=exchange.age;
				strcpy(exchange.num,old[q].num);
				strcpy(old[q].num,old[q+1].num);
				strcpy(old[q+1].num,exchange.num);
			}
		}
	}
	for(result=0;result<k;result++)
	{
		printf("%s\n",old[result].num);
	}
	for(result=0;result<t;result++)
	{
		printf("%s\n",you[result].num);
	}

	return 0;
}
