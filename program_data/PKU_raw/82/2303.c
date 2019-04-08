
int main(){
	int n,x,y,i,j,k=0,a[1000]={0},ex;
    scanf("%d",&n);
	for(i=0;i<n-1;i++)
	{
		scanf("%d%d",&x,&y);
		if (x<=140&&x>=90&&y<=90&&y>=60)
			a[k]++;
		else
			k++;
	}
	scanf("%d%d",&x,&y);
	if (x<=140&&x>=90&&y<=90&&y>=60)
	{
		a[k]++;
		k++;
	}
	else
		k++;
	for(i=0;i<k;i++)
	{
		if(a[0]<a[i])
		{
			ex=a[0];
			a[0]=a[i];
			a[i]=a[0];
		}
	}
	printf("%d\n",a[0]);
	return 0;
}

