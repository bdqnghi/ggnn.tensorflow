int main ()
{
	int z,q,s,l;//????
	int f(int,int,int,int);//???????????
	for(z=1;z<=5;z++)//??
	{
		for(q=1;q<=5;q++)
		{
			if(q==z)
				continue;//??????
			else
			{
				for(s=1;s<=5;s++)
				{
					if(s==z || s==q)
						continue;
					else
					{
						for(l=1;l<=5;l++)
							if(l==z || l==q || l==s)
								continue;
							else
							{
								if(z+q==l+s && z+l>s+q && z+s<q)//????
									f(z,q,s,l);//????
							}
					}
				}
			}
		}
	}
	return 0;
}
int f(int z,int q,int s,int l)//????
{
	int a[4]={z,q,s,l},i,j,temp1;//????
	char b[5]={"zqsl"},temp2;
	for(i=0;i<3;i++)//???????
		for(j=i+1;j<4;j++)
			if(a[i]<a[j])
			{
				temp1=a[i];
				a[i]=a[j];
				a[j]=temp1;
				temp2=b[i];//???????????
				b[i]=b[j];
				b[j]=temp2;
			}
	for(i=0;i<4;i++)//??
		cout << b[i] << " " << 10*a[i] << endl;
	return 0;//???
}
