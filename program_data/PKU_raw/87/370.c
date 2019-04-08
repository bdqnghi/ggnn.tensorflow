int main()
{
	int a,b,c,d,e,f;
	int i,begin,end,s[100],n;
	for(i=1;1;i++)
	{
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		if((a==0)&&(b==0)&&(c==0)&&(d==0)&&(e==0)&&(f==0))
		{
			break;
		}
		else
		{
				begin=a*3600+b*60+c;
				end=(d+12)*3600+e*60+f;
				s[i]=end-begin;
		}
	}
	n=i;
	for(i=1;i<n;i++)
	{
		printf("%d\n",s[i]);
	}
	return 0;
}
