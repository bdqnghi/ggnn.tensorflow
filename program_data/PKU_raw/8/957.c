/*
 * Function2.7FourParts.cpp
 *
 *  Created on: 2012-11-30
 *      Author: ???
 *      ??:??????????
 */
int a,b;
int a1[20],b1[20],c[40];
void input(void){ //????
	cin>>a>>b;
	for(int i=0;i<a;i++)
		cin>>a1[i];
	for(int j=0;j<b;j++)
		cin>>b1[j];
}
void select_sort(int array[],int n) //????
 {
    int i,j,k,t;
    for(i=0;i<n-1;i++)
    {
       k=i;
       for(j=i+1;j<n;j++)
       if(array[j]<array[k]) k=j;
       t=array[k];array[k]=array[i];array[i]=t;
    }
 }

void combine(int array1[],int array2[])//????
{
	for(int i=0;i<a;i++)
		c[i]=array1[i];
	for(int j=0;j<b;j++)
		c[j+a]=array2[j];
}
void output(void){ //????
	for(int i=0;i<a+b-1;i++)
		cout<<c[i]<<" ";
	cout<<c[a+b-1]<<endl;
}
int main(){
	input();
	select_sort(a1,a); select_sort(b1,b);
	combine(a1,b1);
	output();
	return 0;
}
