void main()
{
	int w,i,a[12];
	scanf("%d",&w);
	a[0]=w+5;
	a[1]=w+1;
	a[2]=w+1;
	a[3]=w+4;
	a[4]=w+6;
	a[5]=w+2;
	a[6]=w+4;
	a[7]=w;
	a[8]=w+3;
	a[9]=w+5;
	a[10]=w+1;
	a[11]=w+3;
	for(i=0;i<12;i++)
	    if(a[i]>7)a[i]=a[i]-7;
	for(i=0;i<12;i++)
		if(a[i]==5)
		printf("%d\n",i+1);
}
		
