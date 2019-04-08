int main()
{
	int a[5][5],i,j,l;
	int num=0;

	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			cin>>a[i][j];
	for(i=0;i<5;i++)
			for(j=0;j<5;j++)
				//???????????
			{ int p=0;
				for(l=0;l<5;l++)
				{
				 if((a[l][j]<a[i][j])||(a[i][l]>a[i][j]))//??a[i][j]??????????????
				   {
				   p++;
				   break;
				   }
			     }

				if(p==0){cout<<i+1<<" "<<j+1<<" "<<a[i][j]<<endl;
						num++;}//??num???
			}
	if(num==0)cout<<"not found"<<endl;
}
