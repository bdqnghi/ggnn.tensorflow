int main()
{
	int a=0, b=0, i=0, k=0, l=0;//a, b ???,k ???????.l????
	char n_b[30]={0}, n[30]={0};//???????n. n_b[30]??????
	unsigned long  n_10=0;//?????n[30]???
	cin>>a>>n>>b;
	l= strlen(n);//???
	i=l;//???????????
	for (k=0; k<l; k++)//????????????????
	{
		if ( n[k]>=48 && n[k]<=57 && i >= 1)//??0-9????n[k]-48
		{
			n_10 = n_10 + pow ((double)a, (double)(i-1))*(n[k]-48);
		}
		else if ( n[k]>=65 && n[k]<=90 &&  i >= 1)//??A-Z??n[k]-55
		{
			n_10 = n_10 + pow ((double)a, (double)(i-1))*(n[k]-55);
		}
		     else if ( n[k]>=97 && n[k]<=122 &&  i >= 1)//??a-z??n[k]-87
			 {
				 	n_10 = n_10 + pow ((double)a, (double)(i-1))*(n[k]-87);
			 }
		          else
					  break;
		i--;
	}
    if ( n_10==0 )//??????
		cout<<0;
	for ( k=0;; k++)//???????b???????????
	{
		 	if ( n_10 != 0)
			{
				if ( n_10 % b >= 0 && n_10 % b <=9)//??
				{
					n_b[k]=n_10 % b + 48;
				}
                else if ( n_10 % b >= 10 && n_10 % b <=35)
				{
					n_b[k]=n_10 % b + 55;
				}
				n_10 = n_10 / b;//??
			}
			else
				break;
	}
	for ( i=k-1; i>=0; i--)//????
	{
		cout<<n_b[i];
	}
	cout<<endl;
	return 0;
}