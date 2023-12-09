#pragma once
#include <string>
enum class TransmissionType // ��� ������� �������
{
    Mechanical,
    Automatic,
    Robot,
    Variator,
    Tiptronic
};

enum class DriveType // ��� �������
{
    Full,
    Front,
    Posterior
};

class Transmission { // ��������
protected:
    TransmissionType transmissionType; // ��� ������� �������
    int              gearCount = 0;    // ʳ������ �������
    DriveType        driveType;        // ��� �������
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
