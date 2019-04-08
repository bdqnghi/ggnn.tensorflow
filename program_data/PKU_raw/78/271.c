main()
{
	int z,q,s,l;
    char a[6]={0,0,0,0,0,0};
	for(z=1;z<=5;z++)
    	for(q=1;q<=5;q++)
    		for(s=1;s<=5;s++)
    			for(l=1;l<=5;l++)
    			{
    				if((z==q)||(q==s)||(s==l)||(z==s)||(q==l)) continue;
    				if((z+q==s+l)&&(z+l>s+q)&&(z+s<q))
    				{
    					a[z]='z';
    					a[q]='q';
    					a[s]='s';
    					a[l]='l';

    					for(int i=5;i>=1;i--)
    					{
    						if (a[i]==0) continue;
    						cout<<a[i]<<" "<<i*10<<endl;
    					}
    				}
    			}
   return 0;
}