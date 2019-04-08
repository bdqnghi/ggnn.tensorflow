int main()
{
    /*A??B??????C??????? 
      B??A??????A??C??? 
      C????B????B?A???? 
      ?????????????????????*/
	int a,b,c;
	int a0,b0,c0;
	for(a=0;a<=2;a++)
	{
		for(b=0;b<=2;b++)
		{
			for(c=0;c<=2;c++)
			{
				a0=(b>a)+(c==a);
				b0=(a>b)+(a>c);
				c0=(c>b)+(b>a);
				if (((a>c&&a0<c0)||(a==c&&a0==c0)||(a<c&&a0>c0))&&((a>b&&a0<b0)||(a==b&&a0==b0)||(a<b&&a0>b0))&&((c>b&&c0<b0)||(c==b&&c0==b0)||(c<b&&c0>b0)))
				{
					for(int i=0;i<=2;i++)
					{
						if(a==i) cout<<"A";
						if(b==i) cout<<"B";
						if(c==i) cout<<"C";
					}
					goto end;
				}
			}
		}
	}
	end:return 0;
}