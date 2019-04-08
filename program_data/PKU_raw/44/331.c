
int i,num,wei;

int reverse(int x);
void main()
{
	for(i=1;i<=N;i++)
	{
		scanf("%d",&num);
		printf("%d\n",reverse(num));
	}
}

int reverse(int x)
{
	int j,a[5]={0},t;
	if(x==0) return 0;
	else
		if(x>0)
		{
			wei=5;
			t=0;
			a[4]=x%10;
			a[0]=(x-x%10000)/10000;
			a[1]=(x-x%1000)/1000-10*a[0];
			a[2]=(x-x%100)/100-100*a[0]-10*a[1];
			a[3]=(x-a[4])/10-1000*a[0]-100*a[1]-10*a[2];//?????????
			for(j=0;j<5;j++)
			{
				if(a[j]==0) wei--;//????
				else break;
			}
			for(j=4;j>=0;j--)
			{
				wei--;
				t=t+a[j]*(int)pow(10,wei);
				if(wei==0) break;
			}
			return t;
		}
		else
		{
			wei=5;
			t=0;
			x=-x;
			a[4]=x%10;
			a[0]=(x-x%10000)/10000;
			a[1]=(x-x%1000)/1000-10*a[0];                                                                                                                       
			a[2]=(x-x%100)/100-100*a[0]-10*a[1];
			a[3]=(x-a[4])/10-1000*a[0]-100*a[1]-10*a[2];//?????????
			for(j=0;j<5;j++)
			{
				if(a[j]==0) wei--;//????
				else break;
			}
			for(j=4;j>=0;j--)
			{
				wei--;
				t=t+a[j]*(int)pow(10,wei);
				if(wei==0) break;
			}
			return -t;
		}
}



			
