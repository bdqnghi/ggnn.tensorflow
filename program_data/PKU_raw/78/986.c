int main()
{
	int a[4]={0},w1,w2,w3,w4,i,j,k,h,t;
	char b[4]={'z','q','s','l'},c;
	for(i=1;i<=5;i++)
	{
		w1=i;
		for(j=1;j<=5;j++)
		{
			w2=j;
			for(k=1;k<=5;k++)
			{
				w3=k;
				for(h=1;h<=5;h++)
				{
					w4=h;
					if(((w1+w2)==(w3+w4))&&((w1+w4)>(w2+w3))&&((w1+w3)<w2))
					{
						a[0]=w1;
						a[1]=w2;
						a[2]=w3;
						a[3]=w4;
					}
				}
			}
		}
	}
	for(i=0;i<3;i++)
	 for(j=i+1;j<4;j++)
	 {
		if(a[i]<a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
			c=b[i];
			b[i]=b[j];
			b[j]=c;
		}
	}
	for(i=0;i<4;i++)
	cout<<b[i]<<" "<<a[i]*10<<endl;
	return 0;
}