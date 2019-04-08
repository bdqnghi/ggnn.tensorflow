int main()
{ 
    int a[300],i,j,g,t;
	char b[300];
	for(i=1;;i++)
	{
		scanf("%d",&a[i]);
		scanf("%c",&b[i]);
			if(b[i]!=44)break;
	}
	for(j=1;j<=i;j++)
	{
		for(g=1;g<=i-j;g++)
			if(a[g]>a[g+1])
			{
				t=a[g];a[g]=a[g+1];a[g+1]=t;
			}
	}
	if(a[1]==a[i])printf("No");
	else
	{
		for(j=i;;j--)
		{
			if(a[j-1]!=a[j]){printf("%d",a[j-1]);break;}
		}
	}
	return 0;
}