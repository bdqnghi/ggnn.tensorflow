//*********************************************
//*            ????????               *
//*             ??????                  *
//*            ???1200012764               *
//*           ???2012/10/12                *  
//*********************************************
int main ()
{
	int z=1, q=1, s=1, l=1 ;                       //???????????10?????
	int zx , qx , sx , lx ;                     //??????????????10?????
	for( z = 1 ; z <= 5 ; z++ )
		for( q = 1 ; q <= 5 ; q++ )                         //?????????????????
			for( s = 1 ; s <= 5 ; s++ )
				for( l = 1 ; l <= 5 ; l++)
				{
					if (( z + q == s + l )&&( z + l > s + q )&&( z + s < q ))
					{
						zx = z ;
						qx = q ;
						sx = s ;
						lx = l ;
					}
				}
				int weight[5] = { 0, zx, qx, sx, lx } ;                   //??????????????
				char mweight[5] = { '0' ,'z' ,'q' ,'s', 'l' } ;           //?????????????z q s l
				for ( int k = 1 ; k <= 4 ; k++ )
				{
					for ( int r = 1 ; r <= 4 - k ; r++ )                //????????????
					{
						if ( weight[r] < weight[r+1] )
						{
							int p = weight[r] ;
							weight[r] = weight[r+1];
							weight[r+1] = p ; 
							char q = mweight[r] ;
							mweight[r] = mweight[r+1];
							mweight[r+1] = q ;
						}
					}
				}
				cout << mweight[1] << " " << weight[1]*10 << endl ;          //??????????????
				cout << mweight[2] << " " << weight[2]*10 << endl ;
				cout << mweight[3] << " " << weight[3]*10 << endl ;
				cout << mweight[4] << " " << weight[4]*10 << endl ;
				return 0 ;
}
