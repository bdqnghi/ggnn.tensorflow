int main ()
{
	int amount[6][3]={{1,2,3},{1,3,2},{2,1,3},{2,3,1},{3,2,1},{3,1,2}},a=0,b=0,c=0;       //??????
	for (int i=0;i<=5;i++)                                                                //???????????
	{
		int A=0,B=0,C=0;
		if (amount[i][1]>amount[i][0]) {A++;C++;}
		if (amount[i][1]<amount[i][0]) B++;
		if (amount[i][0]>amount[i][2]) B++;
		if (amount[i][2]>amount[i][1]) C++;
		if ((amount[i][0]-amount[i][1])*(A-B)<0&&(amount[i][1]-amount[i][2])*(B-C)<0&&(amount[i][0]-amount[i][2])*(A-C)<0)    //???????
		{
			a=amount[i][0];b=amount[i][1];c=amount[i][2];
		    break;
		}
	}
	if(a<b&&b<c) cout<<"ABC";                                                    //????
	else if(a<c&&c<b) cout <<"ACB";
	else if(b<a&&a<c) cout <<"BAC";
	else if(b<c&&c<a) cout <<"BCA";
	else if(c<b&&b<a) cout <<"CBA";
	else if(c<a&&a<b) cout <<"CAB";
	return 0;
}