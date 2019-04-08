void main()
{
	int a[300],i,j,k,t;
	for(i=0;;i++)
	{   
		scanf("%d",&a[i]);
		if (getchar()=='\n')
		{i++;
		break;}
	}
	//printf("%d\n",i);
	if(i==1)
		printf("No");
	else
	{
		for(j=0;j<(i-1);j++)
		for(k=0;k<(i-1-j);k++)

			if(a[k]>a[k+1])
			{
				t=a[k];a[k]=a[k+1];a[k+1]=t;
			}
//for (j=0;j<i;j++)
//printf("%d\t",a[j]);
     for(k=(i-1);k>0;k--)
	 {
		 if(a[k-1]<a[k])
		 {
			 printf("%d",a[k-1]);
			 break;
		 }
	 }
	 if(k==0)
		 printf("No");
	}
}
