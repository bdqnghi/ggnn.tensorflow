int len1, len2, array1[100], array2[100],sa[100];
void zp1(int a1[100], int l1) {
	int cur1;
	for (int i = 0; i < l1 - 1; i++)
		for (int j = 0; j < l1 - 1 - i; j++)
			if (a1[j] > a1[j + 1]) {
				cur1 = a1[j];
				a1[j] = a1[j + 1];
				a1[j + 1] = cur1;
			}
}
void zp2(int a2[100], int l2) {
	int cur2;
	for (int i = 0; i < l2 - 1; i++)
		for (int j = 0; j < l2 - 1 - i; j++)
			if (a2[j] > a2[j + 1]) {
				cur2 = a2[j];
				a2[j] = a2[j + 1];
				a2[j + 1] = cur2;
			}
}
void connection(int a1[100],int a2[100])
{
	for (int i=0;i<len1;i++)
		sa[i]=array1[i];
	for (int i=len1;i<len1+len2;i++)
		sa[i]=array2[i-len1];
}

int main() {

	cin >> len1 >> len2;
	for (int i=0;i<len1;i++)
		cin>>array1[i];
	for (int i=0;i<len2;i++)
		cin>>array2[i];
	zp1(array1, len1);
	zp2(array2, len2);
	connection(array1, array2);
	cout<<sa[0];
	for (int i=1;i<len1+len2;i++)
		cout<<" "<<sa[i];
	cout<<endl;
	return 0;
}