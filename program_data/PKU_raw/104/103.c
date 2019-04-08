void main()
{
	int a[20],b[20]={0},x,y,i,j,a0,b0,ia,jb,word=0;
	scanf("%d%d",&x,&y);
	a[0]=x,b[0]=y;
	for(i=1;a0!=1;i++)
	{
		if(a[i-1]%2==0)a[i]=a[i-1]/2;
		else a[i]=(a[i-1]-1)/2;
		a0=a[i];
	}
	ia=i;
	for(j=1;b0!=1;j++)
	{
		if(b[j-1]%2==0)b[j]=b[j-1]/2;
		else b[j]=(b[j-1]-1)/2;
		b0=b[j];
	}
	jb=j;
	for(i=0;i<ia;i++)
	{
		for(j=0;j<jb;j++)
			if(b[j]==a[i])/*word=1,printf("%d\n",a[i])*/break;
		if(/*word==1*/b[j]==a[i])break;
	}
	printf("%d\n",a[i]);
}