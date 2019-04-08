main()
{
     	int k,i,j,max,h[25],t[25];
     	scanf("%d",&k);
     	for(i=0;i<k;i++)
         	scanf("%d",&h[i]);
	for(i=0;i<k;i++)
		t[i]=1;
	for(i=k-2;i>=0;i--)
		for(j=i+1;j<k;j++)
			if(h[i]>=h[j]&&t[i]<=t[j])t[i]=t[j]+1;
	for(max=0,i=0;i<k;i++)
		if(t[i]>max)max=t[i];
	printf("%d",max);
}




