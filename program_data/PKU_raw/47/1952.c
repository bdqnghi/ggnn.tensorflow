/*
 *???redo.cpp
 *????????
 *????: 2012-12-10
 *?????1200012825
 */

int main(void)
{
	int n;
	cin>>n;
	int *p=NULL,a[100],*q=NULL;
	for(q=a;q<=a+n-1;q++){
		cin>>*q;//??
	}
	cout<<*(p=a+n-1);
	for(p=a+(n-2);p>=a;p--){
		cout<<" "<<*p;//????
	}
	return 0;
}
