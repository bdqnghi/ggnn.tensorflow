void main()
{
	char c;
	int a[300],m=0,i=0,j,max,sec=-1;
	while((c=getchar())!='\n')
	{
		if(c==',')
		{
			a[i++]=m;
			m=0;
		}
		else
			m=m*10+c-48;
	}
	a[i++]=m;
	max=a[0];
	for(j=1;j<i;j++)
	{
		if(a[j]>max)
		{
			sec=max;
			max=a[j];
		}
		if((a[j]<max)&&(a[j]>sec))
			sec=a[j];
	}
		if(sec==-1)
			printf("No");
		else
			printf("%d",sec);
}
	
