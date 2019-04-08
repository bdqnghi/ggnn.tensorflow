/*
 * weight.cpp
 *
 *  Created on: 2013-11-7
 *      Author: c
 */
int main ()
{
	int a[4], k ;
	char b[4]={'z','q','s','l'};
	int temp1,temp2;
	int i , j ;
	for ( a[0] = 10 ; a[0] <= 50 ; a[0] = a[0] + 10 )
		for ( a[1] = 10 ; a[1] <= 50 ; a[1] = a[1] + 10 )
			for ( a[2] = 10 ; a[2] <= 50 ; a[2] = a[2] + 10 )
				for ( a[3] = 10 ; a[3] <= 50 ; a[3] = a[3] + 10 )
					if (( a[0] + a[1]==a[2] + a[3] ) && ( a[0] + a[3] > a[1] + a[2] )&&( a[0] + a[2] < a[1]))
					{
						for ( i = 0 ; i < 4 ; i ++ )
							for ( j = i+1 ; j <4 ; j ++ )
								if (a[i]<a[j])
								{
									temp1=a[i];
									temp2=b[i];
									a[i]=a[j];
									b[i]=b[j];
									a[j]=temp1;
									b[j]=temp2;
								}
						for(k=0;k<4;k++)
							cout<< b[k] <<" "<< a[k] << endl;
					}
	return 0;
}

