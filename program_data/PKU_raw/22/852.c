int main()
{
	int a[300]={0},i=0,t=0,fir=0,sec=0;
	char c;
	while((c=getchar())!='\n')
	{
		if(c==',') i++;
		else
		{
			a[i]*=10;
			a[i]+=(c-'0');
		}
	}
	t=i+1;
	fir=a[0];
	if(t==1) printf("No");
	else
	{
		for(i=1;i<t;i++)
		{
			if(a[i]>fir)
			{sec=fir;fir=a[i];}
			else if(a[i]<fir&&a[i]>sec)
			sec=a[i];
		}
		if(sec==0) printf("No");
		else printf("%d",sec);
	}
	return 0;
}