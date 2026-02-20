// 3.7.6
#include <iostream>
const int Ep_style_numb = 100;//欧洲风格的油耗单位是L/100km

int main() {
   double kilometer =0.0, oil_liter = 0.0;

    std::cout << "Enter the distance that you've dirver in kilometer: ";
    std::cin >> kilometer;
    std::cout << "Enter the comsumption of oil: ";
    std::cin >> oil_liter;
    double liter_per_kil = oil_liter / kilometer;
    std::cout << "The average fuel comsumption is " 
         << liter_per_kil * Ep_style_numb << " L/" << Ep_style_numb << "km" << std::endl;
}