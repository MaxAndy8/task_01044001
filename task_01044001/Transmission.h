#pragma once
#include <string>
enum class TransmissionType // Тип коробки передач
{
    Mechanical,
    Automatic,
    Robot,
    Variator,
    Tiptronic
};

enum class DriveType // Тип приводу
{
    Full,
    Front,
    Posterior
};

class Transmission { // Трансмісія
protected:
    TransmissionType transmissionType; // Вид коробки передач
    int              gearCount = 0;    // Кількість передач
    DriveType        driveType;        // Тип приводу
public:
    Transmission(
        TransmissionType transmType = TransmissionType::Mechanical,
        int gears = 1, 
        DriveType drType = DriveType::Front)
        : transmissionType(transmType), gearCount(gears), driveType(drType) {}
    virtual int              getGearCount()        const { return gearCount; }
    virtual TransmissionType getTransmissionType() const { return transmissionType; }
    virtual DriveType        getDriveType()        const { return driveType; }
    virtual ~Transmission() {}
};
