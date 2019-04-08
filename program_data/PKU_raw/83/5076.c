int main()
{
	int n,i,a[10],b[10],j=0;
	float c[10]={0},k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);}for(i=0;i<n;i++){
			scanf("%d",&b[i]);}
		for(i=0;i<n;i++){
		if(b[i]>89)c[i]=a[i]*4.0;
		else if(b[i]>84&&b[i]<90)c[i]=a[i]*3.7;
		else if(b[i]>81&&b[i]<85)c[i]=a[i]*3.3;
		else if(b[i]>77&&b[i]<82)c[i]=a[i]*3.0;
		else if(b[i]>74&&b[i]<78)c[i]=a[i]*2.7;
		else if(b[i]>71&&b[i]<75)c[i]=a[i]*2.3;
		else if(b[i]>67&&b[i]<72)c[i]=a[i]*2.0;
		else if(b[i]>63&&b[i]<68)c[i]=a[i]*1.5;
        else if(b[i]>59&&b[i]<64)c[i]=a[i]*1.5;
        else if(b[i]<60)c[i]=0.0;}
	for(i=0;i<n;i++){k=k+c[i];j=j+a[i];}
	k=k/j;printf("%.2f\n",k);}