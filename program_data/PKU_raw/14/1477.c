
int main()
{
	int n,i,k;
	int a[99999][3],s[99999];
	int fir=0,sec=0,thi=0;
    int c=0,d=0,e=0;

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(k=0;k<3;k++)
		{
			scanf("%d",&a[i][k]);
		}
			s[i]=a[i][1]+a[i][2];
	}

	          for(i=0;i<n;i++)
			  {
		            if(s[i]>fir)
					{
						thi=sec;
						sec=fir;
						fir=s[i];
						e=d;
						d=c;
						c=i;
					continue;
					}
				    if(s[i]>sec && s[i]<=fir)
					{
						thi=sec;
					
						sec=s[i];
				        e=d;
					    d=i;
						continue;
					}
				   if(s[i]>thi && s[i]<=sec)
					{
						thi=s[i];
						e=i;
					
					}
				 
			  }
		
	printf("%d %d\n",a[c][0],fir);
	printf("%d %d\n",a[d][0],sec);
	printf("%d %d\n",a[e][0],thi);
	return 0;
}

