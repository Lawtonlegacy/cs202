// Lab 5 Binary Files
// 

#include <iostream>
#include <fstream>
#include <vector>

void print(std::vector<int> const& input);

int main() {

	//open file in binary mode rather than text
	std::ifstream file("data.dat", std::ios::binary);

	//error if problem
	if (!file) {
		std::cout << "Error opening file \n";
	}

	std::vector<int> data; //container to hold integers from file
	int counter = 0;

	while (true) {
		file.seekg(sizeof(int) * counter);
		int x;
		file.read(reinterpret_cast<char*>(&x), sizeof(int));
		data.push_back(x);
		counter++;
		if (!file) {
			if (file.eof()) {
				break;
			}
		}
	}
	int total = data.size();
	int sum = 0;

	for (auto i : data) {
		sum += data[i];
	}

	double average = (double)sum / total;

	std::cout << "\n This is the total: " << total << "\n";
	std::cout << "\n This is the sum: " << sum << "\n";
	std::cout << "\n This is the average: " << average << "\n";

	return 0;

}

void print(std::vector<int> const& input) {

	for (int i = 0; i < input.size(); i++) {
		std::cout << input.at(i) << std::endl;
	}
}