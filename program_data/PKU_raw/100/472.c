
int main(int argc, char* argv[])
{
	char a[300];
	scanf("%s",a);
	int i;
	int j=0;
	char d[300];
	for(i=0;i<strlen(a);i++)
	{
			
		if(a[i]>96&&a[i]<123)
		{
			d[j]=a[i];
			j++;
		}
	}
	int m,n;
	char c;
    for(m=0;m<j;m++)
	{
		for(n=m+1;n<j;n++)
		{
			if(d[n]<d[m])
			 {
			    c=d[m];
			   	d[m]=d[n];
			    d[n]=c;
			  }
		} 
	}
	if(j==0)
	{
		printf("No\n");
	}
	else 
	{
		int k;
		int num[100]={0},n;
		for(k=0;k<j;k++)
		{	
			for(n=0;n<strlen(a);n++)
			{
				if(a[n]==d[k])
				{
					num[k]++;
				}
			}
		}
		int m;
		printf("%c=%d\n",d[0],num[0]);
		for(m=1;m<j;m++)
		{
			if(d[m]!=d[m-1])
			{
			    printf("%c=%d\n",d[m],num[m]);
			}
		}
	}
	return 0;
}

