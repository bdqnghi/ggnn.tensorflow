int main(int argc, char* argv[])
{
	int n1,n2,j=1,k=1,a[1000],b[1000],i=1,m=1,number,break1;
	scanf("%d%d",&n1,&n2);
	if (n1==1||n2==1)
		printf("1\n");
	else
	{
		a[0]=n1;
	    b[0]=n2;
		while(n1>1)
		{
		if (n1%2==0)
		{	
			n1=n1/2;
		    a[i]=n1;
			i++;
		}
		else {n1=(n1-1)/2;a[i]=n1;i++;}
		j++;
		}
		while(n2>1)
		{
		if (n2%2==0)
		{	
			n2=n2/2;
		    b[m]=n2;
			m++;
		}
		else {n2=(n2-1)/2;b[m]=n2;m++;}
		k++;
		}
		for (i=0;i<j;i++)
		{
			for (m=0;m<k;m++)
			{
				if (a[i]==b[m])
				{
					number=a[i];
				break1=0;
				break;
				}
			}
               if (break1==0)
					break;
		}
				printf("%d",number);
	}
	return 0;
}

