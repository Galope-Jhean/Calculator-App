#include "CalculatorUI.h"

using namespace ModernCalculatorUI;

[STAThreadAttribute]

int main() {
	Application::Run(gcnew CalculatorUI());
	return 0;
}

