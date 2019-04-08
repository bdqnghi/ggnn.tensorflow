
int main(int argc, char* argv[])
{
	int n,i,j,a,b,c,m;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&a,&b,&c);
			if(b>c){
				int x;
				x=b;
				b=c;
				c=x;
			}
			if(a%400==0)
			{
				m=0;
			}
			else if(a%100==0&&a%400!=0)
			{				
				m=1;
			}			
			else if(a%100!=0&&a%4==0)
			{
				m=0;
			}
			else if(a%4!=0)
			{
				m=1;
			}
			int d=0;
			if(m==0)
			{
				int f[12]={31,29,31,30,31,30,31,31,30,31,30,31};
				for(j=(b-1);j<(c-1);j++)
				{
					d+=f[j];
				}
				
			}

	        else if(m==1)
			{
				int f[12]={31,28,31,30,31,30,31,31,30,31,30,31};
				for(j=(b-1);j<(c-1);j++)
				{
					d+=f[j];
				}
			}
			if(d%7==0)
			{
				printf("YES\n");
			}
			else if(d%7!=0)
			{
				printf("NO\n");
			}
	}
	return 0;	



}
