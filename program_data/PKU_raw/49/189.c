int main()
{
	int i,m=0,x,j,k,p;
	char a[501];
	char b[501];
	gets(a);
	for(p=2;p<=500;p++)
	{
		i=0;
	for(i=0;a[i]!='\0';i++)
	{
		j=0;
		for(k=i;k<=i+p-1;k++)
		{
			b[j]=a[k];
			j++;
		}
		b[j]='\0';
		m=0;
		for(x=0;x<=((p-1)/2);)
		{
			if(b[x]==a[i+p-1-x])
			{
				x++;
			}
			else
			{
				
				m=1;
                break;
			}
		}
		if(m==0)
		{
			puts(b);
		}
	}
	}
	return 0;
}





