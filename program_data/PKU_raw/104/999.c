
int main() {
	int x, y;
	cin >> x >> y;
	int roadx[15] = {0};
	int roady[15] = {0};
	int c1 = 0, c2 = 0;
	while(1) {
	     roadx[c1] = x;
		 x /= 2;
		 c1++;
		 if(x == 0) break;
	}
	while(1) {
	     roady[c2] = y;
		 y /= 2;
		 c2++;
		 if(y == 0) break;
	}
	int i = 0;
	while(1) {
		if(roadx[c1 - i - 1] != roady[c2 - i - 1]) {
			cout << roadx[c1 - i]; 
			break;
		}
		if(i == c1 - 1) {
			cout << roadx[0];
			break;
		}
		if(i == c2 - 1) {
			cout << roady[0];
			break;
		}
		i++;
	}
	getchar();
	getchar();
	return 0;
}