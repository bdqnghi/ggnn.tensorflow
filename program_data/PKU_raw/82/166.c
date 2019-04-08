int main(){
	int n,a[100],b[100],i,hour=0,c[100],k,x,j=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a[i],&b[i]);
	}
	

for(i=0;i<n;i++){
		if(90<=a[i]&&a[i]<=140&&60<=b[i]&&b[i]<=90){
			hour++;
			c[j]=hour;
			j++;


		}
else{
		hour=0;
		c[j]=hour;
j++;
	}
	}

for(k=1;k<j;k++)
	{
		for(i=0;i<j-k;i++)
		{
			if(c[i]>c[i+1])
			{
				x=c[i+1];
				c[i+1]=c[i];
				c[i]=x;
			}
		}
	}
	printf("%d",c[j-1]);
	
	return 0;
}