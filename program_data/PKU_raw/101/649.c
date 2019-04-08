int main()
{
	char a[3];
	int i,j,k,l,b[3];
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			for(k=0;k<3;k++)
			{
				if(i==j||i==k||j==k)
					continue;
				b[0]=((i<j)+(i==k)+i);
				b[1]=((i>j)+(i>k)+j);
				b[2]=((k>j)+(j>i)+k);
				if((b[0]+b[1]+b[2])==6)
				{
					a[i]='A';
					a[j]='B';
					a[k]='C';
				}
			}
			for(l=0;l<3;l++)
					cout<<a[l];
						return 0;
}