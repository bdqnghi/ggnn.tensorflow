int main()
{
	int a[101][101],r,c,b[10000];//??a??????????b????????????
	cin>>r>>c;
	for(int i=0;i<=r-1;i++)//????
		for(int j=0;j<=c-1;j++)
		{
			cin>>a[i][j];
		}
		int e=1,w1=0,w2=0,w3=0,w4=0,p=1;;
		for(int k=1;k<=100000;k++)//?????????????b?
		{
			if(e==1)//??????
			{
				for(int i=w4;i<=c-1-w2;i++)
				{
					b[p]=a[w1][i];
					p=p+1;
				}
				w1++;
				e=2;
				if(w2+w4==c||w1+w3>r)
				{
					for(int j=1;j<=p-1;j++)
						cout<<b[j]<<endl;
					break;
				}
			}
			if(e==2)//??????
			{
				for(int i=w1;i<=r-1-w3;i++)
				{
					b[p]=a[i][c-1-w2];
					p++;
				}
				w2++;
				e=3;
				if(w2+w4>c||w1+w3==r)
				{
					for(int j=1;j<=p-1;j++)
						cout<<b[j]<<endl;
					break;
				}
			}
			if(e==3)//??????
			{
				for(int i=c-w2-1;i>=w4;i--)
				{
					b[p]=a[r-w3-1][i];
					p++;
				}
				w3++;
				e=4;
				if(w2+w4==c||w1+w3>r)
				{
					for(int j=1;j<=p-1;j++)
						cout<<b[j]<<endl;
					break;
				}
			}
			if(e==4)//??????
			{
				for(int i=r-w3-1;i>=w1;i--)
				{
					b[p]=a[i][w4];
					p++;
				}
				w4++;
 				e=1;
				if(w2+w4>c||w1+w3==r)
				{
					for(int j=1;j<=p-1;j++)
						cout<<b[j]<<endl;
					break;
				}
			}
		}
		return 0;
}