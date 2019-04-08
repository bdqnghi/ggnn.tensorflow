
int main() {
	char buf[32];
	gets(buf);
	int offset = 0;
	char c;
	while (offset < strlen(buf)) {
		c = *(buf+offset);
		if ('0' <= c && c <= '9') {
			cout << c;
		} else {
			cout << endl;
		}
		++offset;
	}
	return 0;
}