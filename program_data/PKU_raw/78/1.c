struct person
{
	char name;
	int w;
}stu[5]={{'z',0},{'q',0},{'s',0},{'l',0},{'t',0}};
void main()
{
	int i=0,j=0,k=0,p=0;
	int z,q,s,l;
	int a,b;

	while(i<5)
	{
		i++;
		z=i;
		j=0;
		while(j<5)
		{
			j++;
			if(j!=i)
			{
				q=j;
				k=0;
				while(k<5)
				{
					k++;
					if(k!=i&&k!=j)
					{
						s=k;
						p=0;
						while(p<5)
						{
							p++;
							if(p!=i&&p!=j&&p!=k)
							{
								l=p;
								if(z+q==s+l&&z+l>s+q&&z+s<q)
								{
									stu[0].w=z;
						        	stu[1].w=q;
									stu[2].w=s;
									stu[3].w=l;
									for(a=0;a<4;a++)
									{
										for(b=0;b<4;b++)
										{
											if(stu[b].w<stu[b+1].w)
											{
												stu[5]=stu[b];
												stu[b]=stu[b+1];
												stu[b+1]=stu[5];
											}

										}
									}
									for(a=0;a<4;a++)
									{
										printf("%c %d\n",stu[a].name,10*stu[a].w);
									}
								}
								}
							}
						}
					}
				}
			}
		}

	}



