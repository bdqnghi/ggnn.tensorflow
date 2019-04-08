int main ( )
{
	int i,j,k;
	int a[2],b[12],d[2];
	int sd0,sd,ed0,ed;
	cin >> d[0] >>a[0]>> sd ;
	cin >> d[1] >>a[1] >> ed ;
	int ld;
			
	if(d[0]==d[1])
	{
		if((d[0]&400==0)||(d[0]%4==0&&d[0]%100!=0))
				ld=29;
			else
				ld=28;
		if(a[0]==a[1])
		{
			cout << ed-sd << endl;
		}
		else
		{
			int s=0;
			for(j=a[0];j<=a[1]-1;j++)
			{
				switch(j)
				{
				case 1:
				case 3:
			    case 5:
			    case 7:
			    case 8:
			    case 10:
			    case 12:b[j]=31;break;
			    case 2:b[j]=ld;break;
			    case 4:
			    case 6:
			    case 9:
				case 11:b[j]=30;break;
				}
				s+=b[j];
			}
			cout<< s-sd+ed << endl;
		}
	}


	else
	{   
		int z=0,D=0;
		int c[2]={0};
		for(i=d[0];i<=d[1]-1;i++)
		{
			if((i%400==0)||(i%4==0&&i%100!=0))
			{
				z++;
			}
		}
		for(k=0;k<=1;k++)
		{
			for(int x=0;x<=a[k]-1;x++)
			{
				if((d[k]&400==0)||(d[k]%4==0&&d[k]%100!=0))
				ld=29;
			else
				ld=28;
				switch(x)
				{
				case 0:b[x]=0;break;
				case 1:
				case 3:
			    case 5:
			    case 7:
			    case 8:
			    case 10:
			    case 12:b[x]=31;break;
			    case 2:b[x]=ld;break;
			    case 4:
			    case 6:
			    case 9:
				case 11:b[x]=30;break;
				}
				c[k]+=b[x];
			}
		}

		D=(d[1]-d[0]-z)*365+z*366-c[0]-sd+c[1]+ed;
		cout << D << endl ;
	}

	return 0;
}