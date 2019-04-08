int m;
int numb(int,int,int);
int main()
{
	int day,h,i,j;
	cin>>m>>day;
	

	for(i=0;i<=8;i++)
	{
		for(j=0;j<=8;j++)
		{
			if(j!=8)
			cout<<numb(i,j,day)<<" ";

			else
			cout<<numb(i,j,day)<<endl;
		}
	}





	


	return 0;
}



int numb(int h,int l,int d) //????????????
{

	if(h==4&&l==4&&d==0)
	{
		return m;
	}
	if((h!=4||l!=4)&&d==0)
	{
		return 0;
	}

	else if(d!=0)
	{
		return (2*numb(h,l,d-1)+numb(h+1,l,d-1)+numb(h-1,l,d-1)+numb(h,l+1,d-1)+numb(h,l-1,d-1)+numb(h+1,l+1,d-1)+numb(h+1,l-1,d-1)+numb(h-1,l+1,d-1)+numb(h-1,l-1,d-1));
	}

	return 0;

}
