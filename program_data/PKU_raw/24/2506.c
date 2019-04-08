int main()
{
	int d=0,i=0,num=0,max,imax=0,min,imin=0;
	char a[200][30],c;
	while((c=getchar())!='\n')
	{
		if(d==1&&c!=' '&&c!=',')
			a[i][num++]=c;
		if(d==0&&c!=' '&&c!=',')
		{
			d=1;
			a[i][num++]=c;
		}
		if(d==1&&(c==' '||c==','))
		{
			d=0;
			a[i][num]='\0';
			if(i==0)
			{
				max=num;
				min=num;
			}
			if(num>max)
			{
				max=num;
				imax=i;
			}
			if(num<min)
			{
				min=num;
				imin=i;
			}
			num=0;
			i++;
		}
	}
	if(d==1)
	{
		a[i][num]='\0';
		if(num>max)
		{
			max=num;
			imax=i;
		}
		if(num<min)
		{
			min=num;
			imin=i;
		}
	}
	puts(a[imax]);
	puts(a[imin]);
	return 0;
}