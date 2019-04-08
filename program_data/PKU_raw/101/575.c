int main()
{
	int a[5]={0},b[5]={0},i=0,j=0,t=0,k=0,temp=0;
	char name1[4]={'a','A','B','C'},name2[4]={'a','a','a','a'};
	for(i=1;i<=3;i++)
	{
		a[1]=i;
		for(j=1;j<=3;j++)
		{
			if(j==i)
				continue;
			else
				a[2]=j;
			a[3]=6-i-j;
			if((((a[1]<a[2])+a[1]==a[3])==3-a[1])&&(((a[1]>a[2])+(a[1]>a[3]))==3-a[2])&&(((a[3]>a[2])+(a[2]>a[1]))==3-a[3]))
			{
				b[1]=a[1];
				b[2]=a[2];
				b[3]=a[3];
			}
		}
	}
	for(i=1;i<=3;i++)
		name2[b[i]]=name1[i];
	for(i=1;i<=3;i++)
		cout<<name2[i];
	return 0;
}