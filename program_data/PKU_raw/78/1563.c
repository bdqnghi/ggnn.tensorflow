int main()
{
	char z,q,s,l,ch[4];//z,q,s,l????????????,ch[4]?????????
	int a,b,c,d,c1,c2,c3,n[4],i,j,temp=0;//a,b,c,d????????????????c1,c2,c3????????,n[4]??????????
	a=b=c=d=1;
	for(a=1;a<6;a++)
	{
		for(b=1;b<6;b++)
		{
			if(a==b)
				continue;
			for(c=1;c<6;c++)
			{
				if(c==b||c==a)
				continue;
				for(d=1;d<6;d++)
				{
					if(d==a||d==c||d==b)
				      continue;
				    c1=((a+b)==(c+d));
				    c2=(a+d>b+c);
				    c3=(a+c<b);
				    if(c1+c2+c3==3)//??????????????????
				    {
					    n[0]=a*10;
					    n[1]=b*10;
					    n[2]=c*10;
					    n[3]=d*10;
				    }
				}
			}
		}
	}
    ch[0]='z';
	ch[1]='q';
	ch[2]='s';
	ch[3]='l';
	for(j=0;j<3;j++)
    {
		for(i=0;i<3-j;i++)
			{
				if(n[i]<n[i+1])
		        {
			    temp=n[i];
			    n[i]=n[i+1];
			    n[i+1]=temp;
			    temp=ch[i];
			    ch[i]=ch[i+1];
			    ch[i+1]=temp;}//??????
		   }
	}
	for(i=0;i<4;i++)
	{
		cout<<ch[i]<<" "<<n[i]<<endl;
	}
	return 0;
}

