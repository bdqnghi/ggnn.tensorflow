void main()
{
	int nian(int a,int b);
	int qian(int a,int b,int c);
	int hou(int a,int b,int c);
	int a,b,c,d,e,f,g,k;
	scanf("%d%d%d\n",&a,&b,&c);
	scanf("%d%d%d",&d,&e,&f);
	g=d-a;
	k=nian(a,g);
	if(g!=0)
	{k=k+qian(a,b,c);
	k=k+hou(d,e,f);}
	else
	{k=k+hou(d,e,f);
	k=k-hou(a,b,c);
	}
	printf("%d\n",k);
}
	
int nian(int a,int b)
{   int i,j=0;
	for(i=1;i<=b-1;i++)
	{if(((a+i) % 4 == 0 && (a+i) % 100 != 0) || ((a+i) % 400 == 0))
		j=j+366;
	else j=j+365;
	}
	return(j);
}

int qian(int a,int b,int c)
{
	int pd1(int a,int b);
	int pd2(int a,int b);
	int pd3(int a);
	int pd4(int a);
	int e=0,i,j;
	if((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
     {
     e=pd1(b,c);
     for(i=b+1;i<=12;i++)
     {e=e+pd3(i);}}
     else 
      {
     e=pd2(b,c);
     for(i=b+1;i<=12;i++)
     {e=e+pd4(i);}}
    return(e);
     }
     
int hou(int a,int b,int c)
{
	int pd3(int a);
	int pd4(int a);
	int e,i,j;
	e=c;
	if((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
     {
     for(i=1;i<b;i++)
     {e=e+pd3(i);}}
     else 
      {
     for(i=1;i<b;i++)
     {e=e+pd4(i);}}
    return(e);
     }
     
     
int pd1(int a,int b)
{switch(a)
	{case 1:return(31-b);break;
	case 2:return(29-b);break;
	case 3:return(31-b);break;
	case 4:return(30-b);break;
	case 5:return(31-b);break;
	case 6:return(30-b);break;
	case 7:return(31-b);break;
	case 8:return(31-b);break;
	case 9:return(30-b);break;
	case 10:return(31-b);break;
	case 11:return(30-b);break;
	case 12:return(31-b);break;
	default:return(0);}
}


int pd2(int a,int b)
{switch(a)
	{case 1:return(31-b);break;
	case 2:return(28-b);break;
	case 3:return(31-b);break;
	case 4:return(30-b);break;
	case 5:return(31-b);break;
	case 6:return(30-b);break;
	case 7:return(31-b);break;
	case 8:return(31-b);break;
	case 9:return(30-b);break;
	case 10:return(31-b);break;
	case 11:return(30-b);break;
	case 12:return(31-b);break;
	default:return(0);}
}

int pd3(int a)
{switch(a)
	{case 1:return(31);break;
	case 2:return(29);break;
	case 3:return(31);break;
	case 4:return(30);break;
	case 5:return(31);break;
	case 6:return(30);break;
	case 7:return(31);break;
	case 8:return(31);break;
	case 9:return(30);break;
	case 10:return(31);break;
	case 11:return(30);break;
	case 12:return(31);break;
	default:return(0);}
}

int pd4(int a)
{switch(a)
	{case 1:return(31);break;
	case 2:return(28);break;
	case 3:return(31);break;
	case 4:return(30);break;
	case 5:return(31);break;
	case 6:return(30);break;
	case 7:return(31);break;
	case 8:return(31);break;
	case 9:return(30);break;
	case 10:return(31);break;
	case 11:return(30);break;
	case 12:return(31);break;
	default:return(0);}
}
