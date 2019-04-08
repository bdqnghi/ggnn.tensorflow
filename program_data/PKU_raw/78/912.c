int main() {
	int z1,q1,s1,l1, z, q, s, l;
	for ( z = 10; z <= 50; z += 10) {
		for ( q = 10; q != z,q <= 50; q += 10) {
			for ( s = 10;s != z,s != q,s <= 50; s += 10) {
				for ( l = 10;l != z,l != q,l != s,l <= 50; l += 10) {
					if ( z + q == s + l && z + l > s + q && z + s < q ) {
						z1 = z;
						q1 = q;
						s1 = s;
						l1 = l;
					}
				}
			}
		}
	}
	for ( int i = 50; i >= 10; i --) {
		if ( z1 == i) cout << "z" << " " << i << endl;
		if ( q1 == i) cout << "q" << " " << i << endl;
		if ( s1 == i) cout << "s" << " " << i << endl;
		if ( l1 == i) cout << "l" << " " << i << endl;
	}
	return 0;
}