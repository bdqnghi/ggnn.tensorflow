void swap(int *i,int *j)
{
	int *p=i,t=*i;
	*p=*j;
	p=j;
	*p=t;
}
struct Student
{
	int id;
	int chinese;
	int math;
};
int main()
{
	void swap(int *i,int *j);
	int n,i,first,second,third,one,two,three;
	int *f=&first,*s=&second,*t=&third,*on=&one,*tw=&two,*th=&three;
	struct Student stu[100000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&stu[i].id,&stu[i].chinese,&stu[i].math);
		int total=stu[i].chinese+stu[i].math,k;
		int *to=&total,*K=&k;
		if(i==0)
		{
			first=total;
			one=i;
		}
		else
		{
			if(i==1)
			{
				if(total>first)
				{
					swap(to,f);
					second=total;
					k=i;
					swap(K,on);
					two=k;
				}
				else
				{
					second=total;
					two=i;
				}
			}
			else
			{
				if(i==2)
				{
					if(total>first)
					{
						swap(to,f);
						swap(to,s);
						third=total;
						k=i;
						swap(K,on);
						swap(K,tw);
						three=k;
					}
					else
					{
						if(total>second&&total<=first)
						{
							swap(to,s);
							third=total;
							k=i;
							swap(K,tw);
							three=k;
						}
						else
						{
							third=total;
							three=i;
						}
					}
				}
				else
				{
					if(total>first)
					{
						swap(to,f);
						swap(to,s);
						swap(to,t);
						k=i;
						swap(K,on);
						swap(K,tw);
						swap(K,th);
					}
					else
					{
						if(total>second)
						{
							swap(to,s);
							swap(to,t);
							k=i;
							swap(K,tw);
							swap(K,th);
						}
						else
						{
							if(total>third)
							{
								swap(to,t);
								k=i;
								swap(K,th);
							}
						}
					}
				}
			}
		}
	}
	printf("%d %d\n",stu[one].id,first);
	printf("%d %d\n",stu[two].id,second);
	printf("%d %d\n",stu[three].id,third);
	return 0;
}	