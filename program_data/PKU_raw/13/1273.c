/*
 * test.cpp
 *
 *  Created on: Nov 7, 2012
 *      Author: Sheldon
 */

int main(){
	int flag[101] = {0};
	int n, a;
	cin >> n;
	int f = 0;
	for(int i = 0; i < n; i ++){
		cin >> a;
		if(flag[a] == 0){
			flag[a] = 1;
			if(f == 0){
				cout << a;
				f = 1;
			}
			else{
				cout << " " << a;
			}
		}
	}
	return 0;
}
