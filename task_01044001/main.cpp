#include<iostream>
#include <iomanip>
#include "CarFactory.h"

using namespace std;

// ���� ������������ �� �����
void PrintCarConfiguration(const string& configName, shared_ptr <Car> car) {
	cout << "\n======== " << configName << " ========\n";
	cout << "\n������:\n";

	shared_ptr <Engine> engine = car->GetEngine();


	cout << "������: " << engine->getModel() << endl;
	cout << "���������: " << engine->getPower() << endl;
	cout << "��� ������: ";
	
	switch (engine->getFuelType()) {
	case FuelType::Diesel:
		std::cout << "�������� ������\n";
		break;
	case FuelType::Petrol:
		std::cout << "������\n";
		break;
	case FuelType::Electro:
		std::cout << "�������������\n";
		break;
	default:
		std::cout << "�������� ��� ��������\n";
		break;
	}

	cout << "\n�����:\n";
	shared_ptr <Body> body = car->GetBody();
	cout << "ʳ������ ������: " << body->getDoorCount() << endl;
	cout << "ʳ������ ����: "  << body->getSeatCount() << endl;

	cout << "\n�����̲Ѳ�:\n";
	shared_ptr <Transmission> transmission = car->GetTransmission();
	cout << "��� ������� �������: ";
	switch (transmission->getTransmissionType()) {
	case TransmissionType::Mechanical:
		std::cout << "��������\n";
		break;
	case TransmissionType::Automatic:
		std::cout << "�����������\n";
		break;
	case TransmissionType::Robot:
		std::cout << "������������\n";
		break;
	case TransmissionType::Variator:
		std::cout << "���������\n";
		break;
	case TransmissionType::Tiptronic:
		std::cout << "ҳ������\n";
		break;
	default:
		std::cout << "�������� ���\n";
		break;
	}
	cout << "ʳ������ �������: " << transmission->getGearCount() << endl;
	cout << "�����: ";
	switch (transmission->getDriveType()) {
	case DriveType::Full:
		std::cout << "������\n";
		break;
	case DriveType::Front:
		std::cout << "�������\n";
		break;
	case DriveType::Posterior:
		std::cout << "�����\n";
		break;
	default:
		std::cout << "�������� ���\n";
		break;
	}

	cout << "\n���Ҳ���: " << std::fixed << std::setprecision(2) << car->GePrice() << " ���." << endl;

}

int main() {
		system("chcp 1251>nul");


		shared_ptr <CarFactory> factory = make_shared<CarFactory>();
		
		shared_ptr <Car> car1 = make_shared<Car>();
		//
		factory->SetCarEquipment(make_shared<NissanLeaf2020>());
		factory->Configure(car1);
		PrintCarConfiguration("����� ������������", car1);

		shared_ptr <Car> car2 = make_shared<Car>();
		// 
		factory->SetCarEquipment(make_shared <MercedesBenzBClass2017>());
		factory->Configure(car2);
		PrintCarConfiguration("����� ������������", car2);
		
	
	return 0;
}