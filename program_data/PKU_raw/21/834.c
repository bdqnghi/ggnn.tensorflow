/*
 * sub.cpp
 *
 *  Created on: 2011-12-23
 *      Author: 11229
 */

/*
 * ?????.cpp
 *
 *  Created on: 2011-12-23
 *      Author: 11229
 */
void sort(double arr[100],int len);
int main()
{
	int n,i,imax=0;
	cin>>n;
	double sum=0,array[301]={0},average=0,*p=NULL,distant[301]={0},*pdis=distant,
	MAXdis=0,maxnum[100]={0},*pmax=maxnum;
	p=array;
	for(i=0;i<n;i++){
		cin>>*(p+i);
		sum+=*(p+i);
	}
	average=sum/(double)(n);
	for(i=0;i<n;i++){
		*(pdis+i)=abs(*(p+i)-average);
		if(*(pdis+i)>MAXdis)MAXdis=*(pdis+i);
	}
	for(i=0;i<n;i++){
		if(*(pdis+i)==MAXdis){
			*(pmax+imax)=*(p+i);
			imax++;
		}
	}
	sort(maxnum,imax);
	return 0;
}
void sort(double arr[100],int len)
{
	double *pa=arr,temp=0;
	int i,j;
	for(i=0;i<len-1;i++)
		for(j=0;j<len-i-1;j++){
			if(*(pa+j)>*(pa+j+1)){
				temp=*(pa+j);
				*(pa+j)=*(pa+j+1);
				*(pa+j+1)=temp;
			}
		}
	for(i=0;i<len-1;i++)cout<<*(pa+i)<<',';
	cout<<*(pa+len-1);
	cout<<endl;
}

