#include <iostream>
#include <string>
using namespace std;

class kryg {
private:
	float r;
public:
	kryg(float r) {
		this->r = r;
	};

	float dl(float r) {
		this->r = r;
		return 3.14 * r * 2;
		
	}

	float S(float r) {
		this->r = r;
		return 3.14 * r * r;
		
	}
	void printAllData() {
		cout << "����� ����������: " <<dl(r) << endl;
		cout << "S ����������: " << S(r);
	}

};

int main() {
	setlocale(0, "");
	float r;
	cout << "r? = ";
	cin >> r;
	kryg res{r};
	res.printAllData();

}