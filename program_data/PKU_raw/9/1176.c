typedef struct {
	char id[20];
	int age;
} patient;
int main()
{
	patient a[100],b[100],c[100],temp;
	int n,i,j,k=0,l=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d",a[i].id,&a[i].age);
		if(a[i].age>=60) 
		{for(j=0;j<20;j++)
		 {b[k].id[j]=a[i].id[j];
		 b[k].age=a[i].age;}k++;}
	    else {for(j=0;j<20;j++)
		{c[l].id[j]=a[i].id[j];}l++;}
	}
	for(i=k-1;i>0;i--)
	 {
 		for(j=0;j<i;j++)
 		{
		 	if(b[j].age<b[j+1].age)
		 	{
	 		    temp=b[j];
	 		    b[j]=b[j+1];
	 		    b[j+1]=temp;
 			}
	    }
 	}
 	for(i=0;i<k;i++)
	 printf("%s\n",b[i].id);
    for(i=0;i<l;i++)
      printf("%s\n",c[i].id);
}