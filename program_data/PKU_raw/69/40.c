/*
 * Name:homework.cpp
 *  Created on: 2012-11-24
 *  Author: Meng Li
 *  Function: ?????
 */



void sum(char a[], char b[]);

int main(){
	char a[250], b[250];
	cin >> a >> b;
	sum(a,b);
	return 0;
}

void sum(char a[], char b[]){
	int length1=0, length2=0, i, count=0;
	int temp=0;
	char c[250];
	length1=strlen(a);
	length2=strlen(b);
	for (i=0;;i++){
		if (i<length1&&i<length2){
			c[i]=a[length1-1-i]-'0'+b[length2-1-i]+temp;
			if (c[i]>'9'){
				c[i]=c[i]-10;
				temp=1;
			}
			else
				temp=0;
			count++;
		}
		else if (i>=length1&&i<length2){
			c[i]=b[length2-i-1]+temp;
			if (c[i]>'9'){
				c[i]=c[i]-10;
				temp=1;
			}
			else
				temp=0;
			count++;
		}
		else if (i<length1&&i>=length2){
			c[i]=a[length1-i-1]+temp;
			if (c[i]>'9'){
				c[i]=c[i]-10;
				temp=1;
			}
			else
				temp=0;
			count++;
		}
		else if (i>=length1&&i>=length2)
			if (temp==1){
				c[i]=temp+'0';
				count++;
				temp=0;
			}
			else
				break;
	}
	for (i=count-1;i>=0;i--)
		if (i==count-1){
			if (c[i]=='0'&&count!=1)
				continue;
			else
				cout << c[i];
		}
		else
			cout << c[i];
}
