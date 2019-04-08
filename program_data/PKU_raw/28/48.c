void main()
{
	int n[300],count=0,i=0,j;
	char t;
	while(t=getchar(),t!='\n')
	{
		if(t==' ')
		{
			if(count!=0)
			{
				i++;
				n[i]=count;
				count=0;
			}
			goto next;
		}
		else count++;
next:;
	}
	n[i+1]=count;
	printf("%d",n[1]);
	for(j=2;j<=i+1;j++)
		printf(",%d",n[j]);
}