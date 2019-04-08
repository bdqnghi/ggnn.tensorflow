int check(int m,int n);
int main(void)
{
	int a[5][5],m,n,i,j,t;
          for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	scanf("%d %d",&m,&n);
       if(check(m,n))
	{
		for(i=0;i<5;i++)
		{
			t=a[m][i];
			a[m][i]=a[n][i];
			a[n][i]=t;
		}
	   for(i=0;i<5;i++)
	   {	   
                for(j=0;j<4;j++)
		   {  
                     printf("%d ",a[i][j]); 
		   }
		printf("%d\n",a[i][4]);
	   }
         }
	else printf("error");
}
int check(int m,int n)
{
	if(m<=4&&m>=0&&n<=4&&n>=0)
	return(1);
	else return(0);
        return 0;
}