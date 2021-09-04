#include <iostream>
using namespace std;
int  n,m,i,g,b,bb,z,out,outt;		
char k[100][100];
int a[100][100];
	

void func(int x,int y){
	
	int step=a[x][y];
	
	if(x>n || y>m || x<1 || y<1) return;
	
	if(a[x-1][y]==-1 || a[x-1][y]-a[x][y]>1) {
	a[x-1][y]=step+1;	
	func(x-1,y);
}
	if(a[x+1][y]==-1 || a[x+1][y]-a[x][y]>1) {
	a[x+1][y]=step+1;	
	func(x+1,y);
}
	if(a[x][y+1]==-1 || a[x][y+1]-a[x][y]>1) {
	a[x][y+1]=step+1;	
	func(x,y+1);
}
	if(a[x][y-1]==-1 || a[x][y-1]-a[x][y]>1)  {
	a[x][y-1]=step+1;	
	func(x,y-1);
}

}


main(){

	cin>>n>>m;
	
	for(i=1;i<=n;i++)
	for(g=1;g<=m;g++){
	cin>>k[i][g];
	if(k[i][g]=='#') a[i][g]=-2;
	else a[i][g]=-1;
	}

	cin>>b>>bb>>out>>outt;
	
	a[b][bb]=0;

	func(b,bb);
	
	if(a[out][outt]==-1)
	cout<<-1;
	else cout<<a[out][outt];
}


