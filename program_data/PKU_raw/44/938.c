int reverse(int num)
{
	int h,i;
	char no[5];

	if(num<=0) 
	{num=-num;h=-1;}

	for(i=4;i>=0;i--)
	{   
		no[i]=num/((int) pow(10, i));//???????(parameter)????????????!!;(int)pow(10,i)????????.
		num=num-(no[i]*((int) pow (10,i)));}
    if(no[4]!=0)
	num=no[0]*10000+no[1]*1000+no[2]*100+no[3]*10+no[4];
	else if(no[3]!=0)
    num=no[0]*1000+no[1]*100+no[2]*10+no[3];
    else if(no[2]!=0)
    num=no[0]*100+no[1]*10+no[2];
	else if(no[1]!=0)
    num=no[0]*10+no[1];
	else num=no[0];

	if(h==-1) num=-num;//=?==!!!!!!!!!
	return(num);
}
void main()
{
	int num,ci;
	for(ci=1;ci<=6;ci++)
	{scanf("%d",&num);
	num=reverse(num);
	printf("%d\n",num);}
}
