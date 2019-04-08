int main()
{
    int i,j,k,a,b,c;
	for (i=1;i<=3;i++)//??
	     for (j=1;j<=3;j++)
			 for (k=1;k<=3;k++)
			 {
				 a=(j>i)+(i==k);
				 b=(i>j)+(i>k);
				 c=(k>j)+(j>i);
				 if ((i-j)*(a-b)<0&&(i-k)*(a-c)<0&&(j-k)*(b-c)<0)
				 {
					 for(a=1;a<=3;a++)
					 {
						 if (a==i) cout<<'A';
						 if (a==k) cout<<'C';
						 if (a==j) cout<<'B';
					 }
					 return 0;
				 }
			 }
	return 0;
}
