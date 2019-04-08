
int main() {
	int xpath[100],ypath[100];
		int xi=0,yi=0;
		cin>>xpath[0]>>ypath[0];
		while(xpath[xi]!=1)
		{
			xpath[xi+1]=xpath[xi]/2;
			xi++;
		}

		while(ypath[yi]!=1)
		{
			ypath[yi+1]=ypath[yi]/2;
			yi++;
		}
		while(xi>=0&&yi>=0)
		{
			if(xpath[xi]!=ypath[yi])
			{
				cout<<xpath[xi+1]<<endl;
				return 0;
			}
			xi--;
			yi--;
		}
		cout<<(xi<0?xpath[0]:ypath[0])<<endl;
		return 0;
}