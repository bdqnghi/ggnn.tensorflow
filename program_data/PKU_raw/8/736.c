int getin(int array[],int num);//???????
int sort(int array[],int num);//???????
int link(int array1[],int array2[],int num1,int num2);//???????
int main()
{
	int numa,numb,a[1000],b[1000];
	cin>>numa>>numb;
	getin(a,numa);
	getin(b,numb);
	sort(a,numa);
	sort(b,numb);
	link(a,b,numa,numb);
	return 0;
}
int getin(int array[],int num)
{
	for(int i=0;i<num;i++)
	{
		cin>>array[i];
	}
	return (array[num]);
}
int sort(int array[],int num)//????
{
	int temp;
	for(int i=0;i<num-1;i++)
	{
		for(int j=0;j<num-i-1;j++)
		{
			if(array[j]>array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	return array[num];
}
int link(int array1[],int array2[],int num1,int num2)
{
	cout<<array1[0];
	for(int i=1;i<num1;i++)
		cout<<" "<<array1[i];
	for(int i=0;i<num2;i++)
		cout<<" "<<array2[i];
	return 0;
}




