#include <stdexcept>
#include <string>
#include <vector>
#include "compiler.h"
#include "transformer.h"

using std::vector;

int main(const int argc, const char** argv) {
    const vector<std::string> args(argv + 1, argv + argc);
    // Input errors
    if (args.empty()) {
        throw std::runtime_error("Please provide path to C-ALL file");
    }
    if (args[0].substr(args[0].size() - 5) != ".call") {
        throw std::runtime_error("Please provide path to a C-ALL file using proper .call extension");
    }
    transform(args);
    return 0;
}
