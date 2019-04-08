
int main(int argc, char* argv[])
{
    int num[101][100];
	int n,i,j;
	scanf("%d",&n);
	i=j=0;
	for(i=0;i<n;i++)
	{for(j=0;j<n;j++)
	scanf("%d",&num[i][j]);
	}
	int a,b,c,d;
	a=b=c=d=0;
	i=j=0;
    do{
		do{
			if(num[i][j]==0&&a==0&&b==0)
				a=i,b=j+1;
			j++;
	}while(j<n);
		j=0;
	    i++;
	}while(i<n);
	i=j=0;
   do{
		do{
			if(num[i][j]==0&&c<=i&&d<=j)
				c=i,d=j;
			j++;
	}while(j<n);
		j=0;
	    i++;
	}while(i<n);
	int s;
	s=(c-a-1)*(d-b);
	printf("%d\n",s);
   return 0;
}

