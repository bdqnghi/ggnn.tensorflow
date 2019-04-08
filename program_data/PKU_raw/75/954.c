int main()
{
	char c;
	int i=0,j=0,max=0,min=0,a[2000][2],zuich=0,k,m;
	for(m=0;m<2000;m++)
	{
		a[m][0]=0;
a[m][1]=0;
}
    while(c!='\n')
	{scanf("%d",&a[j][0]);
		c=getchar();
	j++;
	}
    for(k=0;k<=j-1;k++)
	{scanf("%d",&a[k][1]);
		if(k!=j)c=getchar();
	}

i=j-1;
	for(j=0;j<1000;j++)
	{int x=0;
		for(k=0;k<i+1;k++)
			if((a[k][0]<=j)&&(a[k][1]>j))
                 x++;
			if(x>=zuich)
				zuich=x;
	}

	printf("%d %d",i+1,zuich);
	return 0;
}
