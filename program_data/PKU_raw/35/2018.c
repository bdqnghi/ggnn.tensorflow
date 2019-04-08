
int main()
{
	int flag;
	flag=0;
	int hang,lie;
	scanf("%d,%d",&hang,&lie);

	int i,j;
	int shuzu[100][100]={0};
	for(i=0;i<hang;i++)
	{
		for(j=0;j<lie;j++)
		{
			scanf("%d",&shuzu[i][j]);
		}
	}

	int tiaoxini[100][2]={0};
	int const1,const2,max,min;
	const1=0;
	const2=0;
	for(i=0;i<hang;i++)
	{
		max=0;
		for(j=0;j<lie;j++)
		{
			if(shuzu[i][j]>max)
			{
				max=shuzu[i][j];
				tiaoxini[const1][const2]=i;
				const2++;
				tiaoxini[const1][const2]=j;
				const2--;
			}
		}
		const1++;
	}
	const2=0;
	for(i=0;i<lie;i++)
	{
		min=10000;
		for(j=0;j<hang;j++)
		{
			if(shuzu[j][i]<min)
			{
				min=shuzu[i][j];
				tiaoxini[const1][const2]=j;
				const2++;
				tiaoxini[const1][const2]=i;
				const2--;
			}
		}
		const1++;
	}

	const2=0;
	for(i=0;i<const1;i++)
	{
		for(j=1;j<=const1;j++)
		{
			if(tiaoxini[i][0]==tiaoxini[j][0]&&tiaoxini[i][1]==tiaoxini[j][1])
			{
				printf("%d+%d",tiaoxini[i][0],tiaoxini[i][1]);
				flag++;
				break;
			}
		}
		break;
	}


	if(flag==0)
	{
		printf("No");
	}

	return 0;
}