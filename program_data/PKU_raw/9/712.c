struct patient
{
	char num[10];
	int age;
}a[100];
void main()
{
      int max(int b[],int m);
		int n,i,j=0,c[100],g;
     scanf("%d",&n);
	for (i=0;i<n;i++)
		scanf("%s%d",&a[i].num,&a[i].age);
	for(i=0;i<n;i++)
		c[i]=a[i].age;
 g=max(c,n);
    while (g>=60)
	{         
		     for(i=0;i<n;i++)
			 {if (c[i]==g)
			 {
		     printf("%s\n",a[i].num);
			 c[i]=0;
			 }
			 }
		   g=max(c,n);
			 
	 }
		 for(i=0;i<n;i++)
		 {

			 if (a[i].age<60)
				 printf("%s\n",a[i].num);
		 }
}
int max(int b[],int m)
{
	int t,s;
  s=b[0];
  for(t=0;t<m;t++)
  {
  if (s<b[t])
	  s=b[t];
  }
  return(s);
}