/*
 * bifanliang.cpp
 * ??:???
 * ????: 2012-10-26
 * ??????
 */
int main(){
	int A=0,B=0,C=0,a=0,b=0,c=0;//????
	for(A=1;A<=3;A++)//????????
		for(B=1;B<=3;B++)
		{
			if(A==B)continue;
			else {
				for(C=1;C<=3;C++)
				{
					if((C==B)||(C==A))continue;
					else
					{
						if(((B>A)+(C==A)==(3-A))&&((A>B)+(A>C)==(3-B))&&
								((C>B)+(B>A)==(3-C)))
						{
							a=A;b=B;c=C;//??????????????????
						}
					}
				}
			}
		}
	if((a>b)&&(b>c))cout<<"CBA";
	if((a>c)&&(c>b))cout<<"BCA";
	if((b>a)&&(a>c))cout<<"CAB";
	if((b>c)&&(c>a))cout<<"ACB";
	if((b>a)&&(a>c))cout<<"CAB";
	if((c>a)&&(a>b))cout<<"BAC";
	if((c>b)&&(b>a))cout<<"ABC";//???????????
	return 0;//????
}
