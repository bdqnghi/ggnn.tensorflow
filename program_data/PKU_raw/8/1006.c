int a[MAX],b[MAX],al,bl;

void input()
{
	int i;
	scanf("%d %d\n",&al,&bl);
	for(i=0;i<al;i++)
		scanf("%d",&a[i]);
	for(i=0;i<bl;i++)
		scanf("%d",&b[i]);

}

void Qsort(int start,int length,int a[])
{
	int x = a[start];
	int i,j;
	i = start;
	j = length -1;
	while(i < j)
	{
		if(x < a[j])	
			j--;
		else if(x > a[j])
		{
			a[i] = a[j];
			a[j] = x; 
			i++;
		}
		else if(x < a[i])
		{
			a[j] = a[i];
			a[i] = x;
			j--;
		}
		else
			i++;
	}
	if(start < length-1)
	{
		Qsort(start,i,a);
		Qsort(i+1,length,a);
	}
}

void sort()
{
	Qsort(0,al,a);
	Qsort(0,bl,b);
}

void combine()
{
	int i;
	for(i=0;i<bl;i++)
		a[i+al]=b[i];
}

void output()
{
	int i;
	for(i=0;i<bl+al-1;i++)
		printf("%d ",a[i]);
printf("%d",a[i]);


}
//????????????main??????????????????
void main()
{
	input();
	sort();
	combine();
	output();

}

