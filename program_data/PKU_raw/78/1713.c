//???????
//??????
//?????2010-11-20
//???????????????????????????????


int main()
{
	int z,q,s,l,a[5],t,i,j;//a????????10KG?
	char n[5]={'0','z','q','s','l'},tt;//n????
	for (z=1;z<=5;z++)//??
		for (q=1;q<=5;q++)
			for (s=1;s<=5;s++)
				for (l=1;l<=5;l++)
					if (((z+q)==(s+l))&&((z+l)>(s+q))&&((z+s)<q))//??
							{
						        a[1]=z;a[2]=q;a[3]=s;a[4]=l;
						        for (i=1;i<=4;i++)//??
						        	for (j=i+1;j<=4;j++)
						        		if (a[i]<a[j])
						        		{
						        			t=a[i];
						        			a[i]=a[j];
						        			a[j]=t;
						        			tt=n[i];
						        			n[i]=n[j];
						        			n[j]=tt;
						        		}
						        break;
							}
	for (i=1;i<=3;i++) cout<<n[i]<<" "<<a[i]<<0<<endl;//??
	cout<<n[4]<<" "<<a[4]<<0;
	return 0;
}
