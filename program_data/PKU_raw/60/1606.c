
int  main()
{
    int i,q;
	int j;
	int a[10000];
	int n=0;
	int k = 0;
cin>>q;
if(q<5)
cout<<"empty";
	for(i = 2 ; i <=q; i++)
	{
	for(j = 2 ; j <i; j++)
	{
		if(i%j != 0){
	continue;
}
			else{
				break;
}
}
		if(j==i)
{
			a[n++]=i;
}
}
for(i=0;i<n-1;i++){
if((a[i+1]-a[i])==2)
{k++;
cout<<a[i]<<" "<<a[i+1]<<endl;
 }
 }

}