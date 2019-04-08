

int main(int argc, char* argv[])
{
	char a[3][257];
	int i;
	int l1,l2,l3,re;
	for(i=0;i<3;i++)
		scanf("%s",a[i]);
	l1=strlen(a[0]);
	l2=strlen(a[1]);
	l3=strlen(a[2]);
	int j,k,z=0,num=0,x=0,count=0;
	for(j=0;j<l1;j++)
	{
		if(a[0][j]==a[1][0])
		{
			z=j+1;
			for(k=1;k<l2;k++)
			{
				if(a[0][z]==a[1][k])
					num++;
				else
					break;
				z++;
			}
		    if(num==l2-1)
			{
				re=1;
				count=j;
			}
			else
				continue;
		}
		else if(re==1)
			break;
		else
			continue;
	}
	if(re==1)
	{
		for(i=count;i<l2+count;i++)
		{
		   a[0][i]=a[2][x];
		   x++;
		}
		printf("%s",a[0]);
	}
	else
	    printf("%s",a[0]);
	return 0;
}