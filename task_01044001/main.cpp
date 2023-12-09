#include<iostream>
#include <iomanip>
#include "CarFactory.h"

using namespace std;

// вивід конфігурації на екран
void PrintCarConfiguration(const string& configName, shared_ptr <Car> car) {
	cout << "\n======== " << configName << " ========\n";
	cout << "\nДВИГУН:\n";

	shared_ptr <Engine> engine = car->GetEngine();


	cout << "Модель: " << engine->getModel() << endl;
	cout << "Потужність: " << engine->getPower() << endl;
	cout << "Вид палева: ";
	
	switch (engine->getFuelType()) {
	case FuelType::Diesel:
		std::cout << "Дизельне пальне\n";
		break;
	case FuelType::Petrol:
		std::cout << "Бензин\n";
		break;
	case FuelType::Electro:
		std::cout << "Електроенергія\n";
		break;
	default:
		std::cout << "Невідомий тип пального\n";
		break;
	}

	cout << "\nКУЗОВ:\n";
	shared_ptr <Body> body = car->GetBody();
	cout << "Кількість дверей: " << body->getDoorCount() << endl;
	cout << "Кількість місць: "  << body->getSeatCount() << endl;

	cout << "\nТРАНСМІСІЯ:\n";
	shared_ptr <Transmission> transmission = car->GetTransmission();
	cout << "Вид коробки передач: ";
	switch (transmission->getTransmissionType()) {
	case TransmissionType::Mechanical:
		std::cout << "Механічна\n";
		break;
	case TransmissionType::Automatic:
		std::cout << "Автоматична\n";
		break;
	case TransmissionType::Robot:
		std::cout << "Роботизована\n";
		break;
	case TransmissionType::Variator:
		std::cout << "Варіаторна\n";
		break;
	case TransmissionType::Tiptronic:
		std::cout << "Тіптронік\n";
		break;
	default:
		std::cout << "Невідомий тип\n";
		break;
	}
	cout << "Кількість передач: " << transmission->getGearCount() << endl;
	cout << "Привід: ";
	switch (transmission->getDriveType()) {
	case DriveType::Full:
		std::cout << "Повний\n";
		break;
	case DriveType::Front:
		std::cout << "Передній\n";
		break;
	case DriveType::Posterior:
		std::cout << "Задній\n";
		break;
	default:
		std::cout << "Невідомий тип\n";
		break;
	}

	cout << "\nВАРТІСТЬ: " << std::fixed << std::setprecision(2) << car->GePrice() << " грн." << endl;

}

int main() {
		system("chcp 1251>nul");


		shared_ptr <CarFactory> factory = make_shared<CarFactory>();
		
		shared_ptr <Car> car1 = make_shared<Car>();
		//
		factory->SetCarEquipment(make_shared<NissanLeaf2020>());
		factory->Configure(car1);
		PrintCarConfiguration("Перша комплектація", car1);

		shared_ptr <Car> car2 = make_shared<Car>();
		// 
		factory->SetCarEquipment(make_shared <MercedesBenzBClass2017>());
		factory->Configure(car2);
		PrintCarConfiguration("Друга комплектація", car2);
		
	
	return 0;
}