#include <iostream>
#include <vector>
#include "main.hpp"

int main() {

	std::vector<int> encoded_data = encode_data(::data);
	// std::vector<std::vector<int>> qr_code = generate_qr_code(encoded_data);
	// output_qr_code(qr_code);

	return 0;
}