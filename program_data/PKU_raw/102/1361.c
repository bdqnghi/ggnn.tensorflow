
int main()
{
	int n,i;
	scanf("%d",&n);
	
	struct student
	{
		char gender[7];
		float h;
	};
	struct student stu[40];
	for(i=0;i<n;i++)
		scanf("%s %f",stu[i].gender,&stu[i].h);
	
	float a[40],b[40]; 
	char m[5]="male";
	int j=0,t=0; 
	for(i=0;i<n;i++)
	{
		if(strcmp(stu[i].gender,m)==0)
		{
			a[j]=stu[i].h;
			j++;
		}
		else
		{
			b[t]=stu[i].h;
			t++;
		}
	}
	
	int k,q	;
	float e; 
	for(i=0;i<j-1;i++)
	{
		k=i;
		for(q=i+1;q<j;q++)
			if(a[k]>a[q])
				k=q;
		e=a[k]; 
		a[k]=a[i];
		a[i]=e;
	} 
	
	for(i=0;i<t-1;i++)
	{
		k=i;
		for(q=i+1;q<t;q++)
			if(b[k]<b[q])
				k=q;
		e=b[k]; 
		b[k]=b[i];
		b[i]=e;
	}
	
	for(i=0;i<j;i++)
		printf("%.2f ",a[i]);
	for(i=0;i<t-1;i++)
		printf("%.2f ",b[i]);
	printf("%.2f",b[t-1]);
	 
	return 0;
}