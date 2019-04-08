int main()
{   int a[6];
    int i,j;
	int sum=0;
	int h;
    for(j=0;j<10000;j++)
	{ for(i=0;i<6;i++)
	{ scanf("%d",&a[i]);}
	  
	if(a[0]==0&&a[1]==0&&a[2]==0&&a[3]==0&&a[4]==0&&a[5]==0)
	{break;}
	sum=sum+3600*(12-a[0]-1+a[3]);
	  sum=sum+3600-a[1]*60-a[2];
	  sum=sum+a[4]*60+a[5];
	  printf("%d\n",sum);
	sum=0;}

	  return 0;
}
