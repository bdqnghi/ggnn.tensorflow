void main()
{
	char a[20],b[20];
	scanf("%s",a);
	scanf("%s",b);
	int aa,bb,i,j,t,p,q,x,m[58]={ 0 };
	x=0;
	aa=strlen(a);
	bb=strlen(b);
	if(aa==bb)
	{
		for(i=0;i<aa;i++)
		{
			t=0;
			for(j=0;j<aa;j++)
			{
				if(a[i]==b[j])
					t++;
				if(a[j]==a[i])
				{
                    p=a[j]-65;
                    m[p]++;
				}
				if(b[i]==b[j])
				{
					q=b[i]-65;
					m[q]--;
				}
			}
			if(t==0)
				break;
		}
		for(i=0;i<58;i++)
		{
			if(m[i]!=0)
			{
				x++;
			}
		}
		if((t!=0)&&(x==0))
			printf("YES\n");
		else printf("NO\n");
	}
	else printf("NO\n");
}
