int main() {
	int a, b, c, d, e;
	for ( a = 1; a <= 5; a ++ ) {
		for ( b = 1; b <= 5; b ++ ) {
			for ( c = 1; c <= 5; c ++ ) {
				for ( d = 1; d <= 5; d ++ ) {
					for ( e = 1; e <= 5; e ++ ) {
						int ra = 0, rb = 0,rc = 0, rd = 0,re = 0;
						if ( a != b &&a!=c&&a!=d&&a!=e&&b!=c&&b!=d&&b!=e&&c!=d&&c!=e&&d!=e && e != 2 && e != 3 ) {
						if ( e == 1) ra = 1;
						if ( b == 2) rb = 1;
						if ( a == 5) rc = 1;
						if ( c != 1) rd = 1;
						if ( d == 1) re = 1;
						if ( ra + rb + rc + rd + re == 2 ) {
							if ((a+b==3&&ra+rb==2)||(a+c==3&&ra+rc==2)||(a+d==3&&ra+rd==2)||(a+e==3&&ra+re==2)||(c+b==3&&rc+rb==2)||(d+b==3&&rd+rb==2)||(e+b==3&&re+rb==2)||(c+d==3&&rc+rd==2)||(c+e==3&&rc+re==2)||(d+e==3&&rd+re==2)) {
							cout << a << " "<< b << " " << c << " " << d << " " << e ;
							}
						}
						}
					}
				}
			}
		}
	}

	
	return 0;
}
