/************************/
/*       ????       */
/*    ??? pyyaoer    */
/*   ??  2011.11.18   */
/************************/
int main()
{
	int la,lb,i,j,count=1;
	char a[1000],b[100],c[100];
	cin.getline(a,1000); la=strlen(a);
	cin.getline(b,100); lb=strlen(b);
	cin.getline(c,100);
	do
	{
		for (i=count-1;i<=la-1;i++)
		{
			if (a[i]!=b[0]||i>=1&&a[i-1]!=' ')         //??????????????????????
			{
				cout<<a[i];
				count++;
			}
		    else
			    break;
		}
		if (a[i]==b[0]&&(i>=1&&a[i-1]==' '||i==0))     //???????????????
		{
	        for (j=0;j<=lb-1;j++)
			    if (a[i+j]!=b[j])
				    break;
		    count=count+j+1;
		    if (j==lb&&((i+j)<la&&a[i+j]==' ')) //????????
			    cout<<c<<" ";
			else if (i+j==la)
				cout<<c;
		    else
			    for (j=i;j<=count-2;j++)                 //???????
				    cout<<a[j];
		}
	}
	while(count<la);                                    //??????????????
	cout<<endl;
	return 0;
}