void main()
{
	int i,j,k=0,n,t,b[100][2];
	char x,y,a[100];
	gets(a);
	n=strlen(a);
	x=a[0];
	for(i=1;;i++)
		if(a[i]!=x){y=a[i];break;}
		while(k<n/2)
	for(i=0;i<n;i++)
	{if(a[i]=='2')continue;
		for(j=i+1;a[j]=='2';j++);
		if(a[j]==a[i])continue;
		if(a[j]==y)
		{b[k][0]=i;b[k][1]=j;k++;
		a[i]='2';a[j]='2';}}
	for(i=0;i<n/2-1;i++)
		for(j=0;j<n/2-1-i;j++)
			if(b[j][1]>b[j+1][1])
			{t=b[j+1][1];b[j+1][1]=b[j][1];b[j][1]=t;
			t=b[j+1][0];b[j+1][0]=b[j][0];b[j][0]=t;}
	for(i=0;i<n/2;i++)
		printf("%d %d\n",b[i][0],b[i][1]);

}