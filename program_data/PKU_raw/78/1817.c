/*
 * ????weight.cpp
 * ??????
 * ????: 2012-11-5
 * ??:?????????????????
 */

int main()
{
	int z,q,s,l;             //??????????????10??????10???
	for (z=1;z<=5;z++){
		for(q=1;q<=5;q++){
			for(s=1;s<=5;s++){
				for(l=1;l<=5;l++){
                if ((z+q)==(s+l) && (z+l)>(q+s) && (z+s)<q){          //????????
                	int a[5],i,j,temp;                 //????????
                	a[0]=z;
                	a[1]=q;
                	a[2]=s;
                	a[3]=l;
                	for(i=0;i<=3;i++)
                	{
                		for(j=0;j<=3-i;j++)
                		{
                		    temp=a[j];
                		    if(a[j]>a[j+1])
                		    {
                			    a[j]=a[j+1];
                			    a[j+1]=temp;
                		    }
                		}
                	}
                    for (i=3;0<=i;i--){                        //???????????????????????
                    	if(z==a[i]) cout << "z " << a[i]*10 << endl;
                    	if(q==a[i]) cout << "q " << a[i]*10 << endl;
                    	if(s==a[i]) cout << "s " << a[i]*10 << endl;
                    	if(l==a[i]) cout << "l " << a[i]*10 << endl;
                    }

                }
				}
			}
		}
	}
	return 0;
}
