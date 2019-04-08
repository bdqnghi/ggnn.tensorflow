int main(){
	int a[100][100],t=0,i,j,k,num;
	for(i=0;i<100;i++)
{   
		scanf("%d",&a[t][i]);
		if(a[t][i]==0) t++;
	else if(a[t][i]==-1) break;
	}

for(k=0;k<t;k++)
{   
	num=0;  
	for(i=0;i<100;i++)
	{
		for(j=0;j<100;j++)
		{
			if(a[k][j]==2*a[k][i]&&a[k][i]!=0)
				num++;
		}
	}
	printf("%d\n",num);
}
	return 0;
}
