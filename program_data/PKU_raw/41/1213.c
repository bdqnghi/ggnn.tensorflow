
int f(int a[])
{
	int f=0,f2=0,i;
	if(a[1]==1||a[1]==2)
	{
		if(a[5]==1) f++;
	}
	else
		if(a[5]!=1) f2++;

	if(a[2]==1||a[2]==2)
	{
		if(a[2]==2) f++;
	}
	else
		if(a[2]!=2) f2++;

	if(a[3]==1||a[3]==2)
	{
		if(a[1]==5) f++;
	}
	else
		if(a[1]!=5) f2++;
	if(a[4]==1||a[4]==2)
	{
		if(a[3]!=1) f++;
	}
	else
		if(a[3]==1) f2++;
	if(a[5]==1||a[5]==2)
	{
		if(a[4]==1) f++;
	}
	else
		if(a[4]!=1) f2++;

	if(f==2&&f2==3)
	{
		for(i=1;i<5;i++)
			printf("%d ",a[i]);
        printf("%d",a[5]);
		return f;
	}
    else
		return 0;
}

int main()
{
	int a[6]={0,1,2,3,4,5},b;
	for(a[1]=1;a[1]<6;a[1]++)
	{
		for(a[2]=1;a[2]<6;a[2]++)
		{
			for(a[3]=1;a[3]<6;a[3]++)
			{
				for(a[4]=1;a[4]<6;a[4]++)
				{
					for(a[5]=1;a[5]<6;a[5]++)
					{
						if(a[1]*a[2]*a[3]*a[4]*a[5]==120&&a[5]!=2&&a[5]!=3)
						{
							b=f(a)/2;
							if(b==1) break;
						}
					}if(b==1) break;
				}if(b==1) break;
			}if(b==1) break;
		}if(b==1) break;
	}
	return 0;

}