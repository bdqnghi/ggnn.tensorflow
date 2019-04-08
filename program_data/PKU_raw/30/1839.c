int main()
{
	int n,i,s=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	switch(i){
	    case 17:
		case 27:	
		case 37:
		case 47:
		case 57:
		case 67:
		case 87:
		case 97:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 78:
		case 79:
			continue;
		default:
			if(i%7!=0)
				s=s+i*i;}
	}
	printf("%d",s);
	return 0;
}