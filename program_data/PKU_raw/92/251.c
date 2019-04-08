/*
 * ??-???-1.cpp
 *
 *  Created on: 2011-3-29
 *      Author: user
 */
int compare(const void *element1,const void *element2)
{
	return (*(int *)element2)-(*(int *)element1);
}
int main()
{
	int n;
	int A[1000]={0},B[1000]={0};
	int front1,front2,back1,back2;
	int sum=0;
	while(cin>>n)
	{
		if(n==0)
			return 0;
		for(int i=0;i<n;i++)
			cin>>A[i];
		for(int i=0;i<n;i++)
			cin>>B[i];
		front1=front2=0;
		back1=back2=n-1;
		sum=0;
		qsort(A,n,sizeof(int),compare);
		qsort(B,n,sizeof(int),compare);
		/*for(int i=0;i<n;i++)
			cout<<A[i]<<endl;*/
		while(front1<=back1)
		{
			if(A[back1]>B[back2])
			{
				sum+=200;
				back1-=1;
				back2-=1;
			}
			else if(A[back1]==B[back2])
			{
				if(A[front1]<B[front2])
				{
					back1-=1;
					front2+=1;
					sum-=200;
				}
				else if(A[front1]==B[front2])
				{
					back1-=1;
					front2+=1;
					if(B[front2-1]>A[back1+1])
						sum-=200;
					else
						sum+=0;
				}
				else if(A[front1]>B[front2])
				{
					front1+=1;
					front2+=1;
					sum+=200;
				}
			}
			else if(A[back1]<B[back2])
			{
				sum-=200;
				back1-=1;
				front2+=1;
			}
			//cout<<sum<<endl;
			//cout<<front1<<" "<<back1<<" "<<front2<<" "<<back2<<endl;
		}
		cout<<sum<<endl;
		memset(A,0,sizeof(A));
		memset(B,0,sizeof(B));
	}
}
