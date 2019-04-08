int main()
{
	int m,n,h,i,j,k,l,length,mark;
	char str[100],x[100];
	gets(str);
	length=strlen(str);
	for(i=2;i<length;i++)
	{
		for(j=0;j<=(length-i);j++)
		{
			m=j;
			for(k=0;k<i;k++,j++)
			{
				x[k]=str[j];
			}
			mark=0;
			if(i%2==0)
			{
				for(l=0;l<(i/2);l++)
				{
					if(x[l]==x[(i-l-1)]) mark=mark+1;
					else break;
				}
				if(mark==(i/2))
				{
					for(h=0;h<i;h++)
					{
						if(h==(i-1)) printf("%c\n",x[h]);
						else printf("%c",x[h]);
					}
				}
			}
			if(i%2!=0)
			{
				for(l=0;l<(i/2);l++)
				{
					if(x[l]==x[(i-l-1)]) mark=mark+1;
					else break;
				}
				if(mark==(i/2))
				{
					for(h=0;h<i;h++)
					{
                        if(h==(i-1)) printf("%c\n",x[h]);
						else printf("%c",x[h]);
					}
				}
			}
			j=m;
		}
	}
	return 0;
}
