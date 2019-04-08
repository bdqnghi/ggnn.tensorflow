/*
 * ????first.cpp
 * ???00948343_??
 * ?????2012/9/16
 * ?????1???100?????????
 */


int main()
{
	char a[500], b[30][500], temp[500];
	cin >> a;
	int length = strlen (a), i, j, k, count=0;
	for (i=0;i<length;i++){
		for (j=i+1;j<length;j=j+2){
			for (k=0;k<(j-i+1)/2;k++){
				if (a[i+k]!=a[j-k])
					break;
			}
			if (k==(j-i+1)/2){
				for (k=i;k<j+1;k++){
					b[count][k-i]=a[k];
				}
				b[count][j+1-i]='\0';
				count++;
			}
		}
	}
	for (i=0;i<count-1;i++){
		for (j=0;j<count-1-i;j++){
			if (strlen(b[j])>strlen(b[j+1])){
				strcpy(temp,b[j]);
				strcpy(b[j],b[j+1]);
				strcpy(b[j+1],temp);
			}
		}
	}
	for (i=0;i<count;i++){
		cout << b[i] << endl;
	}
	return 0;
}
