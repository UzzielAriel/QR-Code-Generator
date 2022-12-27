#include <iostream>
#include <vector>
#include <string>
#include <bitset>
#include <algorithm>

std::vector<int> encode_data(std::string data)
{
	std::string binary_string;
	for (char c : data)
	{
		binary_string += std::bitset<8>(c).to_string();
	}

	// std::cout << binary_string << std::endl;

	int block_size = 8;

	std::vector<int> blocks;

	for (int i = 0; i < binary_string.size(); i+=block_size) {
		blocks.push_back(std::stoi(binary_string.substr(i, block_size)));
	}

	// std::string tmp= "";

	// for(int i = 0; i < binary_string.size(); i++){
	// 	tmp += binary_string[i];
	// 	if (i%block_size == 0 && i != 0) {
	// 		blocks.push_back(std::stoi(tmp));
	// 		// std::cout << std::stoi(tmp) << std::endl;
	// 		tmp = "";
	// 	}
	// }
	// blocks.push_back(std::stoi(tmp));

	return blocks;
}