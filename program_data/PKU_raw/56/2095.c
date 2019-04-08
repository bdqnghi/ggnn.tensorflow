int main()
{
    int a1, a2, x;
    int f[4];
    int i, j=5;
    scanf("%d", &a1);
    for(i=1;i<10;i++)
    {
        x=a1-i*10000;
        if(x<0)
		{
        f[0]=i-1;
		break;
		}
		else if(x>=0&&i==9)
			f[0]=9;
    }
    for(i=1;i<10;i++)
    {
        x=a1-f[0]*10000-i*1000;
        if(x<0)
        		{
        f[1]=i-1;
		break;
		}
				else if(x>=0&&i==9)
			f[1]=9;
    }    for(i=1;i<10;i++)
    {
        x=a1-f[0]*10000-f[1]*1000-i*100;
        if(x<0)
        		{
        f[2]=i-1;
		break;
		}
				else if(x>=0&&i==9)
			f[2]=9;
    }    for(i=1;i<10;i++)
    {
        x=a1-f[0]*10000-f[1]*1000-f[2]*100-i*10;
        if(x<0)
        		{
        f[3]=i-1;
		break;
		}
				else if(x>=0&&i==9)
			f[3]=9;
    }
    for(i=1;i<10;i++)
    {
        x=a1-f[0]*10000-f[1]*1000-f[2]*100-f[3]*10-i;
        if(x<0)
        		{
        f[4]=i-1;
		break;			
		}	else if(x>=0&&i==9)
			f[4]=9;
    }
	for(i=0;i<4;i++)
	{
		if(f[i]==0){
			j=i;}
	}
	switch(j)
	{
	case 0:
	a2=f[4]*1000+f[3]*100+f[2]*10+f[1];
	break;
	case 1:
		a2=f[4]*100+f[3]*10+f[2];
	break;
	case 2:
		a2=f[4]*10+f[3];
	break;
	case 3:
		a2=f[4];
	break;
	case 5:
		a2=f[4]*10000+f[3]*1000+f[2]*100+f[1]*10+f[0];
	}
		printf("%d", a2);
    return 0;
}
