int main()                                  //?????
{ 
	int A,B,C,i,j,x;                        //????ABC????3??????????i,j,????x
	int a[3];                               //????
	char b[3]={'A','B','C'};
	char p;
	for(A=0;A<=2;A++)                       //???????????????
	{
		for(B=0;B<=2;B++)
		{
			for(C=0;C<=2;C++)
			{
				if((B>A)+(C==A)==2-A&&(A>B)+(A>C)==2-B&&(C>B)+(B>A)==2-C)            //??????????
				{
					a[0]=A;
					a[1]=B;
					a[2]=C;
				}
			}
		}
	}
	for(i=0;i<=1;i++)                       //?????????a[3],b[3]??
	{
		for(j=0;j<=1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				p=a[j+1];
				a[j+1]=a[j];
				a[j]=p;
				x=b[j+1];
				b[j+1]=b[j];
				b[j]=x;
			}
		}
	}
	for(i=0;i<=2;i++)                       //????????
	{
		cout<<b[i];
	}
	cout<<endl;
	return 0;
}