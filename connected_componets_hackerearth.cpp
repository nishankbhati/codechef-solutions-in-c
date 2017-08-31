
#include <bits/stdc++.h>
using namespace std;
inline void IO(void){
	freopen("input.txt","r",stdin);
};
inline void FAST_IO(void){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
};


int maxx=1002;
int G[1002][1002];
int vis[1002][1002];


int solve(int x,int y){

	queue<pair <int,int> > Q;
	
	vis[x][y]=1;
	Q.push(make_pair(x,y));
	int soilders=1;

	while(!Q.empty()){
		x= Q.front().first;
		y= Q.front().second;
		Q.pop();
		for(int i=-1;i<=1;i++){
			for(int j=-1;j<=1;j++){
				if(vis[x+i][y+j]==0 && G[x+i][y+j]==1){
					vis[x+i][y+j]=1;
					Q.push(make_pair(x+i,y+j));
					soilders++;
				}
			}
		}
	}
	return soilders;

}

int main(int argc, char const *argv[])
{
	/* code */
	IO();
	FAST_IO();	
	int t;
	cin >> t;
	while(t--){
		int x,y;
		cin >> x >> y;
		memset(G,0,sizeof(G));
		memset(vis,0,sizeof(vis));
		for(int i=1;i<=x;i++){
			for(int j=1;j<=y;j++){
				cin >> G[i][j];
			}
		}
		int ans=0; //Total number of soilder in any group
		int cnt=0; //maintains total no of troups

		for(int i=1;i<=x;i++){
			for(int j=1;j<=y;j++){
				if(G[i][j]==1 && vis[i][j]==0){ //COUNTS Maximum number in uncounted group
					ans=max(solve(i,j),ans);
					cnt++;
				}
			}
		}
		cout << cnt << " " << ans << "\n";

	}
	return 0;
}
