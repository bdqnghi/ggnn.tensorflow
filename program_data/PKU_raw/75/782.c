int main()
{
	int i,j=0,k=0,l,max=0,maxx,min;
	char a[10000],b[10000];
	char a1[1000][100],b1[1000][100];
	int a2[1000],b2[1000],t[1000]={0};
	cin.get(a,10000);
	cin.get();
	cin.get(b,10000);
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]!=',')
		{
			a1[j][k]=a[i];
			k++;
		}
        if(a[i]==',')
        {   
			j++;
			k=0;
		}
	}
	for(i=0;i<=j;i++)
	{
		a2[i]=atoi(a1[i]);
	}
    j=0;
	k=0;
    for(i=0;i<strlen(b);i++)
	{
		if(b[i]!=',')
		{
			b1[j][k]=b[i];
			k++;
		}
        if(b[i]==',')
        {   
			j++;
			k=0;
		}
	}
	for(i=0;i<=j;i++)
	{
		b2[i]=atoi(b1[i]);
	}
	for(i=0;i<1000;i++)
	{
		for(l=0;l<=j;l++)
		{
		   if(i>=a2[l]&&i<b2[l])
		   {
			   t[i]++;
		   }
		}
	}
    min=a2[0];
	maxx=b2[0];
	for(i=0;i<=j;i++)
	{
		if(min>a2[i])
		{
			min=a2[i];
		}
		if(maxx<b2[i])
		{
			maxx=b2[i];
		}
    }
	max=t[0];
	for(i=min;i<=maxx;i++)
	{
		if(max<t[i])
		{
			max=t[i];
		}
	}
	cout<<j+1<<" "<<max;
	return 0;
}
	   


        
    
