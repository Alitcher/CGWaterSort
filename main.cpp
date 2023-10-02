#include <iostream>
#include <vector>
#include <stack>

int main() {
    std::vector<std::stack<std::string>> bottles(3);  // Create a vector of 3 stacks

    // Fill the stacks with color sequences
    bottles[0].push("Red");
    bottles[0].push("Blue");
    bottles[0].push("Blue");
    bottles[0].push("Red");

    bottles[1].push("Red");
    bottles[1].push("Red");
    bottles[1].push("Blue");

    bottles[2].push("Blue");

    // Example: Printing the current state of the bottles
    for (int i = 0; i < bottles.size(); ++i) {
        std::cout << "Bottle " << (i + 1) << ": ";
        while (!bottles[i].empty()) {
            std::cout << bottles[i].top() << " ";
            bottles[i].pop();
        }
        std::cout << std::endl;
    }

    return 0;
}
