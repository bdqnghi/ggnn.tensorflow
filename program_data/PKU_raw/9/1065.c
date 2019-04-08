int main(){
	int n,i,k,l,b[100],n1=0,n2=0,ha[100],pp[100],x;
	char a[100][11],yi[100][10],er[100][10],y[11];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		if(b[i]>=60)
		{
			n1++;
		}
		else
		{
			n2++;
		}
	}
	for(i=0,k=0,l=0;i<n;i++)
	{
		if(b[i]>=60)
		{
			ha[k]=b[i];
			strcpy(yi[k],a[i]);
			k++;
		}
		else
		{
				pp[l]=b[i];
                strcpy(er[l],a[i]);
				l++;
		}
	}
	for(i=1;i<n1;i++)
	{
		for(k=0;k<n1-i;k++)
		{
			if(ha[k]<ha[k+1])
			{
				x=ha[k];
				ha[k]=ha[k+1];
				ha[k+1]=x;
				strcpy(y,yi[k]);
				strcpy(yi[k],yi[k+1]);
				strcpy(yi[k+1],y);
			}
		}
	}
	for(i=0;i<n1;i++){
		printf("%s\n",yi[i]);
	}
	for(i=0;i<n2;i++){
		printf("%s\n",er[i]);
	}
	return 0;
}





