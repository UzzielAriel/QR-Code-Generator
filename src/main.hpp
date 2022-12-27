#ifndef MAIN_H
#define MAIN_H

const int QR_SIZE = 25;
const std::string data = "Hello, World!";
const int ERROR_CORRECTION_LEVEL = 2;
const int VERSION = 1;

#include "encode_data.cpp"
#include "generate_qr_code.cpp"
#include "output_qr_code.cpp"

#endif