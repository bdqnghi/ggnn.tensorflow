
struct zuobiao
{
	int x ;
	int y ;
	int z ;	
}s[10] ;      //??xyz?????? 
double d[100] , temp ; //d?????????? 
int qian[100] , hou[100] , temp1 ;    //qian hou ????????????????????? 
int i , j , k = 0 ;

void dis(int , int) ;
void paixu() ;

int main()
{
	int n ;
	cin >> n ;
	for (i = 0 ; i < n ; i++)
		cin >> s[i].x >> s[i].y >> s[i].z ;
	for (i = 0 ; i < n ; i++)
		for (j = i + 1 ; j < n ; j++)
			dis(i , j) ;
	paixu() ;
	for (i = 0 ; i < k ; i++)
	{
		cout << "(" << s[qian[i]].x << "," << s[qian[i]].y << "," << s[qian[i]].z << ")" << "-"
			 <<	"(" << s[hou[i]].x << "," << s[hou[i]].y << "," << s[hou[i]].z << ")" << "=" ;
		printf ("%.2f", d[i]) ;
		cout << endl ;
	}
	return 0 ;
}

void dis(int a , int b)
{
	int a1 , a2 , a3 ;
	a1 = s[a].x	- s[b].x ;
	a2 = s[a].y	- s[b].y ;
	a3 = s[a].z	- s[b].z ;
	d[k] = sqrt(a1 * a1 + a2 * a2 + a3 * a3) ;  //???? 
	qian[k] = a ;    //?k?????????? 
	hou[k] = b ;	//?k??????????
	k++ ;
}

void paixu()
{
	for (i = 0 ; i < k - 1 ; i++)
		for (j = i + 1 ; j < k ; j++)
		{
			if (d[i] < d[j])
			{
				temp = d[i] ;       //???????????qian hou???? 
				d[i] = d[j]	;
				d[j] = temp ;
				temp1 = qian[i] ;
				qian[i] = qian[j] ;
				qian[j] = temp1 ;
				temp1 = hou[i] ;
				hou[i] = hou[j]	;
				hou[j] = temp1 ;
			}
			else if (d[i] == d[j])  //???????qian hou?????????? 
				if (qian[i] > qian[j] || (qian[i] == qian[j] && hou[i] > hou[j]))
				{
					temp = d[i] ;
					d[i] = d[j]	;
					d[j] = temp ;
					temp1 = qian[i] ;
					qian[i] = qian[j] ;
					qian[j] = temp1 ;
					temp1 = hou[i] ;
					hou[i] = hou[j]	;
					hou[j] = temp1 ;
				}
		}
}