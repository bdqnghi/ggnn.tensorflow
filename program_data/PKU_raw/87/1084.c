int main()
{
	
int a[20][6],t,i,j;
for(i=0;i<20;i++)
{
	for(j=0;j<6;j++)
	{scanf("%d",&a[i][j]);}

	if(a[i][0]==0&&a[i][1]==0&&a[i][2]==0&&a[i][3]==0&&a[i][4]==0&&a[i][5]==0)
	break;
	else
	{
		t=(12+a[i][3])*3600+a[i][4]*60+a[i][5]-a[i][0]*3600-a[i][1]*60-a[i][2];
	    printf("%d\n",t);}
}
return 0;
}