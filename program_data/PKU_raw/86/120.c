int main()
{
	int n,m[100],p[20],i,j,t[100];
	scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		scanf("%d",&m[i]);
		if(m[i]==0)
		{
			t[i]=60;
		}
		else{
		for(j=0;j<m[i];j++)
		{
			scanf("%d",&p[j]);
			if((p[j]+(j+1)*3)<=60&&(60-p[j])<=3)
			{
				t[i]=60-j*3;
				
			}
			else if((p[j]+(j+1)*3)<=60&&(60-p[j])>3)
			{
				t[i]=60-(j+1)*3;
			
			}
			else if((p[j]+3*j)<60)
			{
				t[i]=p[j];
				
			}
			else if((60-p[j-1]-3*(j-1))<=3&&(60-p[j-1]-3*(j-1))>=0)
			{
				t[i]=p[j-1];
				
			}
			else if((p[j-1]+j*3)>60)
			{
				t[i]=60-3*(j-1);
			}
			else
			{
				t[i]=60-j*3;
				

			}
				
		}
			
		
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",t[i]);
	}
	return 0;
}