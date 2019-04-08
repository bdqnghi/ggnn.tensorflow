
int main()
{
	int i,j=0,t,shang,yu,temp=0;
	char mult1[len];	
	scanf("%s",mult1);
	int len1 = strlen(mult1);
	int *c1 = (int *)malloc(sizeof(int)*len1);
	for(i=0; i<len1; i++)
	c1[i]=(int)mult1[i]-48;
	int *result = (int *)malloc(sizeof(int)*(len1));
	if((len1==2&&c1[len1-2]==1&&c1[len1-1]<3)||len1==1)
	{
		printf("0\n");
		if(len1==2)
		printf("%d",c1[len1-1]+c1[len1-2]*10);
		else
		printf("%d",c1[len1-1]);	
	}
	else
	{
		for(i=0;i<len1-1;i++)
		{
			t=(c1[i]*10+c1[i+1]);
			shang=t/13;
			result[j]=shang;
			j++;
			yu=t%13;
			c1[i+1]=yu;	
			
		}
		if(result[0]!=0)
		{
			for(i=0;i<len1-1;i++) 
			printf("%d",result[i]);
		}
		else
		{
			for(i=1;i<len1-1;i++) 
			printf("%d",result[i]);	
		}
		printf("\n");
		printf("%d",yu);
	} 
	free(c1);
	free(result);
	return 0;
} 
