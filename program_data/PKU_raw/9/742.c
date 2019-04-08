struct patient
{
	char num[10];
	int  age;
} p[100];

void main()
{
	int i,j=0,k=0,t,l,n;
	char other[100][10],a[10];
	struct patient old[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%s%d",p[i].num,&p[i].age);
   for(i=0;i<n;i++)
	{
		if(p[i].age>=60)
		{
			
		  strcpy(old[j].num,p[i].num);
		  old[j].age=p[i].age;
		  j++;
		}
		else 
		{
			strcpy(other[k],p[i].num);
			k++;
		}
	}
	
	for(i=0;i<j-1;i++)
	{
		for(l=0;l<j-1-i;l++)
		{
			if(old[l].age<old[l+1].age)
			{
				t=old[l].age;
                old[l].age=old[l+1].age;
				old[l+1].age=t;
				
				strcpy(a,old[l].num);
				strcpy(old[l].num,old[l+1].num);
				strcpy(old[l+1].num,a);
			}
		}
	}
	for(i=0;i<j;i++)
	printf("%s\n",old[i].num);
	for(i=0;i<k;i++)
	printf("%s\n",other[i]);
}
			