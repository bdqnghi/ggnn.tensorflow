/*
 *???mode.cpp
 *???????????
 *????: 2012-11-27
 *?????1200012825
 */

int l1,l2;
int a[2000],b[1000];
int temp;
void cins(void)//????
{
	cin>>l1>>l2;
	for(int i=1;i<=l1;i++){
		cin>>a[i];
	}
	for(int i=1;i<=l2;i++){
		cin>>b[i];
	}
}
void sorts(void)//????
{
	for(int i=1;i<l1;i++){
		for(int j=1;j<=l1-i;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(int i=1;i<l2;i++){
			for(int j=1;j<=l2-i;j++){
				if(b[j]>b[j+1]){
					temp=b[j];
					b[j]=b[j+1];
					b[j+1]=temp;
				}
			}
		}
}
void together(void)//????
{
	for(int i=l1+1;i<=l1+l2;i++){
		a[i]=b[i-l1];
	}
}
void couts(void)//????
{
	cout<<a[1];
	for(int i=2;i<=l1+l2;i++){
		cout<<" "<<a[i];

	}
	cout<<endl;
}
int main(void)
{
	cins();
	sorts();
	together();
	couts();//????
	return 0;
}
