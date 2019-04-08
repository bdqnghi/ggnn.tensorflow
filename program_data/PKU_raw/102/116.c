
char sex[45][7];
float height[45];
int seq[45];

int compare(const void* a, const void* b) {
	int i = *(int*)a;
	int j = *(int*)b;
	if( strcmp(sex[i],"male") == 0 && strcmp(sex[j],"female") == 0 )  return 0;
	if( strcmp(sex[i],"female") == 0 && strcmp(sex[j],"male") == 0 )  return 1;
	// else same sex
	if( strcmp(sex[i],"male") == 0 && strcmp(sex[j],"male") == 0 ) return height[i] > height[j];
	if( strcmp(sex[i],"female") == 0 && strcmp(sex[j],"female") == 0 ) return height[i] < height[j];
}

int main() {
	int n;
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> sex[i] >> height[i];
		seq[i] = i;
	}
	qsort(seq,n,sizeof(int),compare);
	int startFlag = true;
	for(int i=0;i<n;i++) {
		if(startFlag) {
			printf("%.2f",height[seq[i]]);
			startFlag = false;
		} else {
			printf(" %.2f",height[seq[i]]);
		}
	}
	cout << endl;

}