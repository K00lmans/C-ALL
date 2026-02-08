#ifndef C_ALL_TRANSFORMER_H
#define C_ALL_TRANSFORMER_H

#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>
#include <vector>
#include "output_file.h"

namespace fs = std::filesystem;

void transform(const std::vector<std::string>& args);

#endif //C_ALL_TRANSFORMER_H