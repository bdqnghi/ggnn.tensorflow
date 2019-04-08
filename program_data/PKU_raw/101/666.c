/*
 * ???.cpp
 *
 *  Created on: 2011-10-14
 *      Author: 1100012857
 */
int main(){
	char d[4];
	int a,b,c,i;
	for(a=0;a<=3;a++)
		for(b=0;b<=3;b++)
			for(c=0;c<=3;c++)//???
				if((b<=a)+(c!=a)==a-1)
						if((a<=b)+(a<=c)==b-1)
							if((c<=b)+(b<=a)==c-1){//????????????????
                                d[a]='A';
                                d[b]='B';
                                d[c]='C';
                                for(i=1;i<=3;i++)
                                {
                                	cout<<d[i];
                                }
							}
      return 0;

}
