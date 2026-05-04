#include "solver.hpp"

#include <filesystem>
#include <iostream>
#include <stdexcept>
#include <string>

int main(int argc, char** argv) {
    try {
        if (argc < 3) {
            std::cerr << "Usage: bvp_solver <input.json> <output_dir>\n";
            return 1;
        }

        const std::string inputPath = argv[1];
        const std::string outputDir = argv[2];

        std::filesystem::create_directories(outputDir);

        const InputData input = parseInputJson(inputPath);
        const ProjectResult result = runProjectAnalysis(input);

        writeCsvTables(outputDir, result);
        writeResultJson((std::filesystem::path(outputDir) / "result.json").string(), result);

        std::cout << "Completed UI/backend skeleton. Output written to: " << outputDir << "\n";
        std::cout << "Tasks prepared: " << result.tasks.size() << "\n";
        std::cout << "Numerical methods are intentionally left as task-specific TODOs.\n";
        return 0;
    } catch (const std::exception& ex) {
        std::cerr << "Error: " << ex.what() << "\n";
        return 2;
    }
}
