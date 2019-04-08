int main()
{
    int a,b,c,d,e,f,i;
    int t=1;
    int s;
    i=0;
    while (t==1){
        scanf ("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
        s=(12+d-a)*3600+60*e+f-60*b-c;
        if (s==43200){
            break;
        }else {
            printf ("%d\n",s);
        }
        i++;
    }
	
	
	return 0;
}

