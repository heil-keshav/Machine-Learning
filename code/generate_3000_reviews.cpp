#include <bits/stdc++.h>
using namespace std;

int get_random(){
	int x;
	
	x = rand() % 12500;
	return x;
}


int main(){
	
	vector <string> input1;
	vector<bool> isTaken1(25000,0);
	f.close();
	f.open("labeledBow_train.feat");
	while(getline(f,review)){
		
		input1.push_back(review);
		
	    
	}
	int count_pt = 0,count_nt=0;
	while (count_pt < 500){
		y = get_random();
		
		while(isTaken1[y]){
			y = get_random();
		}
		isTaken1[y] = true;
		f1 << input1[y]<<endl;
		count_pt++;
	}
	while (count_nt < 500){
		y = get_random()+12500;
		
		while(isTaken1[y]){
			y = get_random();
		}
		isTaken1[y] = true;
		f1 << input1[y]<<endl;
		count_nt++;
	}
	f.close();
	f1.close();



	vector <string> input;
	vector<bool> isTaken(25000,0);
	string review;
	ifstream f;
	f.open("labeledBow_test.feat");


	while(getline(f,review)){
		
		input.push_back(review);
		
	    
	}
	
	
	int y,count_p = 0,count_n=0,count_pv=0,count_nv=0;
	ofstream f1;
	f1.open("3000.feat");
	while (count_p < 500){
		y = get_random();
		
		while(isTaken[y]){
			y = get_random();
		}
		isTaken[y] = true;
		f1 << input[y]<<endl;
		count_p++;
	}

	while (count_n < 500){
		y = get_random()+12500;
		
		while(isTaken[y]){
			y = get_random();
		}
		isTaken[y] = true;
		f1 << input[y]<<endl;
		count_n++;
	}

	while (count_pv < 500){
		y = get_random();
		
		while(isTaken[y]){
			y = get_random();
		}
		isTaken[y] = true;
		f1 << input[y]<<endl;
		count_pv++;
	}	

	while (count_nv < 500){
		y = get_random()+12500;
		
		while(isTaken[y]){
			y = get_random();
		}
		isTaken[y] = true;
		f1 << input[y]<<endl;
		count_nv++;
	}
	

	
	return 0;
}


 