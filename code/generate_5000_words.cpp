#include <bits/stdc++.h>
using namespace std;

int main(){

	ifstream f;
	double pol;
	int index=0;
	f.open("imdbEr.txt");
	vector< pair<double, int> > v;
	while(f>>pol){
		v.push_back(make_pair(pol,index));
		index++;
	}	

	sort(v.begin(),v.end());
	f.close();
	ofstream f1;
	f1.open("5000_pol.feat");
	for (int i=0; i<2500; i++){
		f1<<v[i].second<<endl;
	}

	vector<pair<double, int> >:: iterator itr = v.end(); 
	int count =0;
	while(count<2500){	
		f1<<(*itr).second<<endl;
		count++;
		itr--;
	}	
	f1.close();
	return 0;
}