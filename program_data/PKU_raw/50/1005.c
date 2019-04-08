void main()
{   
	void xunzhao(int a[]);
	int i,k,a[12]={5,3,0,3,2,3,2,3,3,2,3,2};
	scanf("%d",&k);
	if(k+5>7) a[0]=k-2;
	else      a[0]=k+5;
	for(i=1;i<12;i++)
	switch(a[i])
	{case 3:if(a[i-1]+3<8) a[i]=a[i-1]+3;
	       else a[i]=a[i-1]-4; break;
    case 0:a[i]=a[i-1];break;
	case 2:if(a[i-1]+2<8) a[i]=a[i-1]+2;
	       else a[i]=a[i-1]-5; break;
	}
	xunzhao(a);
}

void xunzhao(int a[])
{   int i;
	for(i=0;i<12;i++)
		if(a[i]==5)
			printf("%d\n",i+1);
}