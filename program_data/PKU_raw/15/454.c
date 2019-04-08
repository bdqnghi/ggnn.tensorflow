int main(int argc, char* argv[])
{int zu[100][100];
 int n,a,b,c,d;
 scanf("%d",&n);
 int i,j;
    for(i=0;i<n;i++)
	{  for(j=0;j<n;j++)
	{  scanf("%d",&zu[j][i]);
	}
	}
	 for(i=0;i<n;i++)
	{  for(j=0;j<n;j++)
	 {  if(i==0&&zu[j][i]==0)
		{a=j;
		b=0;}
	    else if(i!=0&&j==0&&zu[j][i]==0)
		{a=0;b=i;}
		else if(j!=0&&i!=0&&zu[j][i]==0)
        {if(zu[j-1][i]==255&&zu[j][i-1]==255&&zu[j+1][i]==0&&zu[j][i+1]==0)
		{a=j;
		 b=i;
		}
		}
		if(i==n-1&&zu[j][i]==0)
		{c=j;
		 d=n-1;
		}
		else if(i!=n-1&&j==n-1&&zu[j][i]==0)
		{c=n-1;
		 d=i;
		}
        else if(i!=n-1&&j!=n-1&&zu[j][i]==0)
		{if(zu[j-1][i]==0&&zu[j][i-1]==0&&zu[j+1][i]==255&&zu[j][i+1]==255)
		{c=j;
		 d=i;
		}
		}
	 }
	 }
	 int mian;
	 mian=(c-a-1)*(d-b-1);
		 printf("%d",mian);
		 return 0;
}

