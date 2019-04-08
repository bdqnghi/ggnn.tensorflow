void main()
{
	int x=0,y=0,k=0,t=0,i,m=0,j;
	char a[100]="",b[100]="";
    int A[100]={0},B[100]={0};
	
	scanf("%d%s%d",&x,a,&y);
	k=strlen(a);
    

	for(i=0;i<k;i++)
	{
        if(a[i]>96)
			a[i]=a[i]-32;
		if(a[i]>64&&a[i]<91)
			A[i]=a[i]-55;
		if(a[i]>47&&a[i]<59)
			A[i]=a[i]-48;
        t=t*x+A[i];
	}
	//printf("@@%d&&  ",t);??debug~
	if(t==0)
		printf("0");//??????????????????????empty output??
	
	for(j=0;;j++)
	{
		if(t/(int)(pow(y,j))==0)
			break;
	}
	
	
	//printf("!!%d!!  ",j);
	for(i=j-1;i>=0;i--)//????~
	{
		B[i]=t%y;
		t=(t-B[i])/y;
	    if(B[i]<10)
			b[i]=B[i]+48;
		if(B[i]>9)
			b[i]=B[i]+55;
	}
	for(i=0;i<j;i++)
		printf("%c",b[i]);
	
}