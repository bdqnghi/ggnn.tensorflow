/*
 * assignment.cpp
 *
 *  Created on: 2010-11-23
 *      Author: ??
 *      ?????C????????
 */


int main() {
	int n, j = 1;
	cin>>n;
	char a[n + 1][100];
	for (int i = 0; i <= n; i++)
		cin.getline(a[i], 100);
	for (int i = 1; i <= n; i++) {
		
		//???????????
		if ((a[i][0] >= 'A' && a[i][0] <= 'Z') || (a[i][0] >= 'a' && a[i][0]
				<= 'z') || a[i][0] == '_') {
			
			//???????????????????
			j=1;
			while (a[i][j] != '\0') {
				if (!((a[i][j] >= 'A' && a[i][j] <= 'Z') || (a[i][j] >= 'a'
						&& a[i][j] <= 'z') || a[i][j] == '_' || (a[i][j] >= '0'
						&& a[i][j] <= '9'))) {
					cout << "0" << endl;
					break;
				}
				j++;
			}
			if(a[i][j] == '\0')//???????1
			cout<<"1"<<endl;
		} else {//?????????0
			cout << "0" << endl;
		}
	}
	return 0;
}
