#include <iostream>
#include <vector>


using namespace std;
int main() {
	int n;
	float y;
	cin >> n;
	vector<float> s;
		for (int i = 0; i < n; i++) {
			cin >> y;
			s.push_back(y);
			
	
	}
		for (auto it = s.begin(); it != s.end(); it++) {
			*it /= 2;
			cout << *it<<" ";
		}



	return 0;
}
