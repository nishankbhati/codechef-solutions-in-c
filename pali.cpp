#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str,int low,int high){
	while(low<high){
		if(str[low]!=str[high]) return false;

		high--;
		low++;
	}
	return true;
}

void allPartUtil(vector<vector<string> >&allpart, vector<string>&currpart, int start,int n,string str){
	if(start>=n){
		allpart.push_back(currpart);
		return;
	}
	for(int i=start;i<n;i++){
		if(isPalindrome(str,start,i)){

			currpart.push_back(str.substr(start,i-start+1));
			allPartUtil(allpart,currpart,i+1,n,str);

			currpart.pop_back();
		}
	}
}

void allPalPartitions(string str){
	int n=str.length();

	vector<vector<string> > allpart;
	vector<string> currpart;

	allPartUtil(allpart,currpart,0,n,str);

	for(int i=0;i<allpart.size();i++){
		for(int j=0;j<allpart[i].size();j++){
			cout << allpart[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "count " << allpart.size() << "\n";
}

int main()
{   
	
	string str = "aaaaaaaa";
	allPalPartitions(str);
	//cout << co << "\n";
	return 0;
}
