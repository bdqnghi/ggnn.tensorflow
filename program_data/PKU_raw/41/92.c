

int main()
{
	int a,b,c,d,e,guss[6],x,y,i,j;
	for(i=0;i<6;i++)
		guss[i]=0;
	for(a=1;a<=5;a++)
		for(b=1;b<=5;b++)
		{
			if(a==b) continue;
			for(c=1;c<=5;c++)
			{
				if(a==c||b==c) continue;
				for(d=1;d<=5;d++)
				{
					if(a==d||b==d||c==d) continue;
					for(e=1;e<=5;e++)
					{
						if(a==e||b==e||c==e||d==e||e==2||e==3) continue;
						guss[a]=(e==1);
						guss[b]=(b==2);
						guss[c]=(a==5);
						guss[d]=!(c==1);
						guss[e]=(d==1);
						x=guss[1]+guss[2];
						for(j=3,y=0;j<=5;j++)
							y=y+guss[j];
						if(x==2&&y==0)
							cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
					}
				}
			}
		}
	return 0;
}