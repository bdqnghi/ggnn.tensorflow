
int main()
{
	int a,b,c,d,e;
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=5;b++)
		{
			for(c=1;c<=5;c++)
			{
				for(d=1;d<=5;d++)
				{
					for(e=1;e<=5;e++)
					{
						if(a!=b&&a!=c&&a!=d&&a!=e&&b!=c&&b!=d&&b!=e&&c!=d&&c!=e&&d!=e&&e!=2&&e!=3)
						{
							if((a==1||a==2)&&e!=1)
							break;
							else if(a!=1&&a!=2&&e==1)
							break;
							if(b==1)
							break;
						    if((c==1||c==2)&&a!=5)
							break;
							else if(c!=1&&c!=2&&a==5)
							break;
							if(d==2&&c==1)
							break;
							else if(d!=1&&d!=2&&c!=1)
						    break;
							if(e!=1&&d==1)
							break;
							printf("%d %d %d %d %d",a,b,c,d,e);
						}
						
					}
				
                }
		    }
		}
	} 
	
}