void paixu(int a[300],int k)
{
	int i,j,temp,l;
	for (i=k-1;i>=0;i--)
	{
		for (j=0;j<=i;j++)
		{
			if (a[j]<a[j+1])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
}


int main()
{
	int a[300]={0};
	int i,j,k=0,l;
	int num;
	char c;
	i=0;
	do
	{
		scanf("%d",&a[i]);
        i=i+1;
	     c=getchar();
	}while (c != '\n');
    //printf("%d",i);
    paixu (a,i);
	if (i==1) printf("No");
	else 
	{
		for (j=0;j<i-1;j++)
		{
		    if (a[j]!=a[j+1]) k=1;
		}
	    if (k==0) printf("No");
            else 
			{ 
		        for (l=0;l<i;l++)
				{
				          if (a[l]!=a[l+1]) 
						 {
							 printf("%d",a[l+1]);
							 break;
						 }
				}

			}
	}

/*	for (l=0;l<i;l++)
		printf("%d ",a[l]);*/
	return 0;
}