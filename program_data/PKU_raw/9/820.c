void main()
{
   struct b
   {
	   char id[10];
	   int age;
   };
   int n,i,j,k;
   struct b a[100],temp,c[100];
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%s %d",&a[i].id,&a[i].age);
   for(i=0,j=0;i<n;i++)
	   if(a[i].age>=60)
	   {
		   c[j]=a[i];
		   j++;
	   }
    for(i=j-1;i>=1;i--)
		for(k=j-1;k>j-i-1;k--)
			if(c[k].age>c[k-1].age)
			{
				temp=c[k];
				c[k]=c[k-1];
				c[k-1]=temp;
			}
			for(i=0;i<j;i++)
				printf("%s\n",c[i].id);
   for(i=0;i<n;i++)
	   if(a[i].age<60)
	   printf("%s\n",a[i].id);
}
