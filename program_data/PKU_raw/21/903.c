int main()
{
	int i,n,k=0,j;
	float ave,sum=0,m;
	int a[391];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	ave=sum/n;
	for(i=0;i<n;i++)
		for(j=i;j<n;j++)
			if(a[j]<a[i]){
				m=a[j];
				a[j]=a[i];
				a[i]=m;
			}
	m=fabs(a[0]-ave);
	if(m<a[n-1]-ave)
		m=a[n-1]-ave;
	for(i=0;i<n;i++)
		if((fabs(a[i]-ave)-m<0.1)&&(fabs(a[i]-ave)-m>-0.1)){
			if(k!=0)
				printf(",");
			printf("%d",a[i]);
			k++;
		}
	return 0;
}
