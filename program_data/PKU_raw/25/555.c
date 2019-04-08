int aa[1000],ab[1000];
void cheng(int a1[],int a2[])
{  int i,j;
   for(i=0;i<=999;i++)
   { a2[i]=a2[i]+a1[i]*2;
    if(a2[i]>9)
	{ a2[i]=a2[i]-10;
	a2[i+1]++;}
	
   }
   return;
}
void copy(int a1[],int a2[])
{ int i;
 for(i=0;i<=999;i++)
 { a1[i]=a2[i];}
 return;}


int main( )
{
    int i,k,m,n,a,t1,t2;
	cin>>n;
	if(n<=20)
	{a=1;
	for(i=1;i<=n;i++)
	{ a=a*2;}
	cout<<a;}
	else {
		memset(aa,0,sizeof(aa));
		memset(ab,0,sizeof(ab));
		aa[0]=1;
        for(k=1;k<=n;k++)
		{
			cheng(aa,ab);
			copy(aa,ab);
			memset(ab,0,sizeof(ab));
		}
		
	k=999;
		while (aa[k]==0) k--;
		for(;k>=0;k--)
			cout<<aa[k];
	}
	return 0;
}

