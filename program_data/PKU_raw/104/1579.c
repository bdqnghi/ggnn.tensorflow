
int up(int x) {
	return x/2;
}

int meet(int x, int y) {
	if (x == y)
		return x;
	
	int depthx = log2(x);
	int depthy = log2(y);
	if (depthx < depthy)
		return meet(x, up(y));
	else if (depthx > depthy)
		return meet(up(x), y);
	else
		return  meet(up(x), up(y));
}

int main() {
	int x, y;
	cin >> x >> y;
	cout << meet(x, y);
}