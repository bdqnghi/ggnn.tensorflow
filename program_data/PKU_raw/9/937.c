struct patient
{
	char id[10];
	int age;
	int turn;
}pat[100],temp;
void main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%d",pat[i].id,&pat[i].age);
		pat[i].turn=i;
	}
	for(i=0;i<n;i++)
	   if(pat[i].age<60)
	   {
	   	j=i+1;
	   	while((pat[j].age<60)&&(j<n))j++;
	   	if(pat[j].age>=60)
	   	{
	   		temp=pat[i];
	   		pat[i]=pat[j];
	   		pat[j]=temp;
	   	}
	   }
    for(i=0;(pat[i].age>=60)&&(i<n);i++)
       for(j=i+1;j<n;j++)
          if((pat[j].age>pat[i].age)||((pat[i].age==pat[j].age)&&(pat[j].turn<pat[i].turn)))
          {
          	temp=pat[i];
          	pat[i]=pat[j];
          	pat[j]=temp;
          }
    for(i=0;i<n;i++)
       if(pat[i].age<60)
       {
       	for(j=i+1;j<n;j++)
       	  if(pat[i].turn>pat[j].turn)
       	  {
       	  	temp=pat[i];
       	  	pat[i]=pat[j];
       	  	pat[j]=temp;
       	  }
       }
    for(i=0;i<n;i++)
       printf("%s\n",pat[i].id);
}