
char sex[50][7];
float tall[50];
float sort1[50]={0};
float sort2[50]={0};
char m[7]="male";
char f[7]="female";

void x(float s[50],int n)
{
	int i,j;
	float tmp;
	for(i=n-1;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(s[j]>s[j+1])
			{
				tmp=s[j];
				s[j]=s[j+1];
				s[j+1]=tmp;
			}
		}
	}
}

void x1(float s[50],int n)
{
	int i,j;
	float tmp;
	for(i=n-1;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(s[j]<s[j+1])
			{
				tmp=s[j];
				s[j]=s[j+1];
				s[j+1]=tmp;
			}
		}
	}
}

int main()
{
	int N,count;
	int i=0;
	int j=0;
	scanf("%d",&N);
	count = N;
	while(N--)
	{
		scanf("%s",sex[i]);
		scanf("%f",&tall[i]);
		i++;
	}

	for(i=0,j=0;i<count;i++)
	{
		if(!strcmp(sex[i],"male"))
		{
			sort1[j]=tall[i];
			j++;
		}	
	}

	x(sort1,j);

	for(i=0;i<j;i++)
	{
		printf("%.2f ",sort1[i]);
	}

	for(i=0,j=0;i<count;i++)
	{
		if(!strcmp(sex[i],"female"))
		{
			sort2[j]=tall[i];
			j++;
		}	
	}

	x1(sort2,j);

	for(i=0;i<j-1;i++)
	{
		printf("%.2f ",sort2[i]);
	}
    printf("%.2f",sort2[j-1]);
	printf("\n");
	return 0;
}