
int tj[1000],qw[1000];

int main(){
	//freopen("data.txt","r",stdin);
	int n,i,j,w,win,c;
	while(scanf("%d",&n)&&n)
	{
		for(i=0;i<n;i++)
			scanf("%d",tj+i);
		for(i=0;i<n;i++)
			scanf("%d",qw+i);
		sort(tj,tj+n);
		sort(qw,qw+n);
		win=0;
		for(j=w=0;j<n;j++)
		{
			if(tj[j]>qw[w])
			{
				w++;
				win++;
			}
			else if(w==0)
			{
				if(tj[j]==qw[w])
					w++;
				else
					win--;
			}
			else
			{
				c=-1;
				for(i=1;w-i>=0;i++)
					if(qw[w-i]==tj[j-i]&&qw[w-i]<tj[j-i+1])
						c++;
				if(tj[j]==qw[w]&&c<=0)
					w++;
				else
					win+=c;
			}
		}
//		win-=n-w;
		printf("%d\n",win*200);
	}
	return 0;
}
