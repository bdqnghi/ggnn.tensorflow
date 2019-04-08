int main()
{
	int z,q,s,l,a[5]={0},amiddle;
	char b[5],bmiddle;
	int i,j;
	for(z=1;z<6;z++)   
	{
		for(q=1;q<6;q++)
		{
			if(q!=z)
			{
				for(s=1;s<6;s++)
				{
					if((s!=z)&&(s!=q))
					{
						for(l=1;l<6;l++)
						{
							if((l!=z)&&(l!=q)&&(l!=s))
							{
								if(((z+q-s-l)==0)&&(z+l>s+q)&&(z+s<q))
								{
									a[1]=z;b[1]='z';
									a[2]=q;b[2]='q';
									a[3]=s;b[3]='s';
									a[4]=l;b[4]='l';
									for(i=1;i<5;i++)
									{
										for(j=i+1;j<5;j++)
										{
											if(a[i]<a[j])
											{
												amiddle=a[i];
												a[i]=a[j];
												a[j]=amiddle;
												bmiddle=b[i];
												b[i]=b[j];
												b[j]=bmiddle;
											}
										}
									}
									break;
								}}}}}}}}
	for(i=1;i<5;i++)
		cout<<b[i]<<' '<<a[i]<<'0'<<endl;
	return 0;
}