int main()
{
	int z,q,s,l,a[4],i,j,t;
	char rank[51];
	for(z=10;z<=50;z=z+10)
	{
		for(q=10;q<=50;q=q+10)
		{
			if(q==z) continue;
			else
			{
				for(s=10;s<=50;s=s+10)
				{
					if((s==z)||(s==q)) continue;
					else
					{
						for(l=10;l<=50;l=l+10)//?4????4??????????
						{if((l==z)||(l==q)||(l==s)) continue;//??????????????????????
						else
						{
							rank[z]='z';
							rank[q]='q';
							rank[s]='s';
							rank[l]='l';
							if((z+q==s+l)&&(z+l>s+q)&&(z+s<q))//??????????
							{
								a[0]=z;
								a[1]=q;
								a[2]=s;
								a[3]=l;
								for(i=0;i<=3;i++)//???????????????
								{
									for(j=0;j<=i;j++)
									{
										if (a[j]<a[i])
										{
										t=a[j];
										a[j]=a[i];
										a[i]=t;
										}
									}
								}
								for(i=0;i<=3;i++)
									cout<<rank[a[i]]<<" "<<a[i]<<endl;
							}
						}
						}
					}
				}
			}
		}
	}
	return 0;
}
