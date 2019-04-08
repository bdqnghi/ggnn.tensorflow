struct pat
{
      char num[10];
      int age;
}pat[100],str[100],t;
int main()
{

	int n,i,j,a=-1,temp;
	int ch[100];
	char c[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d",pat[i].num,&pat[i].age);
		if(pat[i].age>=60)
		{	
		     a++;
             strcpy(str[a].num,pat[i].num);
			 str[a].age=pat[i].age;
		}
	}
	for(i=a;i>=1;i--)
	{
		for(j=0;j<i;j++)
		{
			if(str[j].age<str[j+1].age)
			{
				t=str[j];
				str[j]=str[j+1];
				str[j+1]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(pat[i].age<60)
		{
			a++;
            str[a]=pat[i];
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s\n",str[i].num);
	}
}
