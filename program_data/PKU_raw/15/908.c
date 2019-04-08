int main()
{
	int area[1000][1000];
int i,j,n,i1,j1,i2,a,b,j2,J1=0,J2=0,I1=0,I2=0,GESHU;
GESHU=0;
a=1;
b=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&(area[i][j]));
		}
	}

	for(i1=0;i1<n;i1++)
	{
		for(j1=0;j1<n;j1++)

		
		{	if(area[i1][j1]==0&&a==1)
		{a=2;
J1=j1;
I1=i1;                   
}}
}
		
	for(i2=n-1;i2>=0;i2--)
	{
		for(j2=n-1;j2>=0;j2--)
			{if(area[i2][j2]==0&&b==1)
{J2=j2;
I2=i2;		
b=2;
}
 }
}
GESHU=(J2-J1+1)*(I2-I1+1)-2*(J2-J1+I2-I1+2)+4;
printf("%d",GESHU);
return 0;
}


