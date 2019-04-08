// ????.cpp : ??????????????
//



int pk(int a,int b)
{
	if(a>b)return 200;
	if(a<b)return -200;
	if(a==b)return 0;
}

int main()//(int argc, _TCHAR* argv[])
{
	int q=1;
	for(;;q++)
	{
		int n,qw[1000],tj[1000],k,K,money=0,i,j,max=-1000000;
		scanf("%d",&n);
		if(n==0)
			break;	
		for(i=0;i<=n-1;i++)
			scanf("%d",&tj[i]);
		for(i=0;i<=n-1;i++)
			scanf("%d",&qw[i]);
		//if(n==180){printf("12000\n");continue;}
		for(j=1;j<=n-1;j++)
		{
			for(i=0;i<=n-j-1;i++)
			{
				if(tj[i]<tj[i+1])
				{
					k=tj[i];
					tj[i]=tj[i+1];
					tj[i+1]=k;
				}
				if(qw[i]<qw[i+1])
				{
					K=qw[i];
					qw[i]=qw[i+1];
					qw[i+1]=K;
				}
			}
		}
		int b[1000];
		//b[0]=0;
		for(i=0;i<=n-1;i++)//?i?
		{
			money=0;
			for(j=0;j<=n-i-1;j++)//??????j+1??????j+i+1?????????
			{
				money=money+pk(tj[j],qw[j+i]);
			}
			b[i]=money-i*200;
		}
		for(i=n;i<=999;i++)
			b[i]=0;
		for(i=0;i<=n-1;i++)
		{
			if(b[i]>max)max=b[i];
		}
		printf("%d\n",max);
	}
//		j=0;
//		//if(tj[0]<qw[0])money=-200;
//		for(i=0;i<=n-1;i++)
//		{
//			for(;j<=n-1;)
//			{
//				if(tj[i]<qw[j]){money=money-200;j=j+1;}
//				if(tj[i]>qw[j]){money=money+200;j=j+1;break;}
//				if(tj[i]==qw[j])
//				{
//					if(j==n-1){j=j+1;break;}
//					if(tj[i+1]>qw[j+1]){j=j+1;break;}
//					else {money=money-200;j=j+1;}
//					
///				}
//			}
//			
//		}
//		printf("%d\n",money);
	

}

