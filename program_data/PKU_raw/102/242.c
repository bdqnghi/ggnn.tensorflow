
void main()
{

	int male=0,female=0,n,i,j;
	char cn,m,f;
	char exam1[]="mmm",exam2[]="fff";

    float an[40],bn[40],high,temp1;
    char temp[6];
	m=exam1[0];
	f=exam2[0];
	scanf("%d",&n);
    for(i=0;i<n;i++)
	{
        scanf("%s %f",&temp,&high);
			cn=temp[0];
		if(cn==m)
		{
			an[male]=high;
             male=male+1;
			 

		}
         if(cn==f)
		 {
			 bn[female]=high;
			 female=female+1;
		 }

	}

	for(i=0;i<female;i++)
	{
	 for(j=0;j<female-i-1;j++)
	 {
       if(bn[j]<bn[j+1])
	   {
          temp1=bn[j];
		  bn[j]=bn[j+1];
		  bn[j+1]=temp1;

	   }
	 }
	}

	for(i=0;i<male;i++)
	{
	 for(j=0;j<male-i-1;j++)
	 {
       if(an[j]>an[j+1])
	   {
          temp1=an[j];
		  an[j]=an[j+1];
		  an[j+1]=temp1;

	   }
	 }
	}

for(i=0;i<male;i++)
{
    printf("%.2f",an[i]);
	printf(" ");
}
for(i=0;i<female-1;i++)

{
	printf("%.2f",bn[i]);
	printf(" ");
}
printf("%.2f",bn[female-1]);


	

}