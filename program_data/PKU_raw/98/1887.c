

const int maxlen=80;

char st[50];

int n, len, newline, nowlen;

int main(){

	//freopen("a.in", "r", stdin);
	scanf("%d", &n);
	newline = 1;
	for (int i=0; i<n; i++){
		scanf("%s", st);
		nowlen = strlen(st);
		if ((i?1:0)+nowlen+len > maxlen){
			printf("\n%s", st);
			len = nowlen;
		}
		else {
			if (i) putchar(' ');
			printf("%s", st);
			len += (i?1:0) + nowlen;
		}
	}

	return 0;
}
