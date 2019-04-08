//******************************
//* ????3.cpp              *
//* ?? 1000012747            *
//* ????????           *
//******************************
int main()
{
	int z,q,s,l,zz,qq,ss,ll;      //??z,q,s,l???????????zz,qq,ss,ll????????
	for(z=1;z<=5;z++)
		for(q=1;q<=5;q++)
			for (s=1;s<=5;s++)
				for(l=1;l<=5;l++)
				{
					if((z!=q)&&(z!=s)&&(z!=l)&&(q!=s)&&(q!=l)&&(s!=l))   //????????
					{
						if (((z+q)==(s+l))&&((z+l)>(s+q))&&((z+s)<q))    //???????
						{
							zz=z;
							qq=q;
							ss=s;
							ll=l;
						}
					}
				}
	if(zz==5)
		cout<<"z"<<" "<<50<<endl;
	if(qq==5)
		cout<<"q"<<" "<<50<<endl;
	if(ss==5)
		cout<<"s"<<" "<<50<<endl;
	if(ll==5)
		cout<<"l"<<" "<<50<<endl;
	if(zz==4)
		cout<<"z"<<" "<<40<<endl;
	if(qq==4)
		cout<<"q"<<" "<<40<<endl;
	if(ss==4)
		cout<<"s"<<" "<<40<<endl;
	if(ll==4)
		cout<<"l"<<" "<<40<<endl;
	if(zz==3)
		cout<<"z"<<" "<<30<<endl;
	if(qq==3)
		cout<<"q"<<" "<<30<<endl;
	if(ss==3)
		cout<<"s"<<" "<<30<<endl;
	if(ll==3)
		cout<<"l"<<" "<<30<<endl;
	if(zz==2)
		cout<<"z"<<" "<<20<<endl;
	if(qq==2)
		cout<<"q"<<" "<<20<<endl;
	if(ss==2)
		cout<<"s"<<" "<<20<<endl;
	if(ll==2)
		cout<<"l"<<" "<<20<<endl;
	if(zz==1)
		cout<<"z"<<" "<<10<<endl;
	if(qq==1)
		cout<<"q"<<" "<<10<<endl;
	if(ss==1)
		cout<<"s"<<" "<<10<<endl;
	if(ll==1)
		cout<<"l"<<" "<<10<<endl;            //?????
	return 0;
}