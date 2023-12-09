#pragma once
#include <string>

enum class FuelType // ��� ������
{
    Diesel, 
    Petrol,
    Electro
};

class Engine { // ������ 
public:
    virtual std::string getModel()    const = 0; // ������ �������
    virtual int         getPower()    const = 0; // ��������� �������
    virtual FuelType    getFuelType() const = 0; // ��� ������
    virtual ~Engine() {}
};

class BH41J_Engine : public Engine {
public:
    BH41J_Engine();
    std::string getModel()    const override;
    int         getPower()    const override;
    FuelType    getFuelType() const override;
};

class AA43F_Engine : public Engine {
public:
    AA43F_Engine();
    std::string getModel()    const override;
    int         getPower()    const override;
    FuelType    getFuelType() const override;
};

class BB67U_Engine : public Engine {
public:
    BB67U_Engine();
    std::string getModel()    const override;
    int         getPower()    const override;
    FuelType    getFuelType() const override;
};


BH41J_Engine::BH41J_Engine()
{

}

std::string BH41J_Engine::getModel() const
{
    return "BH41J";
}

int BH41J_Engine::getPower() const
{
    return 150;
}

FuelType BH41J_Engine::getFuelType() const
{
    return FuelType::Diesel;
}

AA43F_Engine::AA43F_Engine()
{

}

std::string AA43F_Engine::getModel() const
{
    return "AA43F";
}

int AA43F_Engine::getPower() const
{
    return 200;
}

FuelType AA43F_Engine::getFuelType() const
{
    return FuelType::Electro;
}

BB67U_Engine::BB67U_Engine()
{

}

std::string BB67U_Engine::getModel() const
{
    return "BH41J";
}

int BB67U_Engine::getPower() const
{
    return 170;
}

FuelType BB67U_Engine::getFuelType() const
{
    return FuelType::Petrol;
}
