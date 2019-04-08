char a[40][10];
float b[40];
char temp;
float t,s1,s2;
int count = 0;
int main()
{
	int n;
	scanf("%d",&n);
	int i,j,k;
	for(i = 0; i < n;i++)
	{
		cin>>a[i]>>b[i];
		//scanf("%s",a[i]);
		//scanf("%f",b[i]);
	}
	for(i =0; i < n;i++)
	{
		if(a[i][0] == 'm') count++;
	}
	for(i = 0;i< n-1;i++)
		for(j = i + 1; j < n;j++)
		{
			if(a[i][0] < a[j][0])
			{
				for(k=0;k < 10;k++){
					temp = a[i][k];
					a[i][k] = a[j][k];
					a[j][k] = temp;}
				t = b[i];
				b[i] = b[j];
				b[j] = t;
			}
		}
		
		for(i = 0; i < count-1; i++)
			for(j = i + 1; j < count; j++)
			{
				if(b[i] > b[j])
				{
					s1=b[i];
					b[i] = b[j];
					b[j] = s1;
				}
			}
			for(i = count; i < n-1; i++)
				for(j = i + 1; j < n; j++)
				{
					if(b[i] < b[j])
					{
						s2=b[i];
						b[i] = b[j];
						b[j] = s2;
					}
				}
				for(i = 0;i<n - 1;i++)
					printf("%.2f ",b[i]);
					printf("%.2f\n",b[n-1]);
				return 0;
}
