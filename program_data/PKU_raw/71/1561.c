int abs(int x)
{ if(x<0) x=-x;
  else x=x;
  return(x);
}
int main()
{
	int n,year,a,b,i,j,e,c[13],d[13],sum=0;
	cin>>n;
	c[0]=0;
	c[1]=c[3]=c[5]=c[7]=c[8]=c[10]=c[12]=31;
	c[4]=c[6]=c[9]=c[11]=30;
	for(i=0;i<n;i++)
	{cin>>year>>a>>b;
	 if((year%4==0&&year%100!=0)||year%400==0) c[2]=29;
	 else c[2]=28;
         for(j=0;j<13;j++)
        {sum+=c[j];
         d[j]=sum;
         }
         e=abs(d[a-1]-d[b-1]);
	 if(e%7==0) cout<<"YES"<<endl;
	 else cout<<"NO"<<endl;
	}
	return 0;
}
