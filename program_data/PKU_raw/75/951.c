void main()
{
	int x[1010]={0},y[1010]={0},i=0,a=0,k=0,b=0,j,g[1010]={0},max;
	char str1[100000],str2[100000];
	scanf("%s",str1);
	while(str1[i]!='\0')
	{
		if(str1[i]!=',')
		x[a]=str1[i]-'0'+x[a]*10;
		else a++;
		i++;
	}
	i=0;
	scanf("%s",str2);
	while(str2[i]!='\0')
	{
		if(str2[i]!=',')
		y[b]=str2[i]-'0'+y[b]*10;
		else b++;
		i++;
	}
	printf("%d ",a+1);

for(i=0;i<a+1;i++)
    for(j=x[i];j<y[i];j++)
		g[j]++;

  max=g[0];
	for(i=0;i<1010;i++)
   if(g[i]>max)
	   max=g[i];
	printf("%d",max);
}
        
