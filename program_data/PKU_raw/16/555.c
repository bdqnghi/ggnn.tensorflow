
int main()
{
	int n,q1,q2,q3,q4,q5,r1,r2,r3,r4,r5;
	scanf("%d",&n);
	q1=n/10;
	r1=n%10;

	if(q1==0)
		printf("%d\n",r1);
	else
	{
		q2=q1/10;
		r2=q1%10;

		if(q2==0)
			printf("%d%d\n",r1,r2);
		else
		{
			q3=q2/10;
			r3=q2%10;

			if(q3==0)
				printf("%d%d%d\n",r1,r2,r3);
			else
			{
				q4=q3/10;
				r4=q3%10;

				if(q4==0)
					printf("%d%d%d%d\n",r1,r2,r3,r4);
				else
				{
					q5=q4/10;
					r5=q4%10;
					printf("%d%d%d%d%d\n",r1,r2,r3,r4,r5);
				}

			}
		}
	}

	return 0;
}

