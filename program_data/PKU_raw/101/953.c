/*
 * base.cpp
 * function????
 * Created on: 2012-11-28
 * Author: sear
 */
int main() {
	int a, b, c; 			//a,b,c???????????1?2?3
	int i, j, k;            //i,j,k????abc??
	for (a = 1; a < 4; a++) //a,b,c??1?3??
		for (b = 1; b < 4; b++) {
			if (a == b)
				continue; 	//a=b?b???1
			for (c = 1; c < 4; c++) {
				if (c == a || c == b)
					continue; //c=a?c=b?c???1
				if (((a + (b > a) + (a == c)) == 3) && ((b + (a > b) + (a > c))
						== 3) && ((c + (c > b) + (b > a)) == 3))
					       break; 	//?????????????????????3
			}
		}
	a=i,b=j,c=k;			//??abc??
							//????????????
	if (a > b) {
		if (b > c)
			cout << "ABC";
		else {
			if (c < a)
				cout << "ACB";
			else
				cout << "CAB";
		}
	} else {
		if (a > c)
			cout << "BAC";
		else {
			if (c < b)
				cout << "BCA";
			else
				cout << "CBA";
		}
	}
	return 0; //????
}
