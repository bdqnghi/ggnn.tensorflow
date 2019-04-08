
int main() {
	int z, q, s, l;
	for (z = 1; z < 6; ++z) {						// ???????? 
		for (q = 1; q < 6; ++q) {					// ???????? 
			for (s = 1; s < 6; ++s) {				// ???????? 
				for (l = 1; l < 6; ++l) {			// ???????? 
					if (z + q != s + l) continue;	// ?????????? 
					if (z + l <= s + q) continue;
					if (z + s >= q) continue;
					printf("l %d\nq %d\nz %d\ns %d\n", l*10, q*10, z*10, s*10);
				}
			}
		}
	}
	return 0;
}