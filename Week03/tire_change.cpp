#include<iostream>
int main() {
  
  // Chech if the tire needs changing
  // The tire tread needs to be at least 0.6 deep and the tire must be at most 10 years old. 
	float tyreTreadDepth;
	const float minimumTireDepth = 0.6;
	int age;

	std::cout << "Enter tire depth: ";
	std::cin >> tyreTreadDepth;
	std::cout << "Enter tire year: ";
	std::cin >> age;
	bool tireIsWornOut = tyreTreadDepth < minimumTireDepth;
	bool tireIsOld = 2021 - age > 10;
	bool shouldChangeTire = tireIsWornOut || tireIsOld;
	
	bool shouldNotChangeTire = (tyreTreadDepth >= minimumTireDepth) && (2021 - age <= 10);
	std::cout << std::boolalpha;
	std::cout << "Should change tire? " << shouldChangeTire << "\n";
	std::cout << "Should not change tire? " << shouldNotChangeTire << "\n";

	if (shouldChangeTire) {
		std::cout << "You should change your tires!";
		std::cout << "Go to bace dancho!";
	}
	else {
		std::cout << "You don't need to change you tires.";
	}
	
}
