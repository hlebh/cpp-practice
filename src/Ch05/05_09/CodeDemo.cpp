// Complete Guide to C++ Programming Foundations
// Challenge 05_09
// Calculate Resource Cost, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>
#include <vector>

struct Resource{
    std::string name;
    double baseCost;
    char type; // 'B' for Basic, 'L' for Luxury, 'E' for Essential
};

double CalculateTotalCost(std::vector<Resource> resources){
    double result = 0.0;
    char resourceType;
    double resourceCost;
    double tax;

    for(int i = 0; i < resources.size(); i++) {
        resourceType = resources[i].type;
        resourceCost = resources[i].baseCost;
        switch (resourceType) {
            case 'B':
                tax = 0.05;
                break;
            case 'L':
                tax = 0.15;
                break;
            case 'E':
                tax = 0.0;
                break;
            default:
                tax = 0.05;
                break;
        }
        result += (resourceCost + (resourceCost*tax));
    }
    
    return result;
}

int main(){
    
    // Example 1 resources
    std::vector<Resource> resources = {
        {"Wood", 125.0, 'B'},
        {"Gold", 200.0, 'L'},
        {"Water", 50.0, 'E'}
    };

    double learnerResult = CalculateTotalCost(resources);
    
    std::cout << "Your code returned: " << learnerResult << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
