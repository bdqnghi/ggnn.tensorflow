int main(int argc, char* argv[])
{
	int n,i,y,j,mf,ms,d=0,yue[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d",&n);
	for(i = 0;i<n;i++)
	{
		d=0;yue[1]=28;
		scanf("%d%d%d",&y,&mf,&ms);
		if(((y%4==0)&&(y%100!=0))||(y%400==0)) {yue[1]=29;}
		if(mf>ms)
		{
			for(j=ms-1;j<mf-1;j++)
			{
				d += yue[j];

			}

		}
        else if(mf<ms)
		{
			for(j=mf-1;j<ms-1;j++)
			{
				d += yue[j];

			}

		}
		if(d%7==0) {printf("YES\n");}
		else {printf("NO\n");}
		
	}
	return 0;
}

