//*************************************************
//* ????1.cpp                                 *
//* ?? 1000012747                               *
//* ??????????????????          *
//*************************************************
int main()
{
	int n=0,i,j,temp=0;
	char cinx[100000],ciny[100000];  //cinx,ciny??????????
	int x[1000],y[1000],t[1000];     //x,y???????t?????????
	int len,lenx=0,leny=0,max=0,maxi;
	for(i=0;i<1000;i++)
	{
		x[i]=0;
		y[i]=0;
		t[i]=0;
	}
	cin.getline(cinx,100001,'\n');
	len=strlen(cinx);
	for(i=0;i<100000;i++)
		if(cinx[i]==',')
			n++;
	n++;                          //??????????
	for(i=0;i<len;i++)
	{
		if(cinx[i]!=',')
			lenx++;
		else
		{
			for(j=lenx-1;j>=0;j--)
			{
				x[temp]=x[temp]+((int)(cinx[i-j-1]-'0'))*(pow(10.0,j));  //????????????
			}
			lenx=0;
			temp++;
		}
	}
	j=0;
	for(i=0;i<len;i++)          //?????????????
	{
		if(cinx[i]==',')
			j++;
		if(j==n-1)
			break;
	}
	lenx=len-i-1;
	for(j=lenx-1;j>=0;j--)
		x[temp]=x[temp]+((int)(cinx[len-j-1]-'0'))*(pow(10.0,j));   //???????
	cin.getline(ciny,100001,'\n');
	len=strlen(ciny);
	temp=0;
	for(i=0;i<len;i++)
	{
		if(ciny[i]!=',')
			leny++;
		else
		{
			for(j=leny-1;j>=0;j--)
			{
				y[temp]=y[temp]+((int)(ciny[i-j-1]-'0'))*(pow(10.0,j));
			}
			leny=0;
			temp++;
		}
	}
	j=0;
	for(i=0;i<len;i++)
	{
		if(ciny[i]==',')
			j++;
		if(j==n-1)
			break;
	}
	leny=len-i-1;
	for(j=leny-1;j>=0;j--)
		y[temp]=y[temp]+((int)(ciny[len-j-1]-'0'))*(pow(10.0,j));
	for(i=0;i<n;i++)
		for(j=0;j<1000;j++)
			if((j>=x[i])&&(j<y[i]))
				t[j]++;                   //?????????
	for(i=0;i<1000;i++)
		if(t[i]>max)
		{
			maxi=i;
			max=t[i];                     //?????????
		}
	cout<<n<<" "<<max<<endl;
	return 0;
}