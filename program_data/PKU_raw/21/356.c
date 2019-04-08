void main()
{
	int n,i,t[1000]={0},total=0,so[100]={0},temp=0,q=0,j=0;
    double max=0.0,aver=0.0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&t[i]);
	for(i=0;i<n;i++)
		total=total+t[i];
	aver=(double)total/(double)n;
	for(i=0;i<n;i++)
		if(t[i]-aver>max||aver-t[i]>max)
		{
			if(t[i]-aver>0)
			    max=t[i]-aver;
			else
				max=aver-t[i];
		}
	for(i=0;i<n;i++)
		if(t[i]-aver-max<0.00001&&max-(t[i]-aver)<0.00001||aver-t[i]-max<0.00001&&max-(aver-t[i])<0.00001)
		{
			so[q]=t[i];
			q++;
		}
	for(i=0;i<q-2;i++)
		for(j=0;j<q-1-i;j++)
		{
			if(so[j]<so[j+1])
			{
				temp=so[j];
				so[j]=so[j+1];
				so[j+1]=temp;
			}
		}
		printf("%d",so[0]);
	for(i=1;i<q;i++)
		printf(",%d",so[i]);


}