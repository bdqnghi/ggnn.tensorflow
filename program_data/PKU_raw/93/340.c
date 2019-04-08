int main()
{int zs;
 cin>>zs;
 if(zs%105==0)
	 cout<<"3"<<" "<<"5"<<" "<<"7"<<endl;
 else if(zs%35==0&&zs%3!=0)
	 cout<<"5"<<" "<<"7"<<endl;
 else if(zs%21==0&&zs%5!=0)
	 cout<<"3"<<" "<<"7"<<endl;
 else if(zs%15==0&&zs%7!=0)
	 cout<<"3"<<" "<<"5"<<endl;
 else if(zs%7==0&&zs%5!=0&&zs%3!=0)
	 cout<<"7"<<endl;
 else if(zs%7!=0&&zs%5==0&&zs%3!=0)
	 cout<<"5"<<endl;
 else if(zs%7!=0&&zs%5!=0&&zs%3==0)
	 cout<<"3"<<endl;
 else if(zs%7!=0&&zs%5!=0&&zs%3!=0)
	 cout<<"n"<<endl;
 return 0;
}