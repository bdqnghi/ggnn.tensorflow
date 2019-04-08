int main()
{
	char A,B,C;
	int max1,min1,max2,min2;
	for (int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(i==j)continue;
			for(int k=0;k<3;k++)
			{
				if(k==j||k==i)continue;
				int a[3]={0,0,0};
				if(j>i){a[0]=a[0]+1;a[2]=a[2]+1;}
				if(i>j)a[1]=a[1]+1;
				if(i>k)a[1]=a[1]+1;
				if(k>j)a[2]=a[2]+1;
				if(i==0)min1=0;
				if(j==0)min1=1;
				if(k==0)min1=2;
				if(i==2)max1=0;
				if(j==2)max1=1;
				if(k==2)max1=2;
				for(int l=0;l<3;l++)
				{
					if(a[l]==0)min2=l;
					if(a[l]==2)max2=l;
				}
				if(max1==min2&&min1==max2)
				{
					A=max1+65;
					B=min1+65;
					C=68-max1-min1;
					cout<<B<<C<<A;
				}
			}
		}
	}

    return 0;
}