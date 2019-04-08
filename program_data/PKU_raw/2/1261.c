int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;
int max = 0;
char maxn;
struct book
{
	int id;
	char author[28];
}*bb;
void find ( int ii );


int main()
{
	int n;
	scanf("%d",&n);
	int ii;
	bb = ( struct book * ) malloc ( sizeof ( struct book ) * n );
	for ( ii = 0; ii < n ; ii++ )
	{
		scanf("%d %s",&bb[ii].id,bb[ii].author);
	}
	for ( ii = 0 ; ii < n ; ii++ )
	{
		find (ii);
	}
	printf("%c\n",maxn);
	printf("%d\n",max);

	int jj;
	for ( ii = 0 ; ii < n ; ii++ )
	{
		for ( jj = 0 ; bb[ii].author[jj] != '\0' ; jj++)
		{
			if ( bb[ii].author[jj] == maxn )
			{
				printf("%d\n",bb[ii].id);
			}
		}
	}
	free(bb);
	return 0;
}

		







void find ( int ii )
{
	int aa = 0;
	for ( aa = 0 ; bb[ii].author[aa] != '\0' ; aa++ )
	{
		switch(bb[ii].author[aa])
		{
case 'A':{a++;if ( a > max ) max = a,maxn = 'A' ; break;}
case 'B':{b++;if ( b > max ) max = b,maxn = 'B' ; break;}
case 'C':{c++;if ( c > max ) max = c,maxn = 'C' ; break;}
case 'D':{d++;if ( d > max ) max = d,maxn = 'D' ; break;}
case 'E':{e++;if ( e > max ) max = e,maxn = 'E' ; break;}
case 'F':{f++;if ( f > max ) max = f,maxn = 'F' ; break;}
case 'G':{g++;if ( g > max ) max = g,maxn = 'G' ; break;}
case 'H':{h++;if ( h > max ) max = h,maxn = 'H' ; break;}
case 'I':{i++;if ( i > max ) max = i,maxn = 'I' ; break;}
case 'J':{j++;if ( j > max ) max = j,maxn = 'J' ; break;}
case 'K':{k++;if ( k > max ) max = k,maxn = 'K' ; break;}
case 'L':{l++;if ( l > max ) max = l,maxn = 'L' ; break;}
case 'M':{m++;if ( m > max ) max = m,maxn = 'M' ; break;}
case 'N':{n++;if ( n > max ) max = n,maxn = 'N' ; break;}
case 'O':{o++;if ( o > max ) max = o,maxn = 'O' ; break;}
case 'P':{p++;if ( p > max ) max = p,maxn = 'P' ; break;}
case 'Q':{q++;if ( q > max ) max = q,maxn = 'Q' ; break;}
case 'R':{r++;if ( r > max ) max = r,maxn = 'R' ; break;}
case 'S':{s++;if ( s > max ) max = s,maxn = 'S' ; break;}
case 'T':{t++;if ( t > max ) max = t,maxn = 'T' ; break;}
case 'U':{u++;if ( u > max ) max = u,maxn = 'U' ; break;}
case 'V':{v++;if ( v > max ) max = v,maxn = 'V' ; break;}
case 'W':{w++;if ( w > max ) max = w,maxn = 'W' ; break;}
case 'X':{x++;if ( x > max ) max = x,maxn = 'X' ; break;}
case 'Y':{y++;if ( y > max ) max = y,maxn = 'Y' ; break;}
case 'Z':{z++;if ( z > max ) max = z,maxn = 'Z' ; break;}
		}
	}
}




