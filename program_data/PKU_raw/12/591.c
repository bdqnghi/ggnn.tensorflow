int main()
{
	int a[16],i,j,k,l;
	do
	{
		i = 0;
		l = -1;
	    for(j = 0;j <= 15;j++)
    		a[j]=1;
    	do
		{
    		cin >> a[i];
    		i++;
			    if(a[0] == -1)
    		        break;
		}while(a[i-1]!=0);
    	if(a[0] == -1)
    		break;
    	for(j = 0;j <= i-1;j++)
		{
		    for(k = 0;k <= i-1;k++)
			{
		    	if(a[j] == 2 * a[k])
		    		l++;
			}
		}
	    cout << l << endl;}while(a[0]!=-1);
	return 0;
}
