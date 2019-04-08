int main()
{
	int rank[6][3]={{1,2,0},{1,0,2},{2,1,0},{2,0,1},{0,1,2},{0,2,1}};
	int a,b,c,i;
	for(i=0;i<=5;i++)
	{
		a=rank[i][0];
		b=rank[i][1];
		c=rank[i][2];
		if((b>a)+(c==a)==2-a&&(a>b)+(a>c)==2-b&&(c>b)+(b>a)==2-c)
			break;
	}
	switch(i)
	{case 0:cout<<"CAB";break;
	case 1:cout<<"BAC";break;
	case 2:cout<<"CBA";break;
	case 3:cout<<"BCA";break;
	case 4:cout<<"ABC";break;
	case 5:cout<<"ACB";break;
	default:cout<<"fuck";break;
	}
    return 0;
}






