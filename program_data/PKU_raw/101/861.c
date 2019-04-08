int main ()//?????
{
	int q[18]={0,1,2,0,2,1,1,2,0,1,0,2,2,1,0,2,0,1},a,b,c;
	for (int i=1;i<18;i=i+3)//??????
	{
		a=q[i],b=q[i+1],c=q[i+2];
		if ((b>a)+(c==a)+(a>b)+(a>c)+(c>b)+(b>a)==3)
		{
		if (a>b && a>c && b>c) cout<<"CBA";//??
		if (a>b && a>c && c>b) cout<<"BCA";
		if (b>a && b>c && c>a) cout<<"ACB";
		if (c>a && c>b && a>b) cout<<"BAC";
		if (c>a && c>b && b>a) cout<<"ABC";
		}
	}
	return 0;//????
}
				