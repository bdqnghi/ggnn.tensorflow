int main()
{
    int m,i,ii,tf,k;
    cin>>m;
    i=2;
	while (i<m/2+1)
    {
		ii=1;
		while (ii<(i/2+1))
		{
			ii=ii+1;
		    if (i%ii==0)
            {    
				tf=0;
			    break;
			}
			else
			    tf=1;
		}
        ii=1;
        while (ii<((m-i)/2+1))
        {
			ii=ii+1;
            if ((m-i)%ii==0)
                tf=0;
            else
			    tf=tf*1;
		}
        if ((tf==1)&&(i!=1)&&(m-i!=1))
		    cout<<i<<" "<<(m-i)<<endl;
        i++;
    }
	cin>>k;
    return 0;
}
            
    
    