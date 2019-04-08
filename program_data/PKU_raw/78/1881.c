/*
??
???
????yang?
???2012.10.14
*/

int main()
{
	int z,q,s,l,x,a[5],i,j,k;//?????????
	char b[5],y;//?????b[5]
	b[1]='z';b[2]='q';b[3]='s';b[4]='l';//??b???
	for(z=1;z<=5;z++)
	{
		for(q=1;q<=5;q++)
		{
			for(s=1;s<=5;s++)
			{
				for(l=1;l<=5;l++)
				{
					if(z+q==s+l&&z+l>s+q&&z+s<q)
					{
						a[1]=z;a[2]=q;a[3]=s;a[4]=l;//?????????????????a
						for(i=1;i<=4;i++)
						{
							for(j=1;j<=4;j++){
								if(a[i]<a[j]&&i<j)
								{x=a[i];a[i]=a[j];a[j]=x;y=b[i];b[i]=b[j];b[j]=y;}//??????????b??
							}
						}
					}
				}
			}
		}
	}
	for(k=1;k<=4;k++)
	{
		cout<<b[k]<<" "<<a[k]*10<<endl;
	}//????
	return 0;
}