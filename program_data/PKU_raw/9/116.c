struct patient
{
	char name[10];
	int age;
}pat[100];
void main()
{
	int n,i,j=0,k=0,l;
	struct patient b[100];
	struct patient c[100];
	struct patient t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s %d",pat[i].name,&pat[i].age);
    for(i=0;i<n;i++)
	{
		if(pat[i].age<60)  
		{
			  b[j]=pat[i];
		      j++;
		} 
		else
		{
			c[k]=pat[i];
		    k++;
		}
	}
	for(i=0;i<k-1;i++)
		for(l=0;l<k-1-i;l++)
			if(c[l].age<c[l+1].age)
			{
				t=c[l];
				c[l]=c[l+1];
				c[l+1]=t;
			}
	for(i=0;i<k;i++)
		printf("%s\n",c[i].name);
	for(i=0;i<j;i++)
        printf("%s\n",b[i].name);
}