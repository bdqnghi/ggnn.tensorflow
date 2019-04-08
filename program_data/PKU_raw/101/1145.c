/*
 * eatingamount.cpp
 *
 *  Created on: 2013-11-3
 *      Author: ???
 */
int main()
{int a,b,c;
	int A,B,C;
	for(A=1;A<=3;A++)
		for(B=1;B<=3;B++){
			if(A==B)continue;
			for(C=1;C<=3;C++){
				if(A==C||B==C)continue;
				a=(B>A)+(C==A);
				b=(A>B)+(A>C);
				c=(C>B)+(B>A);
					if(a>b&&b>c&&A<B&&B<C){cout<<"ABC";break;}
					if(a>c&&c>b&&A<C&&C<B){cout<<"ACB";break;}
					if(b>a&&a>c&&B<A&&A<C){cout<<"BAC";break;}
					if(b>c&&c>a&&B<C&&C<A){cout<<"BCA";break;}
					if(c>a&&a>b&&C<A&&A<B){cout<<"CAB";break;}
					if(c>b&&b>a&&C<B&&B<A){cout<<"CBA";break;}
			}

		}
		return 0;
}
