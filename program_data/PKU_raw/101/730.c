/*
 *100008.cpp
 *??????
 *Created on: 2012-10-5
 *Author:??
 */
int A=0,B=0,C=0;//????
int main(){
	for (A=0;A<3;A++){//?????
		for (B=0;B<3;B++){
			if (A!=B){
			for (C=0;C<3;C++){
				if(C!=A&&C!=B){
					if(((B>A)+(C==A))==2&((A>B)+(A>C))==1&((C>B)+(B>A))==0&(C>B>A)==1)//????????
						cout<<"ABC"<<endl;
					if(((B>A)+(C==A))==2&((A>B)+(A>C))==0&((C>B)+(B>A))==1&(B>C>A)==1)
						cout<<"ACB"<<endl;
					if(((B>A)+(C==A))==1&((A>B)+(A>C))==0&((C>B)+(B>A))==2&(B>A>C)==1)
						cout<<"CAB"<<endl;
					if(((B>A)+(C==A))==1&((A>B)+(A>C))==2&((C>B)+(B>A))==0&(C>A>B)==1)
						cout<<"BAC"<<endl;
					if(((B>A)+(C==A))==0&((A>B)+(A>C))==1&((C>B)+(B>A))==2&(A>B>C)==1)
						cout<<"CBA"<<endl;
					if(((B>A)+(C==A))==0&((A>B)+(A>C))==2&((C>B)+(B>A))==1&(A>C>B)==1)
						cout<<"BCA"<<endl;
					}
				}
			}
		}
	}
return 0;
}
