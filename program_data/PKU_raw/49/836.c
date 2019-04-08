
int main()
{
	char a[502],b[50000][4],t[4];
	char z;
	int i,j,k,m,n,p,q,r,s,u;
	int count=0;


	
	n=0;
	z=cin.get();
	while(z!='\n')
	{
		n++;
		a[n]=z;
		z=cin.get();//1?n  n???  a[n]
	}

	for(i=1;i<=n-1;i++)//????????????kaoshiwuyali
	{

		for(j=1;i+j-1>=1&&i+j-1<=n;j++)
		{
			if((int)a[i+j-1]==(int)a[i-j])
			{
				b[count+1][1]=i-j;//????
				b[count+1][2]=i+j-1;//????
				b[count+1][3]=2*j;//??
				count++;
			}
			else
			{
		 		break;
			}
		}
		for(k=1;i-k<=n&&i+k<=n;k++)
		{
			if((int)a[i+k]==(int)a[i-k])
			{
				b[count+1][1]=i-k;
				b[count+1][2]=i+k;
				b[count+1][3]=2*k+1;
				count++;
			}
			else
			{
				break;
			}
		}
	}

	for(p=1;p<=count-1;p++)
	{
		for(m=1;m<=count-p;m++)
		{
			if(b[m][3]>b[m+1][3]||(b[m][3]==b[m+1][3]&&b[m][1]>b[m+1][1]))
			{
				for(q=1;q<=3;q++)
				{
					t[q]=b[m+1][q];
					b[m+1][q]=b[m][q];
					b[m][q]=t[q];
				}
			}
		}
	}

	for(r=1;r<=count;r++)
	{
		for(s=b[r][1];s<=b[r][2];s++)
		{
			cout<<a[s];
		}
		cout<<endl;
	}

	return 0;
}






				
		
		

