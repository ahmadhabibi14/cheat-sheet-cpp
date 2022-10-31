#include <iostream>
#include <sstream>
#include <iomanip>

int main() {
    std::ostringstream line_a, line_b;

    for (int i = 0; i < 4; ++i) {
        line_a << std::setw(6) << "LOOP"; 
        line_b << std::setw(6) << i;  
    }

    // OUTPUT 
    // LOOP  LOOP  LOOP  LOOP
    //    0     1     2     3
    std::cout << line_a.str() << '\n'
              << line_b.str() << '\n';

    return 0;
}