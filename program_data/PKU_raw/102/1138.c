int main(){
	int n,i,j,k=0,p=0,ab,ba;
	double h[100],h1[100],h2[100],temp;
	char s[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",s);
		scanf("%lf",&h[i]);
		ab=strcmp(s,"female");
		ba=strcmp(s,"male");
		if(ba==0)
		{
			h1[k]=h[i];
			k++;
		}
		if(ab==0)
		{
			h2[p]=h[i];
			p++;
		}
	}


	for(i=k-1;i>0;i--)       
		for(j=0;j<i;j++) 
			if(h1[j]>h1[j+1])
			{
				temp=h1[j];
				h1[j]=h1[j+1];
				h1[j+1]=temp;
			}
	for(i=0;i<k;i++)
		printf("%.2lf ",h1[i]);
	for(i=p;i>0;i--)       
		for(j=0;j<i;j++) 
			if(h2[j]<h2[j+1])
			{
				temp=h2[j];
				h2[j]=h2[j+1];
				h2[j+1]=temp;
			}
	for(i=0;i<p-1;i++)
		printf("%.2lf ",h2[i]);
	printf("%.2lf",h2[p-1]);


	return 0;
}
