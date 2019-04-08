void main()
{
	struct patient
	{
	char ID[10];
	int age;
	};
	struct patient pat[100];
	int n,i,j,huan;
	char string[10];
	scanf("%d",&n);
		for(i=0;i<n;i++)
		{
		scanf("%s %d",pat[i].ID,&pat[i].age);
		}

		for(i=0;i<n;i++)
		{
		  if(pat[i].age>=60)
		  {	
            for(j=i;j>0;j--)
			{
			 if(pat[j].age>pat[j-1].age)
			 {
				 huan=pat[j].age;
			     pat[j].age=pat[j-1].age;
				 pat[j-1].age=huan;
			 strcpy(string,pat[j].ID);
			  strcpy(pat[j].ID,pat[j-1].ID);
			   strcpy(pat[j-1].ID,string);
			 }
			}
		  }
		}
		for(i=0;i<n;i++)
			printf("%s\n",pat[i].ID);

}

