
int main() {
	int z=0,q=0,s=0,l=0;//???????????????z,q,s,l
	for (z=1;z<=5;z++)
	{
		for (q=1;q<=5;q++)
		{
			for (s=1;s<=5;s++)
			{
				for (l=1;l<=5;l++)
			    {
					if (z+q==s+l && z+l>s+q && z+s<q)
						break;
			    }
				if (z+q==s+l && z+l>s+q && z+s<q)
					break;
			}
			if (z+q==s+l && z+l>s+q && z+s<q)
				break;
		}
		if (z+q==s+l && z+l>s+q && z+s<q)
			break;
	}//???????z,q,s,l
    int v[4]={z,q,s,l};
    int vm=0;//???????
    char c[4]={'z','q','s','l'};
    char cm='a';//???????
    for (int i=0;i<4;i++)
    {
    	for (int j=0;j<4;j++)
    	{
    		if (v[i]>v[j])
    			{
    				vm=v[i];
    				v[i]=v[j];
    				v[j]=vm;
    				cm=c[i];
    				c[i]=c[j];
    				c[j]=cm;
    			}
    	}
    }//?????????????????????????
    for (int k=0;k<4;k++)
    	cout << c[k] <<" "<< v[k]*10 << endl;
	return 0;
}
