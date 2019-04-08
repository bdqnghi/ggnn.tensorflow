void main(int argc, char* argv[])
{
	int num,chi,math,sum;
	struct student{
		int num,chi,math,sum;
	}students[100000];
	int i;
	int STUDENT_NUM;
	scanf("%d",&STUDENT_NUM);
	for (i=0;i<STUDENT_NUM;i++)
	{
		scanf("%d %d %d",&num,&chi,&math);
		students[i].num=num;
		students[i].chi=chi;
		students[i].math=math;
		sum=chi+math;
		students[i].sum=sum;
	}
	int sum1=0,sum2=0,sum3=0;
	int num1,num2,num3;
	for (i=0;i<STUDENT_NUM;i++)
	{
		if(i==0)
		{
			sum1=students[0].sum;
			num1=students[0].num;
		}
		else if(i==1)
		{
			if(students[1].sum>students[0].sum)
			{
				sum2=sum1;
				num2=num1;
				sum1=students[1].sum;
				num1=students[1].num;
			}
			else
			{
				sum2=students[1].sum;
				num2=students[1].num;
			}
		}
		else 
		{
			if(students[i].sum>sum1)
			{
				sum3=sum2;
				num3=num2;
				sum2=sum1;
				num2=num1;
				sum1=students[i].sum;
				num1=students[i].num;
			}
			else if(students[i].sum>sum2)
			{
				sum3=sum2;
				num3=num2;
				sum2=students[i].sum;
				num2=students[i].num;
			}
			else if(students[i].sum>sum3)
			{
				sum3=students[i].sum;
				num3=students[i].num;
			}
		}
	}
	printf("%d %d\n",num1,sum1);
	printf("%d %d\n",num2,sum2);
	printf("%d %d\n",num3,sum3);
}