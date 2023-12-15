#include <string>
#include <iostream>
#include <vector>
using namespace std;

//output is a vector with strings 
//I worked with Arisha Haque (who is my programming partner). 
vector<string> finder(vector<vector<string>> input){
	int n = input.size(); 
	bool single = true;
	vector<string> output;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < input[i].size(); j++){
			for (int a = 0; a < output.size(); a++){
				if (input[i][j] == output[a]){
					single = false;
				}
			}
			if (single){
				output.push_back(input[i][j]);
			}
			single = true;
		}
	}
return output;
}

int main() {
    vector<vector<string>> vs = 
    {
        {"one", "two", "three",
        "four", "one", "two",
        "three", "three", "five"}
    };
    vector<string> vsf = finder(vs);
    for (int i = 0; i < vsf.size(); i++)
    {
        cout << vsf[i] << endl;
    }
}