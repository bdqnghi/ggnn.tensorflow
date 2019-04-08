/*
 * 5.cpp
 *
 *  Created on: 2011-11-6
 *      Author: zhujile
 */
int main(){
	int a,b,c,d,e,sum=0;        //a?b?c?d?e??????sum?????????????
	for (e=1;e<6;e++)           //??e
	{
		if ((e==2)||(e==3)) continue; //e???2?3?
		for (a=1;a<6;a++)             //??a
		{
			if (a==e) continue;       //?????????
			for (b=1;b<6;b++)
			{
				if ((b==a)||(b==e)) continue;  //?????????
				for (c=1;c<6;c++)
				{
					if ((c==a)||(c==b)||(c==e)) continue;  //?????????
					for (d=1;d<6;d++)
					{
						sum=0;                                         //sum??,????
						if ((d==a)||(d==b)||(d==c)||(d==e)) continue;  //?????????
						if ((a==1&&e==1)||(a==2&&e==1)) sum++;         //????????????????????
						else if ((a==3&&e==1)||(a==4&&e==1)||(a==5&&e==1)) continue;  //????????????????????
						if ((b==1&&b==2)||(b==2&&b==2)) sum++;
						else if ((b==3&&b==2)||(b==4&&b==2)||(b==5&&b==2)) continue;
						if ((c==1&&a==5)||(c==2&&a==5)) sum++;
						else if ((c==3&&a==5)||(c==4&&a==5)||(c==5&&a==5)) continue;
						if ((d==1&&c!=1)||(d==2&&c!=1)) sum++;
						else if ((d==3&&c!=1)||(d==4&&c!=1)||(d==5&&c!=1)) continue;
						if ((e==1&&d==1)||(e==2&&d==1)) sum++;
						else if ((e==3&&d==1)||(e==4&&d==1)||(e==5&&d==1)) continue;
						if (sum==2)                                    //???????????????,????
						{
							cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl; //???????
							a=b=c=d=e=6;                               //????
						}
					}
				}
			}
		}
	}
	return 0;
}
