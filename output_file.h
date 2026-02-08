#ifndef C_ALL_OUTPUT_FILE_H
#define C_ALL_OUTPUT_FILE_H

#include <string>
#include <vector>

struct Function {
    std::string name;
    std::string body;
};

class output_file {
    std::string main;
    std::vector<Function> functions;

public:
    std::string construct_output_file();
};


#endif //C_ALL_OUTPUT_FILE_H