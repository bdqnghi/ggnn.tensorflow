int come[1000],out[1000];
int in();                  //??
int check(int max);        //??????
int search(int same[1000]);//???
int main()
{  int max;
  max=in();                //???????
  cout<<max+1<<" "<<check( max);//??
  return 0;
}
int in()
{int i=0,j=0;
	char a;
	while(true)
	{  cin>>come[i++];
		cin.get(a);   //????
		if(a=='\n')break;
	
		}
	i=0;
	
while(true)
	{  cin>>out[i++];
		cin.get(a);
		if(a=='\n')break;
	
		}
return i-1;
}
int check(int max)
{
	int i,j,k=0,same[1000]={0};
	for(i=0;i<=1000;i++)       //?????
	{for(j=0;j<=max;j++)
		if(i>=come[j]&&i<out[j])
			same[k]++;k++;}
	return search(same);

}
int search(int same[1000])
{
	int i,ma=0;
	for(i=0;i<1000;i++)
       if(ma<same[i])         //???
		   ma=same[i];
	return ma;
}